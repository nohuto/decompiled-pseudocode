/*
 * XREFs of ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180002FA4
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002B80 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180002A70 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _lambda_2600a7d6c0ef08dbdb2082c935d1aa59_::operator() @ 0x180002E78 (_lambda_2600a7d6c0ef08dbdb2082c935d1aa59_--operator().c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180003CF0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180003DD8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x18002A5B8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BB090 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
        CPerStreamVolumeAudioSession *this,
        struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int AudioSessionPropertyStore; // ebx
  bool v6; // zf
  char *v7; // rdi
  unsigned int v8; // ebx
  char *i; // rbx
  const struct std::nothrow_t *v11; // rdx
  unsigned __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  void *v13; // [rsp+28h] [rbp-38h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  _QWORD v16[2]; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+80h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int16 *v21; // [rsp+98h] [rbp+38h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v21, &ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToPersistedString((char *)this + 656, &v21, 1LL);
  AudioSessionPropertyStore = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4,
      v12);
  }
  else
  {
    pv = 0LL;
    v6 = *((_BYTE *)this + 302) == 0;
    v16[0] = &v21;
    v16[1] = &v19;
    v19 = -2147023728;
    if ( !v6 )
    {
      v15 = 0LL;
      *(_OWORD *)v14 = 0LL;
      CAudioSession::GetOwningProcesses((__int64)this, (__int64)v14);
      v7 = (char *)v14[0];
      if ( (((char *)v14[1] - (char *)v14[0]) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14[0] + 48LL))(*(_QWORD *)v14[0]);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager + 376LL))(
          g_PolicyManager,
          v8,
          &pv);
      }
      if ( v7 )
      {
        for ( i = v7; i != v14[1]; i += 8 )
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
        v13 = v7;
        v11 = (const struct std::nothrow_t *)((v15 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
        v12 = (unsigned __int64)v11;
        if ( (unsigned __int64)v11 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v13, &v12);
          v11 = (const struct std::nothrow_t *)v12;
          v7 = (char *)v13;
        }
        operator delete(v7, v11);
      }
    }
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(
                                  g_PolicyConfig,
                                  v21,
                                  (const unsigned __int16 *)pv,
                                  a2);
    v19 = AudioSessionPropertyStore;
    if ( pv )
      CoTaskMemFree(pv);
    v17 = 0;
    lambda_2600a7d6c0ef08dbdb2082c935d1aa59_::operator()((__int64)v16);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  return AudioSessionPropertyStore;
}
