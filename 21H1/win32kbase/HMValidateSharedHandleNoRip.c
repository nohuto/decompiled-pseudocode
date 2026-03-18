/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C000EC88
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C000EA8C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C002A700 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0 (TransformRectBetweenCoordinateSpaces.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMValidateSharedHandleNoRip(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(&v9);
    v5 = gpKernelHandleTable;
    v6 = a1 >> 16;
    v7 = 3LL * (unsigned int)((v3 - (char *)qword_1C0250D48) >> 5);
    if ( ((_WORD)v6 == *((_WORD *)v3 + 13) || (_WORD)v6 == 0xFFFF || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v4))
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v5[v7];
    }
  }
  return v2;
}
