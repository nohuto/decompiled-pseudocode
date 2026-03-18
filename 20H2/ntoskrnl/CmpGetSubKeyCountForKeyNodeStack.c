/*
 * XREFs of CmpGetSubKeyCountForKeyNodeStack @ 0x14087CD90
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EC17C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14087CCF0 (CmpGetSubKeyCountForKcbStack.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpKeyEnumStackCleanup @ 0x1406BDC48 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x1406BDDE4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackAdvance @ 0x140726068 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14087D39C (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(__int64 a1, int *a2)
{
  __int16 i; // dx
  __int16 v5; // dx
  int j; // ebx
  int v7; // edi
  int v9; // eax
  __int16 v10[176]; // [rsp+20h] [rbp-188h] BYREF

  memset(v10, 0, sizeof(v10));
  CmpKeyEnumStackInitialize((char *)v10);
  for ( i = *(_WORD *)a1; ; i = v5 - 1 )
  {
    if ( i <= 0 )
    {
      j = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
LABEL_6:
      *a2 = j;
      v7 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, i) + 16) )
      break;
  }
  v7 = CmpKeyEnumStackStartFromKeyNodeStack(v10, a1, 0LL);
  if ( v7 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v9 = CmpKeyEnumStackAdvance(v10);
      v7 = v9;
      if ( v9 == -2147483622 )
        break;
      if ( v9 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  CmpKeyEnumStackCleanup((__int64)v10);
  return (unsigned int)v7;
}
