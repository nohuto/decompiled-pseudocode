/*
 * XREFs of ?OnDisconnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000AE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall HotKeyClient::OnDisconnected(HotKeyClient *this, struct IMessageProxy *a2)
{
  __int64 *v2; // rbx
  struct IMessageProxy *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v5);
    (**(void (__fastcall ***)(__int64, GUID *, struct IMessageProxy **))*v2)(
      *v2,
      &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
      &v5);
    if ( v5 == a2 )
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
