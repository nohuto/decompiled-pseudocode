/*
 * XREFs of IsMiPEnabledForThread @ 0x1C00B2EC0
 * Callers:
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     IsMiPActive @ 0x1C00B2E7C (IsMiPActive.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01F7740 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C0201180 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1224) & 0x6000000) != 0;
}
