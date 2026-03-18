/*
 * XREFs of IsRegNameEqual @ 0x1F8099
 * Callers:
 *     bNotIsKeySymbolicLink @ 0xEBC78 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

NTSTATUS __fastcall IsRegNameEqual(HANDLE KeyHandle, void *a2, _DWORD *a3)
{
  int v3; // esi
  PATHOBJ *v4; // ebx
  NTSTATUS v5; // edi
  unsigned int v6; // edi
  PATHOBJ *v7; // eax
  char *v8; // ecx
  _WORD *v9; // ecx
  ULONG *p_cCurves; // eax
  bool v11; // cf
  unsigned __int16 v12; // dx
  unsigned int v14; // [esp+0h] [ebp-24h]
  unsigned int v15; // [esp+0h] [ebp-24h]
  unsigned int v16; // [esp+0h] [ebp-24h]
  unsigned int v17; // [esp+0h] [ebp-24h]
  unsigned int *v18; // [esp+4h] [ebp-20h]
  unsigned int *v19; // [esp+4h] [ebp-20h]
  unsigned int *v20; // [esp+4h] [ebp-20h]
  unsigned int *v21; // [esp+4h] [ebp-20h]
  PVOID KeyInformation; // [esp+14h] [ebp-10h] BYREF
  ULONG Length; // [esp+18h] [ebp-Ch] BYREF
  ULONG ResultLength; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v27; // [esp+20h] [ebp-4h] BYREF

  v3 = 0;
  v4 = 0;
  *a3 = 0;
  ResultLength = 0;
  Length = 0;
  KeyInformation = 0;
  v27 = 0;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0, 0, &ResultLength);
  ZwQueryKey(a2, KeyNameInformation, 0, 0, &Length);
  if ( (ULongAdd(2, ResultLength, (int *)&v27, v14, v18) & 0x80000000) != 0 )
    return 0;
  ResultLength = v27;
  if ( (ULongAdd(2, Length, (int *)&v27, v15, v19) & 0x80000000) != 0 )
    return 0;
  v6 = v27;
  Length = v27;
  if ( (ULongAdd(3, ResultLength, (int *)&v27, v16, v20) & 0x80000000) != 0 )
    return 0;
  ResultLength = v27 & 0xFFFFFFFC;
  if ( (ULongAdd(v6, v27 & 0xFFFFFFFC, (int *)&KeyInformation, v17, v21) & 0x80000000) == 0
    && (v7 = (PATHOBJ *)PALLOCMEM2((size_t)KeyInformation, 1718382187, 1), (v4 = v7) != 0) )
  {
    KeyInformation = (char *)v7 + ResultLength;
    v5 = ZwQueryKey(KeyHandle, KeyNameInformation, v7, ResultLength, &ResultLength);
    if ( v5 >= 0 )
    {
      *((_WORD *)&v4->cCurves + (v4->fl >> 1)) = 0;
      v5 = ZwQueryKey(a2, KeyNameInformation, KeyInformation, Length, &Length);
      if ( v5 >= 0 )
      {
        v8 = (char *)KeyInformation;
        *((_WORD *)KeyInformation + (*(_DWORD *)KeyInformation >> 1) + 2) = 0;
        v9 = v8 + 4;
        p_cCurves = &v4->cCurves;
        while ( 1 )
        {
          v11 = *(_WORD *)p_cCurves < *v9;
          if ( *(_WORD *)p_cCurves != *v9 )
            break;
          if ( !*(_WORD *)p_cCurves )
            goto LABEL_16;
          v12 = *((_WORD *)p_cCurves + 1);
          v11 = v12 < v9[1];
          if ( v12 != v9[1] )
            break;
          ++p_cCurves;
          v9 += 2;
          if ( !v12 )
            goto LABEL_16;
        }
        v3 = v11 ? -1 : 1;
LABEL_16:
        *a3 = v3 == 0;
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v4 )
    Win32FreePool(v4);
  return v5;
}
