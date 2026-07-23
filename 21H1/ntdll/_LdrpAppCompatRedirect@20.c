/*
 * XREFs of _LdrpAppCompatRedirect@20 @ 0x4B2DE3B6
 * Callers:
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall LdrpAppCompatRedirect(int a1, int a2, PUNICODE_STRING DestinationString, int a4, int a5)
{
  int v6; // edi
  int v8; // eax
  void (__thiscall *v9)(_DWORD, int *, _BYTE *, int); // esi
  _DWORD *v10; // esi
  POBJECT_BOUNDARY_DESCRIPTOR *v11; // ecx
  int v12[2]; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  _BYTE v14[5]; // [esp+1Fh] [ebp-5h] BYREF

  v13 = a2;
  if ( !g_ShimsEnabled && !g_ShimsLoading )
    return a5;
  v6 = a5;
  v14[0] = 0;
  v8 = v13;
  v9 = (void (__thiscall *)(_DWORD, int *, _BYTE *, int))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                 g_pfnSE_LdrResolveDllName,
                                                                                 32 - (MEMORY[0x7FFE0330] & 0x1F)));
  if ( a5 < 0 )
    v8 = a1;
  v9(v9, v12, v14, v8);
  if ( v14[0] )
  {
    v10 = (_DWORD *)v13;
    v11 = (POBJECT_BOUNDARY_DESCRIPTOR *)v13;
    *(_DWORD *)(a1 + 16) |= 0x10000u;
    LdrpFreeUnicodeString(v11);
    *(_WORD *)a4 = 0;
    **(_WORD **)(a4 + 4) = 0;
    return LdrpResolveDllName(v12, (int *)a4, DestinationString, v10, *(_DWORD *)(a1 + 16));
  }
  return v6;
}
