/*
 * XREFs of ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4
 * Callers:
 *     ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x1C00537A0 (--_GDXGGLOBAL@@EEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x1C0045604 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004EAE8 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0050E60 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C005362C (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0053764 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0053818 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C01600D4 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0179890 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C02F0268 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02FEE60 (--1DXGBLACKBOX@@QEAA@XZ.c)
 *     ??1HMGRTABLE@@QEAA@XZ @ 0x1C030D8C8 (--1HMGRTABLE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C0317F2C (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C033D334 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C033D5C4 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C03473F4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGMMS_EXPORT **v5; // rbx
  __int64 v6; // rbp
  DXGMMS_EXPORT *v7; // rdi
  void *v8; // rbx
  struct _ERESOURCE *v9; // rcx
  DXGDIAGNOSTICS *v10; // rcx
  DXGDIAGNOSTICS *v11; // rcx
  void *v12; // rbx
  struct DXGPROCESS *v13; // rcx
  void *v14; // rcx
  ULONG v15; // ebx
  ULONG v16; // ebx
  void *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  _QWORD *v21; // rcx
  ReferenceCounted *v22; // rcx

  *(_QWORD *)this = &DXGGLOBAL::`vftable';
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TrackedWorkload__private_reporting,
    0xC3EBFFu,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  v5 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v6 = 2LL;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      DXGMMS_EXPORT::Release(*v5);
      operator delete(v7);
    }
    *v5++ = 0LL;
    --v6;
  }
  while ( v6 );
  if ( *((_BYTE *)this + 1379) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 160));
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    HMGRTABLE::~HMGRTABLE(*((HMGRTABLE **)this + 4));
    operator delete(v8);
  }
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 79);
  *((_QWORD *)this + 4) = 0LL;
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    operator delete(*((void **)this + 79));
    *((_QWORD *)this + 79) = 0LL;
  }
  v10 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 120);
  if ( v10 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v10);
    *((_QWORD *)this + 120) = 0LL;
  }
  v11 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 121);
  if ( v11 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v11);
    *((_QWORD *)this + 121) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 122);
  if ( v12 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 122));
    operator delete(v12);
    *((_QWORD *)this + 122) = 0LL;
  }
  if ( *((_BYTE *)this + 1377) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1168));
    *((_BYTE *)this + 1377) = 0;
  }
  if ( *((_BYTE *)this + 1378) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1264));
    *((_BYTE *)this + 1378) = 0;
  }
  v13 = (struct DXGPROCESS *)*((_QWORD *)this + 175);
  if ( v13 )
  {
    DXGPROCESS::DestroyDxgProcess(v13);
    *((_QWORD *)this + 175) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 38073);
  if ( v14 )
  {
    operator delete(v14);
    *((_QWORD *)this + 38073) = 0LL;
  }
  if ( *((_QWORD *)this + 112) )
  {
    v15 = RtlNumberOfClearBits((PRTL_BITMAP)this + 54);
    if ( v15 != (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry1(1LL, 1466LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_GlobalAdapterOrdinalMap) == GetMaximumGlobalAdapterCount()",
        1466LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = RtlNumberOfClearBits((PRTL_BITMAP)this + 55);
    if ( v16 != 1024 - (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry1(1LL, 1467LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_SessionizedAdapterOrdinalMap) == ((MAX_ADAPTERS_CEILING) - GetMaximumGlobalAdapterCount())",
        1467LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RtlInitializeBitMap((PRTL_BITMAP)this + 54, 0LL, 0);
    RtlInitializeBitMap((PRTL_BITMAP)this + 55, 0LL, 0);
    operator delete[](*((void **)this + 112));
    *((_QWORD *)this + 112) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 191);
  if ( v17 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 191));
    operator delete(v17);
    *((_QWORD *)this + 191) = 0LL;
  }
  v18 = *((_QWORD *)this + 244);
  if ( v18 )
  {
    ExUnsubscribeWnfStateChange(v18);
    *((_QWORD *)this + 244) = 0LL;
  }
  v19 = *((_QWORD *)this + 267);
  if ( v19 )
  {
    ExUnsubscribeWnfStateChange(v19);
    *((_QWORD *)this + 267) = 0LL;
  }
  v20 = (void *)*((_QWORD *)this + 268);
  if ( v20 )
  {
    PoUnregisterPowerSettingCallback(v20);
    *((_QWORD *)this + 268) = 0LL;
  }
  if ( *((_DWORD *)this + 539) )
  {
    McGenEventUnregister_EtwUnregister(SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 539) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)((char *)this + 1968)) )
    KeFlushQueuedDpcs();
  operator delete[](*((void **)this + 38063));
  v21 = (_QWORD *)*((_QWORD *)this + 218);
  if ( v21 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v21);
  v22 = (ReferenceCounted *)*((_QWORD *)this + 38100);
  if ( v22 )
  {
    ReferenceCounted::Release(v22);
    *((_QWORD *)this + 38100) = 0LL;
  }
  if ( *((_BYTE *)this + 305024) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 305040));
  if ( *((_DWORD *)this + 89) != *((_DWORD *)this + 88) )
  {
    WdLogSingleEntry1(1LL, 1548LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareHandleTable.IsEmpty()", 1548LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 77) != (DXGGLOBAL *)((char *)this + 616) )
  {
    WdLogSingleEntry1(1LL, 1549LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SyncObjectList.IsEmpty()", 1549LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 86) != (DXGGLOBAL *)((char *)this + 688) )
  {
    WdLogSingleEntry1(1LL, 1550LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_KeyedMutexList.IsEmpty()", 1550LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 100) != (DXGGLOBAL *)((char *)this + 800) )
  {
    WdLogSingleEntry1(1LL, 1551LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterList.IsEmpty()", 1551LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 232) != (DXGGLOBAL *)((char *)this + 1856) )
  {
    WdLogSingleEntry1(1LL, 1552LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SharedPowerList.IsEmpty()", 1552LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 193) )
  {
    WdLogSingleEntry1(1LL, 1553LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_UefiFrameData == NULL", 1553LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305320));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305136));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 304952));
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 304864), 0LL);
  LongPowerButtonHoldListener::Stop((DXGGLOBAL *)((char *)this + 304704));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304728));
  DXGBLACKBOX::~DXGBLACKBOX((void **)this + 38080);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304592));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304520));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 2160));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1872));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 232);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1664));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 204);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1584));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 1464));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1416));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1096));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1024));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 816));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 100);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 752));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 704));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 86);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 640));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 77);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 568));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 52);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 368));
  operator delete[](*((void **)this + 42));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 288));
}
