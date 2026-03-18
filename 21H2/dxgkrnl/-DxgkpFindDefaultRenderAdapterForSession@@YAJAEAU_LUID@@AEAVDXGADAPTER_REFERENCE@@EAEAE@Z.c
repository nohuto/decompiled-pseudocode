/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964
 * Callers:
 *     DxgkGetAdapter @ 0x1C01F2740 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0043CBC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(struct _LUID *a1, DXGADAPTER **a2, __int64 a3, bool *a4)
{
  char v7; // si
  DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGGLOBAL *v13; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rdx
  struct _LUID *v17; // [rsp+50h] [rbp-18h] BYREF
  DXGADAPTER **v18; // [rsp+58h] [rbp-10h]

  v7 = 1;
  if ( (_BYTE)a3 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, (__int64)a4);
    if ( Current )
    {
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v10
          && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                  v10,
                                                  CurrentProcessSessionId)) != 0LL) )
        {
          v7 = *((_BYTE *)SessionDataForSpecifiedSession + 18505);
        }
        else
        {
          v7 = 0;
        }
      }
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  *a4 = v7 == 0;
  if ( v7 )
  {
    v17 = a1;
    v18 = a2;
    if ( a1->LowPart || a1->HighPart )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
        (__int64)&v17,
        2LL);
    }
    if ( *a2 )
      return 0LL;
    WdLogSingleEntry2(4LL, a1->HighPart, a1->LowPart);
    v13 = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v13,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v17,
      2LL);
    if ( *a2 )
      return 0LL;
    WdLogSingleEntry1(4LL, 4486LL);
  }
  if ( *a2 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
  if ( IsCurrentConsoleSession() )
    v16 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 125);
  else
    v16 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 123);
  DXGADAPTER_REFERENCE::Assign(a2, v16);
  if ( *a2 )
  {
    if ( (_BYTE)v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, -1073741275LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkGetAdapter(): BRD WARP is not available, returning 0x%I64x.",
    -1073741275LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (_BYTE)v18 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
  return 3221226021LL;
}
