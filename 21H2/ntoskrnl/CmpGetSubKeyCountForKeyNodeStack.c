/*
 * XREFs of CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140225E68 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140920CA0 (CmpGetSubKeyCountForKcbStack.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x14069F1F4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140920FCC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(__int16 *a1, int *a2)
{
  __int16 i; // dx
  __int16 v5; // dx
  __int64 EntryAtLayerHeight; // rax
  int j; // edi
  int v8; // ebx
  int v10; // eax
  __int16 v11[176]; // [rsp+20h] [rbp-188h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpKeyEnumStackInitialize(v11);
  for ( i = *a1; ; i = v5 - 1 )
  {
    if ( i <= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      j = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 20LL)
        + *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 24LL);
LABEL_6:
      *a2 = j;
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1) + 16) )
      break;
  }
  v8 = CmpKeyEnumStackStartFromKeyNodeStack(v11, a1, 0LL);
  if ( v8 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v10 = CmpKeyEnumStackAdvance(v11);
      v8 = v10;
      if ( v10 == -2147483622 )
        break;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  CmpKeyEnumStackCleanup(v11);
  return (unsigned int)v8;
}
