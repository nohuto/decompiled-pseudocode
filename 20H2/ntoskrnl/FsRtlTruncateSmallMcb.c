/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405BDC70
 * Callers:
 *     KiInterruptThunk @ 0x140407C70 (KiInterruptThunk.c)
 *     $$1 @ 0x140407C80 ($$1.c)
 *     $$2 @ 0x140407C90 ($$2.c)
 *     $$3 @ 0x140407CA0 ($$3.c)
 *     $$4 @ 0x140407CB0 ($$4.c)
 *     $$5 @ 0x140407CC0 ($$5.c)
 *     $$6 @ 0x140407CD0 ($$6.c)
 *     $$7 @ 0x140407CE0 ($$7.c)
 *     $$8 @ 0x140407CF0 ($$8.c)
 *     $$9 @ 0x140407D00 ($$9.c)
 *     $$a @ 0x140407D10 ($$a.c)
 *     $$b @ 0x140407D20 ($$b.c)
 *     $$c @ 0x140407D30 ($$c.c)
 *     $$d @ 0x140407D40 ($$d.c)
 *     $$e @ 0x140407D50 ($$e.c)
 *     $$f @ 0x140407D60 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB1F4 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140407BB0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  KeExitRetpoline(a1, a2);
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
