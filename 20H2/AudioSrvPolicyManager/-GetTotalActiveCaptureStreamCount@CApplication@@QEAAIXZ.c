/*
 * XREFs of ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180011444
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001EA68 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001FA04 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020668 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C120 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::GetTotalActiveCaptureStreamCount(CApplication *this)
{
  unsigned int v2; // edi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v4 + 448) )
      v2 += *(_DWORD *)(v4 + 340);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
