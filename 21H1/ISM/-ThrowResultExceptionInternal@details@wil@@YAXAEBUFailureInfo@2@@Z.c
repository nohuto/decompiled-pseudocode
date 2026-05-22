/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180067DA0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180067800 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  void **pExceptionObject; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v3; // [rsp+28h] [rbp-D0h]
  _BYTE v4[144]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+C8h] [rbp-30h]
  __int128 v6; // [rsp+D8h] [rbp-20h]

  pExceptionObject = &wil::ResultException::`vftable';
  v3 = 0LL;
  v5 = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v4, this);
  v6 = 0LL;
  throw (wil::ResultException *)&pExceptionObject;
}
