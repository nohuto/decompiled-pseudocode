/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029A1C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029D50 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180029D50.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x180024240 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180028C9C (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAULegacyDeviceInfo@@@?$unordered_map@KPEAULegacyDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAULegacyDeviceInfo@@@Z @ 0x180028D28 (--$_Insert_or_assign@AEBKAEAPEAULegacyDeviceInfo@@@-$unordered_map@KPEAULegacyDeviceInfo@@U-$has.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029B4C (-CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceArrival(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  char *v6; // rdi
  __int64 v7; // rbp
  _QWORD *i; // r10
  _QWORD *v9; // r12
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _DWORD *v12; // r10
  _QWORD *v13; // r11
  _QWORD *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 DeviceInfo; // rax
  __int64 v18; // rcx
  const unsigned __int8 *v19; // rbx
  int v20; // eax
  _QWORD *v21; // rax
  int v22[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = 2;
LABEL_3:
    *((_BYTE *)this + 281) = 1;
    goto LABEL_4;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 != 4 )
      return;
    v4 = 32;
    goto LABEL_3;
  }
  v4 = 4;
LABEL_4:
  v5 = *((_DWORD *)a2 + 1);
  v6 = (char *)this + 64;
  LODWORD(v24) = v5;
  v7 = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v24, 4uLL) & *((_QWORD *)this + 14);
  for ( i = *(_QWORD **)(*((_QWORD *)v6 + 3) + 16 * v7); ; i = *(_QWORD **)v12 )
  {
    v9 = i;
    v10 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
            (__int64)v6,
            &v24,
            v7);
    if ( v12 == (_DWORD *)*v10 )
      goto LABEL_6;
    if ( v12[4] == v5 )
      break;
  }
  do
    v21 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
            (__int64)v6,
            &v25,
            v7);
  while ( v14 != (_QWORD *)*v21 && v5 == *((_DWORD *)v14 + 4) );
  if ( v9 == v14 )
  {
LABEL_6:
    v13 = (_QWORD *)*((_QWORD *)v6 + 1);
    v14 = v13;
  }
  v15 = 0LL;
  while ( v13 != v14 )
  {
    v13 = (_QWORD *)*v13;
    ++v15;
  }
  if ( !v15 )
  {
    InputETW::Win32kInterop::ProcessDeviceArrival(v5, v11);
    DeviceInfo = Win32kInterop::CreateDeviceInfo(v16, v4, a2);
    v18 = *((_QWORD *)this + 7);
    v19 = (const unsigned __int8 *)DeviceInfo;
    v24 = DeviceInfo;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, Win32kInterop *))(*(_QWORD *)v18 + 40LL))(v18, DeviceInfo, this);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v20,
        v22[0]);
      JUMPOUT(0x18005DE06LL);
    }
    std::unordered_map<unsigned long,LegacyDeviceInfo *>::_Insert_or_assign<unsigned long const &,LegacyDeviceInfo * &>(
      (__int64)v6,
      (__int64)v22,
      v19,
      &v24);
  }
}
