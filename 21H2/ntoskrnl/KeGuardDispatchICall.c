/*
 * XREFs of KeGuardDispatchICall @ 0x140A12330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DBEB0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403DCD90 (KiSwInterruptDispatch.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     sub_1403EA3E0 @ 0x1403EA3E0 (sub_1403EA3E0.c)
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     sub_1403EA65C @ 0x1403EA65C (sub_1403EA65C.c)
 *     sub_1403EA6DC @ 0x1403EA6DC (sub_1403EA6DC.c)
 *     sub_1403EB648 @ 0x1403EB648 (sub_1403EB648.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBCD4 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A0F098 @ 0x140A0F098 (sub_140A0F098.c)
 *     sub_140A0FB30 @ 0x140A0FB30 (sub_140A0FB30.c)
 *     sub_140A10D10 @ 0x140A10D10 (sub_140A10D10.c)
 *     sub_140A11830 @ 0x140A11830 (sub_140A11830.c)
 *     sub_140A1CFE4 @ 0x140A1CFE4 (sub_140A1CFE4.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     sub_140A38A14 @ 0x140A38A14 (sub_140A38A14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
