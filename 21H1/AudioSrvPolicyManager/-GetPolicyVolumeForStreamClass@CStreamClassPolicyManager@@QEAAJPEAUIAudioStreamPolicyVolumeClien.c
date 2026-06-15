/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x18002A294
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18000B8C0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18002A9BC (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002B930 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003101C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  int v8; // eax
  signed int PBMRelatedAudioStreamCategory; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  struct IAudioProcess *v12; // rbx
  unsigned int v13; // eax
  const unsigned __int16 *v14; // r15
  struct IAudioProcess *v15; // rbx
  int v16; // r12d
  struct _RTL_CRITICAL_SECTION *v17; // rdi
  int v18; // eax
  TSSession *v20; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  CStreamClassPolicyManager *v23; // [rsp+80h] [rbp+30h] BYREF
  struct IAudioProcess *v24; // [rsp+88h] [rbp+38h] BYREF

  v23 = this;
  v24 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v24);
  PBMRelatedAudioStreamCategory = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 40LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)v10);
    goto LABEL_20;
  }
  v12 = v24;
  v13 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  LODWORD(v23) = 0;
  if ( v13 >= 0x15 )
  {
    PBMRelatedAudioStreamCategory = -2147024809;
LABEL_6:
    v11 = 44LL;
LABEL_17:
    v10 = (unsigned int)PBMRelatedAudioStreamCategory;
    goto LABEL_18;
  }
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v12, v13, (unsigned int *)&v23);
  if ( PBMRelatedAudioStreamCategory < 0 )
    goto LABEL_6;
  v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v15 = v24;
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 104LL))(v24);
  LODWORD(v15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 48LL))(v15);
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection[1] = v17;
  v18 = TsSessionFromSessionId((unsigned int)v15, 1, 0LL, &v20);
  if ( v18 )
  {
    PBMRelatedAudioStreamCategory = (unsigned __int16)v18 | 0x80070000;
    if ( v18 <= 0 )
      PBMRelatedAudioStreamCategory = v18;
  }
  else
  {
    PBMRelatedAudioStreamCategory = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                      v20,
                                      v14,
                                      (struct CStreamClassPolicyGainsWrapper **)lpCriticalSection);
    if ( PBMRelatedAudioStreamCategory >= 0 )
      PBMRelatedAudioStreamCategory = CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
                                        lpCriticalSection[0],
                                        (unsigned int)v23,
                                        v16,
                                        a3,
                                        a4,
                                        a5);
  }
  if ( v17 )
    LeaveCriticalSection(v17);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v11 = 48LL;
    goto LABEL_17;
  }
  PBMRelatedAudioStreamCategory = 0;
LABEL_20:
  if ( v24 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
