/*
 * XREFs of RtlStringCbCatW @ 0x1C004E934
 * Callers:
 *     UsbhBuildContainerID @ 0x1C004F72C (UsbhBuildContainerID.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C004E9B4 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C004EA10 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // r9d
  size_t *v6; // r8
  __int64 v7; // r11
  size_t v9; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  pcchLength = 0LL;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = RtlStringLengthWorkerW(pszDest, cbDest >> 1, &pcchLength);
    if ( v3 >= 0 )
      return RtlStringCopyWorkerW(&pszDest[pcchLength], v7 - pcchLength, v6, pszSrc, v9);
  }
  return v3;
}
