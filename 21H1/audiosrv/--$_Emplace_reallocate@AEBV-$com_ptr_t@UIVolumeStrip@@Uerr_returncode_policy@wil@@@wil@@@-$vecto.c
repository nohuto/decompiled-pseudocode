/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180067EEC
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180068B30 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 *v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // r13
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // r8
  __int64 *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (char *)a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v27 = v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (char *)v13 + v14;
  v16 = *a3;
  *(__int64 *)((char *)v13 + v14) = *a3;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = a1[1];
  v18 = *a1;
  v19 = v13;
  if ( v4 == v17 )
  {
    while ( v18 != v17 )
    {
      v22 = *v18;
      *v18 = 0LL;
      *v19++ = v22;
      ++v18;
    }
  }
  else
  {
    if ( v18 != v4 )
    {
      do
      {
        v23 = *v18;
        *v18 = 0LL;
        *v19++ = v23;
        ++v18;
      }
      while ( v18 != v4 );
      v17 = a1[1];
    }
    if ( v4 != v17 )
    {
      v24 = v14 - (_QWORD)v4;
      do
      {
        v25 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v13 + v24 + (_QWORD)v4++ + 8) = v25;
      }
      while ( v4 != v17 );
    }
  }
  v20 = *a1;
  if ( *a1 )
  {
    v26 = a1[1];
    if ( v20 != v26 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v20++);
      while ( v20 != v26 );
      v20 = *a1;
    }
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v20) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v13;
  a1[1] = &v13[v8];
  a1[2] = &v13[v27];
  return v15;
}
