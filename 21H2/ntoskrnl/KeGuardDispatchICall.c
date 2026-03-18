/*
 * XREFs of KeGuardDispatchICall @ 0x140AD23B0
 * Callers:
 *     KiDecodeMcaFault @ 0x1403EB020 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403EBF10 (KiSwInterruptDispatch.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_1403F9450 @ 0x1403F9450 (sub_1403F9450.c)
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F96C8 @ 0x1403F96C8 (sub_1403F96C8.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     RtlpComputeEpilogueOffset @ 0x1403FAD10 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AB9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD0DA0 @ 0x140AD0DA0 (sub_140AD0DA0.c)
 *     sub_140AD18C0 @ 0x140AD18C0 (sub_140AD18C0.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140AF24B4 @ 0x140AF24B4 (sub_140AF24B4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
