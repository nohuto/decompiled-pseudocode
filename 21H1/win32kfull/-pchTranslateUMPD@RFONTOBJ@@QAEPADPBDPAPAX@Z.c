/*
 * XREFs of ?pchTranslateUMPD@RFONTOBJ@@QAEPADPBDPAPAX@Z @ 0x20979C
 * Callers:
 *     ?pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z @ 0x209958 (-pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

char *__thiscall RFONTOBJ::pchTranslateUMPD(RFONTOBJ *this, const char *a2, void **a3)
{
  const char *v3; // edi
  int v4; // eax
  _DWORD *v5; // edx
  const char *v6; // eax
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned int v9; // esi
  int v11; // eax
  void **v12; // ebx
  int CurrentProcess; // eax
  int v14; // [esp-18h] [ebp-30h]
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v16 = 0;
  v3 = a2;
  v17 = 0;
  if ( (unsigned int)a2 < 0x10000 )
    return 0;
  if ( a2 > _MmHighestUserAddress )
    return 0;
  v4 = *(_DWORD *)(*(_DWORD *)this + 84);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD **)(v4 + 120);
  if ( !v5 )
    return 0;
  v6 = *(const char **)(v4 + 20);
  v7 = 0;
  a2 = v6;
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v8 = (_DWORD *)*v5;
    if ( !*v5 )
      goto LABEL_16;
    if ( v7 )
    {
      v9 = v8[16];
    }
    else
    {
      v17 = v8[5];
      v9 = v8[16];
      v16 = v9;
      v6 = a2;
    }
    if ( !v9 )
    {
      v9 = v16;
      if ( !v16 )
      {
        v9 = v8[3];
        if ( !v9 )
          goto LABEL_16;
      }
    }
    if ( v9 > (unsigned int)v3 )
      goto LABEL_16;
    if ( (unsigned int)v3 < v9 + v8[4] )
      break;
    v6 = a2;
LABEL_16:
    ++v5;
    if ( ++v7 >= (unsigned int)v6 )
      return 0;
  }
  v11 = v8[5];
  if ( v11 )
    v17 = v8[5];
  else
    v11 = v17;
  if ( !v11 )
    return 0;
  v12 = a3;
  *a3 = 0;
  v14 = v8[4];
  a2 = 0;
  v15 = 0;
  v16 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(v17, CurrentProcess, v12, 0, v14, &v15, &a2, 2, 0, 2) < 0 )
  {
    *v12 = 0;
    return 0;
  }
  return (char *)*v12 + (_DWORD)v3 - v9;
}
