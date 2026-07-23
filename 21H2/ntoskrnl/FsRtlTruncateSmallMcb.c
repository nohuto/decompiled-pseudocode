/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405BF8F0
 * Callers:
 *     KiInterruptThunk @ 0x14040A4F0 (KiInterruptThunk.c)
 *     $$1 @ 0x14040A500 ($$1.c)
 *     $$2 @ 0x14040A510 ($$2.c)
 *     $$3 @ 0x14040A520 ($$3.c)
 *     $$4 @ 0x14040A530 ($$4.c)
 *     $$5 @ 0x14040A540 ($$5.c)
 *     $$6 @ 0x14040A550 ($$6.c)
 *     $$7 @ 0x14040A560 ($$7.c)
 *     $$8 @ 0x14040A570 ($$8.c)
 *     $$9 @ 0x14040A580 ($$9.c)
 *     $$a @ 0x14040A590 ($$a.c)
 *     $$b @ 0x14040A5A0 ($$b.c)
 *     $$c @ 0x14040A5B0 ($$c.c)
 *     $$d @ 0x14040A5C0 ($$d.c)
 *     $$e @ 0x14040A5D0 ($$e.c)
 *     $$f @ 0x14040A5E0 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBCD4 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14040A430 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  KeExitRetpoline(a1, a2, a3);
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
