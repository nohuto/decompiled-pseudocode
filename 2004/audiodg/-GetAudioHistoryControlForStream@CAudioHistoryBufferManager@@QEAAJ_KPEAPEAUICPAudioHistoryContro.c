/*
 * XREFs of ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x1400455F4
 * Callers:
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x1400447A0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CreateNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140045504 (-CreateNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x140045770 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        struct ICPAudioHistoryControl **a3)
{
  unsigned int v6; // ebx
  __int64 Node; // rax
  struct ICPAudioHistoryControl *v8; // rbx
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+38h] BYREF

  v10[0] = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v10[1] = (__int64)lpCriticalSection;
  if ( ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
         (int)lpCriticalSection + 40,
         a2,
         (unsigned int)&v13,
         (unsigned int)&v12,
         (__int64)v11) )
  {
    Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
             (int)lpCriticalSection + 40,
             a2,
             (unsigned int)&v13,
             (unsigned int)&v12,
             (__int64)v11);
    if ( !Node )
      Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::CreateNode(
               (__int64)&lpCriticalSection[1],
               a2,
               v13,
               v12);
    v8 = *(struct ICPAudioHistoryControl **)(Node + 8);
    v10[0] = (__int64)v8;
    if ( v8 )
      (*(void (__fastcall **)(struct ICPAudioHistoryControl *))(*(_QWORD *)v8 + 8LL))(v8);
    v10[0] = 0LL;
    *a3 = v8;
    v6 = 0;
  }
  else
  {
    v6 = -2147023728;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v10);
  return v6;
}
