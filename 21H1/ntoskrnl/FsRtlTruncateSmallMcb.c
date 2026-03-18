/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405B99F0
 * Callers:
 *     KiInterruptThunk @ 0x1404005E0 (KiInterruptThunk.c)
 *     $$1 @ 0x1404005F0 ($$1.c)
 *     $$2 @ 0x140400600 ($$2.c)
 *     $$3 @ 0x140400610 ($$3.c)
 *     $$4 @ 0x140400620 ($$4.c)
 *     $$5 @ 0x140400630 ($$5.c)
 *     $$6 @ 0x140400640 ($$6.c)
 *     $$7 @ 0x140400650 ($$7.c)
 *     $$8 @ 0x140400660 ($$8.c)
 *     $$9 @ 0x140400670 ($$9.c)
 *     $$a @ 0x140400680 ($$a.c)
 *     $$b @ 0x140400690 ($$b.c)
 *     $$c @ 0x1404006A0 ($$c.c)
 *     $$d @ 0x1404006B0 ($$d.c)
 *     $$e @ 0x1404006C0 ($$e.c)
 *     $$f @ 0x1404006D0 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E7724 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140400520 (KiCustomAccessRoutine0.c)
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
