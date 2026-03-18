/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C01599D0
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1C018D454 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C00274C0 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  v5 = v2;
  if ( v2 < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  Uuid[1].Data1 = KeQueryTimeIncrement();
}
