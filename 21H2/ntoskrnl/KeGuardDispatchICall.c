/*
 * XREFs of KeGuardDispatchICall @ 0x140A11330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DBD40 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403DCC20 (KiSwInterruptDispatch.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     sub_1403EA270 @ 0x1403EA270 (sub_1403EA270.c)
 *     sub_1403EA48C @ 0x1403EA48C (sub_1403EA48C.c)
 *     sub_1403EA4EC @ 0x1403EA4EC (sub_1403EA4EC.c)
 *     sub_1403EA56C @ 0x1403EA56C (sub_1403EA56C.c)
 *     sub_1403EB4D8 @ 0x1403EB4D8 (sub_1403EB4D8.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBB64 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0C0FC @ 0x140A0C0FC (sub_140A0C0FC.c)
 *     sub_140A0E098 @ 0x140A0E098 (sub_140A0E098.c)
 *     sub_140A0EB30 @ 0x140A0EB30 (sub_140A0EB30.c)
 *     sub_140A0FD10 @ 0x140A0FD10 (sub_140A0FD10.c)
 *     sub_140A10830 @ 0x140A10830 (sub_140A10830.c)
 *     sub_140A1BFE4 @ 0x140A1BFE4 (sub_140A1BFE4.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     sub_140A37A14 @ 0x140A37A14 (sub_140A37A14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
