/*
 * XREFs of ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18006E63C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180006994 (--1CAudioSession@@MEAA@XZ.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18002EED0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18004D620 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18006E490 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18006D8F0 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retu.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rbx

  v1 = (_QWORD *)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        (__int64)a1,
        v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
