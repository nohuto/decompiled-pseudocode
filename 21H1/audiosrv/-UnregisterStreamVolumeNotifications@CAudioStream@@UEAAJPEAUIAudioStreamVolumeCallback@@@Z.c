/*
 * XREFs of ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800D38C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___ @ 0x1800D2388 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioSt.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800D3994 (-erase@-$vector@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V-$a.c)
 */

__int64 __fastcall CAudioStream::UnregisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioStreamVolumeCallback *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = a2;
  if ( a2 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v5 = (__int64 *)*((_QWORD *)this + 34);
    v6 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___(
           &v9,
           *((__int64 **)this + 33),
           v5,
           &v8);
    std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::erase(
      (char *)this + 264,
      &v10,
      *v6,
      v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
