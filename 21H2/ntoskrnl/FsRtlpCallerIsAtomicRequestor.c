/*
 * XREFs of FsRtlpCallerIsAtomicRequestor @ 0x140238100
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
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
