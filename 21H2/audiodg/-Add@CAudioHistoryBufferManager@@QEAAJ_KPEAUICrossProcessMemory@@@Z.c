/*
 * XREFs of ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x14004FA40
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AA0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004FF80 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140050434 (-SetAt@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CE.c)
 *     ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x14005F940 (--$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemor.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioHistoryBufferManager::Add(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        struct ICrossProcessMemory *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  unsigned int v9; // ebx
  ATL::CAtlException *v10; // rbx
  char v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v14; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v17; // [rsp+98h] [rbp+20h] BYREF

  v5 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v12[1] = (__int64)v5;
  v12[0] = 0LL;
  if ( ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
         (int)v5 + 40,
         a2,
         (unsigned int)&v11,
         (unsigned int)&v17,
         (__int64)&v13) )
  {
    v6 = -2147024809;
    v7 = 52LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v12);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v6;
  }
  v12[0] = 0LL;
  v17 = (char *)a3;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl,ICPAudioHistoryControl,ICrossProcessMemory * &>(
         v12,
         &v17);
  if ( v6 < 0 )
  {
    v7 = 54LL;
    goto LABEL_3;
  }
  try
  {
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::SetAt(
      &v5[1],
      a2,
      v12);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v10 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v17) = *(_DWORD *)v10;
    v9 = (unsigned int)v17;
    if ( (int)v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v12);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v9;
    }
    v5 = lpCriticalSection;
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v12);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
