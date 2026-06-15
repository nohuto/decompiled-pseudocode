/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001ADB4
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18000BDF0 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  __int64 *i; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct IAudioSessionInfo *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v5 = (__int64 *)*i;
    if ( i == *((__int64 **)this + 9) )
      *((_QWORD *)this + 9) = v5;
    else
      *(_QWORD *)i[1] = v5;
    v6 = i[1];
    if ( i == *((__int64 **)this + 10) )
      *((_QWORD *)this + 10) = v6;
    else
      *(_QWORD *)(*i + 8) = v6;
    *i = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = i;
    if ( (*((_QWORD *)this + 11))-- == 1LL )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 72);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
