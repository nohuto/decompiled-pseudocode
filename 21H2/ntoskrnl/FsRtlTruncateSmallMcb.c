/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1406481F0
 * Callers:
 *     KiInterruptThunk @ 0x14042C390 (KiInterruptThunk.c)
 *     $$1 @ 0x14042C3A0 ($$1.c)
 *     $$2 @ 0x14042C3B0 ($$2.c)
 *     $$3 @ 0x14042C3C0 ($$3.c)
 *     $$4 @ 0x14042C3D0 ($$4.c)
 *     $$5 @ 0x14042C3E0 ($$5.c)
 *     $$6 @ 0x14042C3F0 ($$6.c)
 *     $$7 @ 0x14042C400 ($$7.c)
 *     $$8 @ 0x14042C410 ($$8.c)
 *     $$9 @ 0x14042C420 ($$9.c)
 *     $$a @ 0x14042C430 ($$a.c)
 *     $$b @ 0x14042C440 ($$b.c)
 *     $$c @ 0x14042C450 ($$c.c)
 *     $$d @ 0x14042C460 ($$d.c)
 *     $$e @ 0x14042C470 ($$e.c)
 *     $$f @ 0x14042C480 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14024B6F8 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403FAD10 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14042C2D0 (KiCustomAccessRoutine0.c)
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
