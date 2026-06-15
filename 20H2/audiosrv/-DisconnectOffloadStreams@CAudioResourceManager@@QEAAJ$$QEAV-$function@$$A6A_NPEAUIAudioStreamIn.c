/*
 * XREFs of ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18006FF30
 * Callers:
 *     ?DisconnectOffloadStreams@@YAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18006FF20 (-DisconnectOffloadStreams@@YAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800380B8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x18006F754 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F754.c)
 *     ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18006F90C (--0-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::DisconnectOffloadStreams(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-59h] BYREF
  __int64 v9; // [rsp+30h] [rbp-49h]
  _BYTE v10[64]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v11[64]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = 0LL;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int128 *))(*(_QWORD *)g_DeviceGraphStore + 72LL))(
         g_DeviceGraphStore,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>((__int64)v10, a2);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___(
      (__int64)v11,
      (__int64 *)v8,
      *((__int64 **)&v8 + 1),
      (__int64)v10);
    std::_Func_class<void,>::_Tidy((__int64)v11, v5);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  v6 = (void *)v8;
  if ( (_QWORD)v8 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v8);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v9 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return v4;
}
