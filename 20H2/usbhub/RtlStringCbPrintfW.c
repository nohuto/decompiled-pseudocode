/*
 * XREFs of RtlStringCbPrintfW @ 0x1C00447AC
 * Callers:
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0044D14 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C00450B4 (UsbhGetRegUsbClassFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00466CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetDeviceFlags @ 0x1C0052440 (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057A60 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C005A350 (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005A640 (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x1C005B07C (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005B28C (UsbhPropagateUxdState.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
