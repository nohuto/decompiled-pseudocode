/*
 * XREFs of KeGuardDispatchICall @ 0x140A14330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DB3D0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403DC2B0 (KiSwInterruptDispatch.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     sub_1403E9900 @ 0x1403E9900 (sub_1403E9900.c)
 *     sub_1403E9B1C @ 0x1403E9B1C (sub_1403E9B1C.c)
 *     sub_1403E9B7C @ 0x1403E9B7C (sub_1403E9B7C.c)
 *     sub_1403E9BFC @ 0x1403E9BFC (sub_1403E9BFC.c)
 *     sub_1403EAB68 @ 0x1403EAB68 (sub_1403EAB68.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB1F4 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0F0FC @ 0x140A0F0FC (sub_140A0F0FC.c)
 *     sub_140A11098 @ 0x140A11098 (sub_140A11098.c)
 *     sub_140A11B30 @ 0x140A11B30 (sub_140A11B30.c)
 *     sub_140A12D10 @ 0x140A12D10 (sub_140A12D10.c)
 *     sub_140A13830 @ 0x140A13830 (sub_140A13830.c)
 *     sub_140A1EFE4 @ 0x140A1EFE4 (sub_140A1EFE4.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     sub_140A3AA14 @ 0x140A3AA14 (sub_140A3AA14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
