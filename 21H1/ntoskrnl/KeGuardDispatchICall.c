/*
 * XREFs of KeGuardDispatchICall @ 0x140A0E330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403D7900 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403D87E0 (KiSwInterruptDispatch.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     sub_1403E5E30 @ 0x1403E5E30 (sub_1403E5E30.c)
 *     sub_1403E604C @ 0x1403E604C (sub_1403E604C.c)
 *     sub_1403E60AC @ 0x1403E60AC (sub_1403E60AC.c)
 *     sub_1403E612C @ 0x1403E612C (sub_1403E612C.c)
 *     sub_1403E7098 @ 0x1403E7098 (sub_1403E7098.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E7724 (RtlpComputeEpilogueOffset.c)
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
