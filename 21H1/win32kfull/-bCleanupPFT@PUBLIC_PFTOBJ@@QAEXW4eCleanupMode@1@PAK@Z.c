/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z @ 0x1D069A
 * Callers:
 *     _vCleanupPrivateFonts@0 @ 0xA770E (_vCleanupPrivateFonts@0.c)
 *     ?RegistryNotificaionEnumerationEnd@@YGXPAK@Z @ 0x1EB769 (-RegistryNotificaionEnumerationEnd@@YGXPAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *this, int a2, _DWORD *a3)
{
  int result; // eax
  int v5; // ebx
  struct PFF **i; // esi
  struct PFF *v7; // ecx
  int v8; // ecx
  int v9; // [esp+Ch] [ebp-BCh]
  unsigned int v10; // [esp+10h] [ebp-B8h]
  _DWORD v12[35]; // [esp+18h] [ebp-B0h] BYREF
  _DWORD v13[9]; // [esp+A4h] [ebp-24h] BYREF

  if ( a2 )
  {
    result = a2 - 1;
    if ( a2 != 1 )
      return result;
    v10 = 0;
    v5 = *(_DWORD *)(*(_DWORD *)this + 12);
  }
  else
  {
    v5 = 20;
    v10 = 128;
  }
  v9 = v5;
  memset(v13, 0, sizeof(v13));
  memset(v12, 0, 0x88u);
  v13[3] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  result = (int)v13;
  v12[23] = v13;
  if ( a3 )
    *a3 = 0;
  for ( i = (struct PFF **)(*(_DWORD *)this + 24); v5; v9 = --v5 )
  {
    v7 = *i;
    if ( !*i )
      goto LABEL_27;
    do
    {
      if ( a2 != 1 )
        goto LABEL_13;
      result = *((_DWORD *)v7 + 8);
      if ( (result & 0x400) == 0 )
        goto LABEL_25;
      if ( (result & 0x800) != 0 )
      {
        result &= ~0x800u;
        *((_DWORD *)v7 + 8) = result;
      }
      else
      {
LABEL_13:
        v12[2] = v7;
        v12[1] = *((_DWORD *)v7 + 1);
        *((_DWORD *)v7 + 1) = v12;
        if ( v12[1] )
          *(_DWORD *)(v12[1] + 8) = v12;
        if ( PFTOBJ::bUnloadWorkhorse(this, v7, i, v10) )
        {
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
          if ( a3 )
            ++*a3;
        }
        GreAcquireSemaphore(_ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
        if ( *i == (struct PFF *)v12 )
          *i = (struct PFF *)v12[1];
        v8 = v12[2];
        if ( v12[2] )
        {
          *(_DWORD *)(v12[2] + 4) = v12[1];
          v8 = v12[2];
        }
        result = v12[1];
        if ( v12[1] )
          *(_DWORD *)(v12[1] + 8) = v8;
        v7 = (struct PFF *)v12;
      }
LABEL_25:
      v7 = (struct PFF *)*((_DWORD *)v7 + 1);
    }
    while ( v7 );
    v5 = v9;
LABEL_27:
    ++i;
  }
  return result;
}
