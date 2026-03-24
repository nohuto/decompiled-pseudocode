/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C02885B0
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C02881B0 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C00475C8 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1C02190C8 (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  ADAPTER_DISPLAY *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  _DXGKARG_CREATEPROTECTEDSESSION v26; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 983LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 6) = 1;
  v13 = *a2;
  if ( *((_DWORD *)*a2 + 48) != 5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v14 + 24) = 351LL;
    WdLogEvent5_WdAssertion(v14);
  }
  LOBYTE(v10) = 1;
  *((_QWORD *)this + 15) = *((_QWORD *)v13 + 25);
  *((_QWORD *)this + 14) = *a2;
  *((_QWORD *)this + 10) = *a3;
  *((_DWORD *)this + 22) = a4;
  *((_QWORD *)this + 12) = *a5;
  *((_DWORD *)this + 26) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  DXGPROTECTEDSESSION::AddReference(this, v10);
  v17 = (void *)*((_QWORD *)this + 10);
  *(&v26.PrivateDriverDataSize + 1) = 0;
  v18 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  v26.hProtectedSession = this;
  v26.pPrivateDriverData = v17;
  v26.PrivateDriverDataSize = a4;
  v19 = *((_QWORD *)v18 + 2);
  if ( *(_QWORD *)(v19 + 1176) && *(_QWORD *)(v19 + 1184) )
  {
    v22 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v18, &v26, v16);
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v18, v15, v16);
    v22 = -1073741637;
    *(_QWORD *)(v23 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v23);
  }
  if ( v22 < 0 )
  {
    *((_DWORD *)this + 6) = 3;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 18, 0xFFFFFFFF) != 1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v24 + 24) = 1051LL;
      WdLogEvent5_WdAssertion(v24);
    }
  }
  else
  {
    *((_QWORD *)this + 18) = v26.hProtectedSession;
  }
  return (unsigned int)v22;
}
