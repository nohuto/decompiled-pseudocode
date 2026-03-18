/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405BA110
 * Callers:
 *     KiInterruptThunk @ 0x140401870 (KiInterruptThunk.c)
 *     $$1 @ 0x140401880 ($$1.c)
 *     $$2 @ 0x140401890 ($$2.c)
 *     $$3 @ 0x1404018A0 ($$3.c)
 *     $$4 @ 0x1404018B0 ($$4.c)
 *     $$5 @ 0x1404018C0 ($$5.c)
 *     $$6 @ 0x1404018D0 ($$6.c)
 *     $$7 @ 0x1404018E0 ($$7.c)
 *     $$8 @ 0x1404018F0 ($$8.c)
 *     $$9 @ 0x140401900 ($$9.c)
 *     $$a @ 0x140401910 ($$a.c)
 *     $$b @ 0x140401920 ($$b.c)
 *     $$c @ 0x140401930 ($$c.c)
 *     $$d @ 0x140401940 ($$d.c)
 *     $$e @ 0x140401950 ($$e.c)
 *     $$f @ 0x140401960 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x140329324 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E8564 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1404017B0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  KeExitRetpoline();
  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v11 = a3;
    v9 = __ROL8__(a2, a3);
    v10 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
