/*
 * XREFs of ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180086BE0
 * Callers:
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F7F0 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056082 (memset_0.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008690C (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDesktopManager::IsMonitorVirtual(CDWMDXGIEnumeration **this, HMONITOR a2, bool *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // ebx
  _BYTE v9[288]; // [rsp+20h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  *a3 = 0;
  memset_0(v9, 0, sizeof(v9));
  DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(this[20], a2, (struct DXGIOutputInfo *)v9);
  v7 = DxgiOutputDescriptor;
  if ( DxgiOutputDescriptor >= 0 )
  {
    if ( v9[200] < 0 )
      *a3 = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)DxgiOutputDescriptor);
    return v7;
  }
}
