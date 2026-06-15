/*
 * XREFs of ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180028D80
 * Callers:
 *     PbmRegisterAppManagerNotification @ 0x180023980 (PbmRegisterAppManagerNotification.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180017E30 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationManager@@EAAJPEAU_ActiveMediaAppsNotificationContext@@@Z0@Z @ 0x18002B5C0 (--$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationMana.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdAddAppManagerClient(struct CProcess *a1)
{
  struct CProcess *v1; // rsi
  struct TSSession *v2; // rbx
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rdx
  __int64 result; // rax
  ATL::CAtlException *v7; // rbx
  struct TSSession *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-28h] BYREF
  struct CProcess *v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h]
  int v12; // [rsp+70h] [rbp+18h]
  struct TSSession *v13; // [rsp+78h] [rbp+20h]

  v10 = a1;
  v1 = a1;
  v2 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  v13 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8[1] = v2;
  v3 = TsSessionFromSessionId(*((_DWORD *)v1 + 49), 1, 0LL, v8);
  v11 = v3;
  if ( v3 )
    goto LABEL_10;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (__int64 *)v8[0] + 7,
      &v10);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v12 = *(_DWORD *)v7;
    v3 = v11;
    v2 = v13;
    if ( v12 >= 0 )
    {
      v1 = v10;
      goto LABEL_5;
    }
LABEL_10:
    if ( v2 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v2);
    result = v3;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 4uLL);
  if ( v5 )
    *v5 = 0;
  else
    v5 = 0LL;
  if ( v5 )
  {
    *v5 = *((_DWORD *)v10 + 49);
    QueueApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>();
  }
  goto LABEL_10;
}
