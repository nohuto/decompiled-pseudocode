/*
 * XREFs of ?OnIoComplete@V2DevicePropertyRequest@Holographic@Internal@Windows@@EEAAXJ@Z @ 0x180161670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::V2DevicePropertyRequest::OnIoComplete(
        Windows::Internal::Holographic::V2DevicePropertyRequest *this,
        int a2)
{
  Windows::Internal::Holographic::V2DevicePropertyRequest *v2; // r9
  __int64 v3; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = this;
  v4 = a2;
  v3 = *((_QWORD *)this + 26);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, Windows::Internal::Holographic::V2DevicePropertyRequest *, int *))(*(_QWORD *)v3 + 16LL))(
    v3,
    v2,
    &v4);
}
