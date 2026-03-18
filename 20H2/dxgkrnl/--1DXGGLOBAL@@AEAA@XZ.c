/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0267CB4 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0043AC4 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0045444 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0045550 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C00455A4 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004FA6C (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C0168BF8 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C0275210 (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C02759BC (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C0289044 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C02941A4 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C029D084 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02BACA4 (--1DXGBLACKBOX@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C02C2A3C (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this, __int64 a2)
{
  DXGMMS_EXPORT **v3; // rbx
  __int64 v4; // rbp
  DXGMMS_EXPORT *v5; // rdi
  struct _ERESOURCE *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  void *v9; // rbx
  void *v10; // rbx
  struct DXGPROCESS *v11; // rcx
  void *v12; // rcx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  ReferenceCounted *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx

  v3 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v4 = 2LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      DXGMMS_EXPORT::Release(*v3);
      operator delete(v5);
    }
    *v3++ = 0LL;
    --v4;
  }
  while ( v4 );
  if ( *((_BYTE *)this + 208) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 112));
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 65);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    operator delete(*((void **)this + 65));
    *((_QWORD *)this + 65) = 0LL;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 100);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7, a2);
    *((_QWORD *)this + 100) = 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)this + 101);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8, a2);
    *((_QWORD *)this + 101) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 102);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 102));
    operator delete(v9);
    *((_QWORD *)this + 102) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 126);
  if ( v10 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 126));
    operator delete(v10);
    *((_QWORD *)this + 126) = 0LL;
  }
  if ( *((_BYTE *)this + 1233) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1024));
    *((_BYTE *)this + 1233) = 0;
  }
  if ( *((_BYTE *)this + 1234) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1120));
    *((_BYTE *)this + 1234) = 0;
  }
  v11 = (struct DXGPROCESS *)*((_QWORD *)this + 157);
  if ( v11 )
  {
    DXGPROCESS::DestroyDxgProcess(v11);
    *((_QWORD *)this + 157) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 38048);
  if ( v12 )
  {
    operator delete(v12);
    *((_QWORD *)this + 38048) = 0LL;
  }
  if ( *((_QWORD *)this + 92) )
  {
    v13 = RtlNumberOfClearBits((PRTL_BITMAP)this + 45);
    v15 = (*((_DWORD *)this + 312) + 31) & 0xFFFFFFE0;
    if ( v13 != (_DWORD)v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v16 + 24) = 1420LL;
      WdLogEvent5_WdAssertion(v16);
    }
    operator delete[](*((void **)this + 92));
    *((_QWORD *)this + 92) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)this + 45, 0LL, 0);
  }
  v17 = (void *)*((_QWORD *)this + 172);
  if ( v17 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 172));
    operator delete(v17);
    *((_QWORD *)this + 172) = 0LL;
  }
  v18 = *((_QWORD *)this + 222);
  if ( v18 )
  {
    ExUnsubscribeWnfStateChange(v18);
    *((_QWORD *)this + 222) = 0LL;
  }
  v19 = *((_QWORD *)this + 245);
  if ( v19 )
  {
    ExUnsubscribeWnfStateChange(v19);
    *((_QWORD *)this + 245) = 0LL;
  }
  v20 = (void *)*((_QWORD *)this + 246);
  if ( v20 )
  {
    PoUnregisterPowerSettingCallback(v20);
    *((_QWORD *)this + 246) = 0LL;
  }
  if ( *((_DWORD *)this + 495) )
  {
    McGenEventUnregister_EtwUnregister(&SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 495) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)this + 28) )
    KeFlushQueuedDpcs();
  operator delete[](*((void **)this + 38039));
  v22 = (_QWORD *)*((_QWORD *)this + 197);
  if ( v22 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v22);
  v23 = (ReferenceCounted *)*((_QWORD *)this + 38069);
  if ( v23 )
  {
    ReferenceCounted::Release(v23, v21);
    *((_QWORD *)this + 38069) = 0LL;
  }
  if ( *((_BYTE *)this + 304768) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 304784));
  if ( *((_DWORD *)this + 77) != *((_DWORD *)this + 76) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v24 + 24) = 1498LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = (_QWORD *)((char *)this + 504);
  if ( (_QWORD *)*v25 != v25 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v26 + 24) = 1499LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = (_QWORD *)((char *)this + 568);
  if ( (_QWORD *)*v27 != v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v28 + 24) = 1500LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = (_QWORD *)((char *)this + 664);
  if ( (_QWORD *)*v29 != v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v30 + 24) = 1501LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = (_QWORD *)((char *)this + 1688);
  if ( (_QWORD *)*v31 != v31 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v32 + 24) = 1502LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_QWORD *)this + 174) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v33 + 24) = 1503LL;
    WdLogEvent5_WdAssertion(v33);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304880), v21);
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 304704), v34);
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 304616), 0LL);
  LongPowerButtonHoldListener::Stop((DXGGLOBAL *)((char *)this + 304488));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304512), v35);
  DXGBLACKBOX::~DXGBLACKBOX((DXGGLOBAL *)((char *)this + 304432));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304392), v36);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304328), v37);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1984), v38);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1704), v39);
  if ( (_QWORD *)*v31 != v31 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v42 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v42);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1504), v40);
  if ( *((DXGGLOBAL **)this + 184) != (DXGGLOBAL *)((char *)this + 1472) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v44, v43);
    *(_QWORD *)(v45 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v45);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1432), v43);
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 1312));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1272), v46);
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 936));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 864));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 680), v47);
  if ( (_QWORD *)*v29 != v29 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v49, v48);
    *(_QWORD *)(v50 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v50);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 624), v48);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 584), v51);
  if ( (_QWORD *)*v27 != v27 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v53, v52);
    *(_QWORD *)(v54 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v54);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 528), v52);
  if ( (_QWORD *)*v25 != v25 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v56, v55);
    *(_QWORD *)(v57 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v57);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 464), v55);
  if ( *((DXGGLOBAL **)this + 45) != (DXGGLOBAL *)((char *)this + 360) )
  {
    v60 = WdLogNewEntry5_WdAssertion(v59, v58);
    *(_QWORD *)(v60 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v60);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 320), v58);
  operator delete[](*((void **)this + 36));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 248), v61);
}
