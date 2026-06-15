/*
 * XREFs of ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FB548
 * Callers:
 *     ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FB720 (-CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D48 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBE38 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Setp@VCStreamConnectionImpl@CMonitorManager@@@?$shared_ptr@VCStreamConnection@@@std@@AEAAXPEAVCStreamConnectionImpl@CMonitorManager@@U?$integral_constant@_N$0A@@1@@Z @ 0x1800FA1E4 (--$_Setp@VCStreamConnectionImpl@CMonitorManager@@@-$shared_ptr@VCStreamConnection@@@std@@AEAAXPE.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x1800FA550 (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB0F0 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180100854 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CreateStreamConnection(__int64 a1, __int64 **a2, __int64 **a3, int a4, _QWORD *a5)
{
  _QWORD *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r8d
  const char *v14; // r9
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  const char *v18; // r9
  std::_Ref_count_base *v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v10 = (std::_Ref_count_base *)v9[1];
  v9[1] = 0LL;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  a5 = 0LL;
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 **)*a3;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 **)*a2;
  try
  {
    v11 = CMonitorManager::CreateMonitor(a1, a2, a3, a4, 1, &a5);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        138LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (__int64)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v12;
    v23 = (_QWORD *)v12;
    if ( v12 )
    {
      v16 = a5;
      v17 = 0LL;
      a5 = 0LL;
      v23 = v16;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v23);
      v24 = a1;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v24);
      v12 = CMonitorManager::CStreamConnectionImpl::CStreamConnectionImpl(v15, &v24, &v23);
    }
    else
    {
      v17 = (__int64)a5;
    }
    if ( !v12 )
      wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x8C, v13, v14);
    v21 = 0LL;
    std::shared_ptr<CStreamConnection>::_Setp<CMonitorManager::CStreamConnectionImpl>(&v21, v12);
    *v9 = v21;
    v19 = (std::_Ref_count_base *)v9[1];
    v9[1] = *((_QWORD *)&v21 + 1);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x90,
                    (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                    v18);
    return (unsigned int)a5;
  }
  return 0LL;
}
