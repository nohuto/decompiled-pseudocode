/*
 * XREFs of _lambda_4b3be4062b453557032a0102af949bc6_::operator() @ 0x1800E4218
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Do_call @ 0x1800E7870 (std--_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_--_Do_call.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE04C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_4b3be4062b453557032a0102af949bc6_::operator()()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphStore *, __int128 *))(*(_QWORD *)g_DeviceGraphStore + 56LL))(
    g_DeviceGraphStore,
    &v2);
  v0 = (__int64 *)*((_QWORD *)&v2 + 1);
  v1 = (__int64 *)v2;
  if ( (_QWORD)v2 != *((_QWORD *)&v2 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 376LL))(*v1);
      ++v1;
    }
    while ( v1 != v0 );
    v0 = (__int64 *)*((_QWORD *)&v2 + 1);
    v1 = (__int64 *)v2;
  }
  if ( v1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v1, v0);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((v3 - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
