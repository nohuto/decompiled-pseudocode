/*
 * XREFs of ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E5430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E6BBC (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::DestroyStream(
        CExclusiveStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v4 + 56LL))(v4, &v14) >= 0 )
    {
      v5 = v14;
      v6 = *v14;
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
      (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 80))(v5, v7);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  }
  v8 = (__int64 *)*((_QWORD *)this + 10);
  v9 = *v8;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 32))(v8, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1444LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11);
  CBaseStreamGroupProxy::RemoveStream(this, a2);
  return 0LL;
}
