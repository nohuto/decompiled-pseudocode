/*
 * XREFs of FsRtlpCallerIsAtomicRequestor @ 0x140308130
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpCallerIsAtomicRequestor(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // r9
  _QWORD *i; // rax

  v3 = 0;
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
  {
    if ( a2 == *(i - 4) )
    {
      v3 = 1;
      if ( a3 )
        *a3 = i - 7;
      return v3;
    }
  }
  return v3;
}
