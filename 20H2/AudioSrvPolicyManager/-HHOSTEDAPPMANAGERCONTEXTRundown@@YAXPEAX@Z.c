/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180023F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180017F24 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800218C8 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180021E3C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  __int64 v2; // rdx
  CHostedAppInteractivityManager *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = PickerHostContextManager::s_PickerHostContextList;
  if ( PickerHostContextManager::s_PickerHostContextList )
  {
    while ( *(CPickerHostContext **)(v2 + 16) != this )
    {
      v2 = *(_QWORD *)v2;
      if ( !v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = 0LL;
  }
  if ( v2 )
  {
    if ( v2 == PickerHostContextManager::s_PickerHostContextList )
      PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v2;
    else
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    v3 = *(CHostedAppInteractivityManager **)(v2 + 8);
    if ( v2 == qword_18004F590 )
      qword_18004F590 = *(_QWORD *)(v2 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v3;
    *(_QWORD *)v2 = qword_18004F5A8;
    qword_18004F5A8 = v2;
    if ( !--qword_18004F598 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
    v4 = *(_QWORD **)this;
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v5 + 12) = 0;
      if ( v6 )
      {
        v7 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
               v3,
               *(const unsigned __int16 **)v5,
               *(_QWORD *)(v5 + 16),
               *(_DWORD *)(v5 + 8),
               0);
        if ( v7 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_8b174e4b3d6138c7fcfc76c86feeee8f_Traceguids, v7);
          }
          AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 295, v7);
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
