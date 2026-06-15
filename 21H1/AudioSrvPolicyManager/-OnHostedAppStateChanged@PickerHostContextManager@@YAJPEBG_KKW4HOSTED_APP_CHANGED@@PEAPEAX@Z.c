/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180027010
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180028AA0 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800271C8 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180027288 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18002733C (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180027B74 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // r13
  struct CPickerHostContext *v8; // rdx
  PickerHostContextManager **v9; // r14
  PickerHostContextManager *v10; // rsi
  HANDLE ProcessHeap; // rax
  CPickerHostContext *v12; // rax
  __int64 v13; // rcx
  CPickerHostContext *v14; // rdi
  int v15; // edi
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  int v20; // [rsp+30h] [rbp-68h]
  CPickerHostContext *v21; // [rsp+38h] [rbp-60h]
  PickerHostContextManager *v22; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  char v25; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = a5;
  v10 = *a5;
  if ( *a5 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v8) )
    goto LABEL_12;
  ProcessHeap = GetProcessHeap();
  v12 = (CPickerHostContext *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v14 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 5) = 10LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v21 = v14;
  v10 = v14;
  v22 = v14;
  if ( v14 )
  {
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v13, &v22);
    }
    catch ( ATL::CAtlException *v23 )
    {
      v18 = &v19;
      v17 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v17;
      v15 = v20;
      if ( v20 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v21, (unsigned int)v18);
        goto LABEL_13;
      }
      v9 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      v10 = v22;
      v14 = v21;
    }
    *v9 = v14;
LABEL_12:
    v15 = CPickerHostContext::AddHostedAppInteractivityNotification(v10, a1, v7, v6, v5);
LABEL_13:
    if ( v15 >= 0 )
      goto LABEL_19;
    goto LABEL_14;
  }
  v15 = -2147024882;
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_8b174e4b3d6138c7fcfc76c86feeee8f_Traceguids, v15);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 87, v15);
LABEL_19:
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v15;
}
