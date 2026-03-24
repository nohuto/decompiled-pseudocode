/*
 * XREFs of Endpoint_SetLogIdentifier @ 0x1C000E75C
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00093AC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 */

__int64 __fastcall Endpoint_SetLogIdentifier(__int64 a1)
{
  __int64 result; // rax
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 80) )
  {
    RtlStringCchPrintfA(
      pszDest,
      0x18uLL,
      "%02d SLT%02d DCI%02d",
      *(_DWORD *)(*(_QWORD *)a1 + 176LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144));
    return imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 80), pszDest);
  }
  return result;
}
