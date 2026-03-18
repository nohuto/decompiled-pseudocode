/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YGPAUtagBWL@@PAU1@@Z @ 0x2A4FC
 * Callers:
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

struct tagBWL *__thiscall InternalRebuildHwndListForIMEClass(unsigned int *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ecx
  unsigned int *v5; // ebx
  unsigned int v6; // esi
  int *v7; // edi
  int *v8; // eax
  unsigned int v9; // esi
  int i; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // ebx
  _DWORD *v17; // [esp+Ch] [ebp-Ch]
  PKTHREAD CurrentThread; // [esp+10h] [ebp-8h]
  int v19; // [esp+10h] [ebp-8h]
  _DWORD *v20; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)Win32AllocPool(this[2] - (_DWORD)this + 4, 1819767637);
  v17 = v2;
  v3 = v2;
  v20 = v2;
  if ( !v2 )
    return (struct tagBWL *)this;
  v5 = this + 4;
  v6 = *v5;
  if ( *v5 != 1 )
  {
    v7 = (int *)v5;
    do
    {
      CurrentThread = KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
        PsGetThreadWin32Thread(CurrentThread);
      if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(_gpsi + 4) )
      {
        v19 = _gSharedInfo[1] + (unsigned __int16)v6 * _gSharedInfo[2];
        v8 = (int *)HMPkheFromPhe(v19);
        v9 = HIWORD(v6);
        if ( ((_WORD)v9 == *(_WORD *)(v19 + 14) || !(_WORD)v9 || (_WORD)v9 == 0xFFFF)
          && (*(_BYTE *)(v19 + 13) & 1) == 0
          && *(_BYTE *)(v19 + 12) == 1 )
        {
          for ( i = *v8; i; i = *(_DWORD *)(i + 64) )
          {
            v11 = *(_DWORD *)(*(_DWORD *)(i + 76) + 4);
            if ( (*(_BYTE *)(v11 + 10) & 1) != 0 || *(_WORD *)v11 == *(_WORD *)(_gpsi + 498) )
              goto LABEL_19;
          }
        }
      }
      i = 0;
LABEL_19:
      v12 = *v7;
      v3 = v20;
      if ( i )
      {
        *v20 = v12;
        v3 = ++v20;
      }
      else
      {
        *v5++ = v12;
      }
      v6 = *++v7;
    }
    while ( *v7 != 1 );
    v2 = v17;
  }
  *v3 = 0;
  v13 = v2;
  v14 = *v2;
  if ( *v2 )
  {
    v15 = (char *)v5 - (char *)v2;
    do
    {
      *(int *)((char *)v13++ + v15) = v14;
      v14 = *v13;
    }
    while ( *v13 );
  }
  Win32FreePool(v2);
  return (struct tagBWL *)this;
}
