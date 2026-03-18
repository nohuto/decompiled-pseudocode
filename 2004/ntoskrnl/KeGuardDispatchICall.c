/*
 * XREFs of KeGuardDispatchICall @ 0x140A0E330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403D8740 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403D9620 (KiSwInterruptDispatch.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     sub_1403E6C70 @ 0x1403E6C70 (sub_1403E6C70.c)
 *     sub_1403E6E8C @ 0x1403E6E8C (sub_1403E6E8C.c)
 *     sub_1403E6EEC @ 0x1403E6EEC (sub_1403E6EEC.c)
 *     sub_1403E6F6C @ 0x1403E6F6C (sub_1403E6F6C.c)
 *     sub_1403E7ED8 @ 0x1403E7ED8 (sub_1403E7ED8.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E8564 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A090FC @ 0x140A090FC (sub_140A090FC.c)
 *     sub_140A0B098 @ 0x140A0B098 (sub_140A0B098.c)
 *     sub_140A0BB30 @ 0x140A0BB30 (sub_140A0BB30.c)
 *     sub_140A0CD10 @ 0x140A0CD10 (sub_140A0CD10.c)
 *     sub_140A0D830 @ 0x140A0D830 (sub_140A0D830.c)
 *     sub_140A18FE4 @ 0x140A18FE4 (sub_140A18FE4.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     sub_140A34A14 @ 0x140A34A14 (sub_140A34A14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
