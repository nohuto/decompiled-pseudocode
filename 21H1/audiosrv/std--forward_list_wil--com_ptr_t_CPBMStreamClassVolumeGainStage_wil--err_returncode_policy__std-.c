/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x18006D920
 * Callers:
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18006E490 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18006D8F0 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retu.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
        _QWORD *a1,
        __int64 ***a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rdi
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = (_QWORD *)*a1;
  v4 = (_QWORD **)a1;
  while ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2[1] + 56LL) + 24LL))(*(_QWORD *)(v2[1] + 56LL));
    v6 = *a2;
    if ( (__int64 *)v5 == **a2 )
    {
      if ( *a2[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2[1] + 56LL) + 16LL))(*(_QWORD *)(v2[1] + 56LL));
        v6 = a2[1];
        **v6 = v7;
      }
      if ( !*v4 )
        return;
      v8 = *v4;
      v2 = (_QWORD *)**v4;
      *v4 = v2;
      std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        (__int64)v6,
        v8);
    }
    else
    {
      v4 = (_QWORD **)*v4;
      v2 = (_QWORD *)*v2;
    }
  }
}
