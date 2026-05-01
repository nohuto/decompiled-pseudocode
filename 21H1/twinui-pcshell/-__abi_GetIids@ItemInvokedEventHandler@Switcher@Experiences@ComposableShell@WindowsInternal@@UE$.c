/*
 * XREFs of ?__abi_GetIids@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1802E82E0
 * Callers:
 *     ?__abi_GetIids@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800D4690 (-__abi_GetIids@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E.c)
 *     ?__abi_GetIids@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800D46A0 (-__abi_GetIids@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180091008 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 926055297;
  v6 = -49783339;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3A490145ED68D7A6LL);
}
