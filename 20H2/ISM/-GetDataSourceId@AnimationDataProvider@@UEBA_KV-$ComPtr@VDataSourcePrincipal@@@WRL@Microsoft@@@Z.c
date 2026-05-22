/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1801427A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::GetDataSourceId(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h]

  v3 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 96LL))(*a2 + 8);
  HIDWORD(v6) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 96LL))(*a2 + 8) + 4);
  LODWORD(v6) = v3;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return v6;
}
