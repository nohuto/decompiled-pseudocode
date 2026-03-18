/*
 * XREFs of FsRtlpCallerIsAtomicRequestor @ 0x1402A3F9C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
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
