/*
 * XREFs of CmpCloseSystemDriverHiveContext @ 0x140A587C4
 * Callers:
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 */

void __fastcall CmpCloseSystemDriverHiveContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 16));
  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ZwClose(v3);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
