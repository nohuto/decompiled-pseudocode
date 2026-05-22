/*
 * XREFs of ?GetSessionID@@YAKXZ @ 0x180032A64
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180032774 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetSessionID(void)
{
  _BYTE ProcessInformation[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v2; // [rsp+38h] [rbp-30h]
  ULONG ReturnLength; // [rsp+70h] [rbp+8h] BYREF

  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return *(unsigned int *)(v2 + 704);
  }
}
