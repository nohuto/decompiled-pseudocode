/*
 * XREFs of ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180094118
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009331C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A930 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180096CD0 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18009768C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::wistream::operator>>(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r14
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  char *v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  char v20; // [rsp+58h] [rbp-60h]
  __int64 v21; // [rsp+60h] [rbp-58h] BYREF
  bool v22; // [rsp+68h] [rbp-50h]
  _QWORD *v23; // [rsp+70h] [rbp-48h]
  char v25[56]; // [rsp+80h] [rbp-38h] BYREF
  int v27; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a1;
  v27 = 0;
  v23 = a1;
  v5 = *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (unsigned __int8)std::wistream::_Ipfx(v3) )
  {
    v6 = **(_QWORD **)((char *)v3 + *(int *)(*v3 + 4LL) + 64);
    v28 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(&v28);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      v9 = (__int64)v3 + *(int *)(*v3 + 4LL);
      v19 = 0LL;
      v20 = 1;
      v21 = *(_QWORD *)(v9 + 72);
      v22 = v21 == 0;
      (*(void (__fastcall **)(__int64, char *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 56LL))(
        v7,
        v25,
        &v21,
        &v19,
        v9,
        &v27,
        a2);
    }
    catch ( ... )
    {
      v15 = (char *)a1 + *(int *)(*a1 + 4LL);
      v16 = *((_DWORD *)v15 + 4) | 4;
      v17 = v16 & 0x17;
      *((_DWORD *)v15 + 4) = v17;
      if ( (v17 & *((_DWORD *)v15 + 5)) != 0 )
        throw;
      v3 = a1;
      v4 = a1;
    }
  }
  v10 = *v3;
  v11 = (__int64)v3 + *(int *)(*v3 + 4LL);
  if ( v27 )
  {
    v12 = v27 | *(_DWORD *)(v11 + 16);
    if ( !*(_QWORD *)(v11 + 72) )
      LOBYTE(v12) = v12 | 4;
    std::ios_base::clear((std::ios_base *)v11, v12, 0);
    v10 = *v4;
  }
  v13 = *(_QWORD *)((char *)v3 + *(int *)(v10 + 4) + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v3;
}
