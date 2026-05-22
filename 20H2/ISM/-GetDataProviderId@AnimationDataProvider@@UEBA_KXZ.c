/*
 * XREFs of ?GetDataProviderId@AnimationDataProvider@@UEBA_KXZ @ 0x180142740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AnimationDataProvider::GetDataProviderId(AnimationDataProvider *this)
{
  __int64 v3; // [rsp+30h] [rbp+8h]

  LODWORD(v3) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 40LL))(*((_QWORD *)this + 4) + 8LL);
  HIDWORD(v3) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 40LL))(*((_QWORD *)this + 4) + 8LL)
                          + 4);
  return v3;
}
