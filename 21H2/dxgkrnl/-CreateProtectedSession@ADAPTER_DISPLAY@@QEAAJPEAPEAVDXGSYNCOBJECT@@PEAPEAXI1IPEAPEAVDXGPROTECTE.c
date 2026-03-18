/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C033963C
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C033A220 (DxgkCreateProtectedSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0057E34 (--0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0057EBC (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0058130 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0339BC0 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGPROTECTEDSESSION *v14; // rax
  DXGPROTECTEDSESSION *v15; // rax
  struct DXGPROTECTEDSESSION *v16; // rbx
  int v17; // ebp
  struct DXGPROTECTEDSESSION **v19; // rax
  DXGADAPTER *v20; // rcx
  _BYTE v21[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 854LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      854LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 856LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppProtectedSession", 856LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v14 = (DXGPROTECTEDSESSION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(160LL, v11, v12, v13);
  if ( v14 && (v15 = DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(v14, (struct ADAPTER_DISPLAY *)this), (v16 = v15) != 0LL) )
  {
    v17 = DXGPROTECTEDSESSION::Initialize(v15, a2, a3, a4, a5, a6);
    if ( v17 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v21,
        (struct ADAPTER_DISPLAY *)this);
      v19 = this + 89;
      v20 = this[89];
      if ( *((DXGADAPTER ***)v20 + 1) != this + 89 )
        __fastfail(3u);
      *(_QWORD *)v16 = v20;
      *((_QWORD *)v16 + 1) = v19;
      *((_QWORD *)v20 + 1) = v16;
      *v19 = v16;
      if ( v21[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v16;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'(v16);
      return (unsigned int)v17;
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"ADAPTER_DISPLAY 0x%I64x: Unable to allocate protected session object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
