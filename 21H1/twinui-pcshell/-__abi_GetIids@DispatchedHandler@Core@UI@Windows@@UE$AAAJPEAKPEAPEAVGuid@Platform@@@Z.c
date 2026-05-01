/*
 * XREFs of ?__abi_GetIids@DispatchedHandler@Core@UI@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1802D2D28
 * Callers:
 *     ?__abi_GetIids@DispatchedHandler@Core@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800D3DF0 (-__abi_GetIids@DispatchedHandler@Core@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z.c)
 *     ?__abi_GetIids@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800D3E00 (-__abi_GetIids@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180091008 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::UI::Core::DispatchedHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 2045462975;
  v6 = -381127344;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x463698D8D1F276C4LL);
}
