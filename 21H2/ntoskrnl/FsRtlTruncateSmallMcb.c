/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1405BF6C0
 * Callers:
 *     KiInterruptThunk @ 0x14040A310 (KiInterruptThunk.c)
 *     $$1 @ 0x14040A320 ($$1.c)
 *     $$2 @ 0x14040A330 ($$2.c)
 *     $$3 @ 0x14040A340 ($$3.c)
 *     $$4 @ 0x14040A350 ($$4.c)
 *     $$5 @ 0x14040A360 ($$5.c)
 *     $$6 @ 0x14040A370 ($$6.c)
 *     $$7 @ 0x14040A380 ($$7.c)
 *     $$8 @ 0x14040A390 ($$8.c)
 *     $$9 @ 0x14040A3A0 ($$9.c)
 *     $$a @ 0x14040A3B0 ($$a.c)
 *     $$b @ 0x14040A3C0 ($$b.c)
 *     $$c @ 0x14040A3D0 ($$c.c)
 *     $$d @ 0x14040A3E0 ($$d.c)
 *     $$e @ 0x14040A3F0 ($$e.c)
 *     $$f @ 0x14040A400 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14035E888 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBB64 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14040A250 (KiCustomAccessRoutine0.c)
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
