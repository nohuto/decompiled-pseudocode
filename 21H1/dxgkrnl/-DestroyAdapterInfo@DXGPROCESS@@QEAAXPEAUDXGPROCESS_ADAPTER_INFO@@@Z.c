/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C011684C
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00DC09C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0211650 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C0020D1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tl.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0036EE8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x1C0116A74 (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01538AC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0156B6C (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C0158678 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  struct ADAPTER_RENDER *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  char **v7; // rcx
  __int64 v8; // r12
  struct DXGPROCESS_ADAPTER_INFO *v9; // rdi
  struct DXGPROCESS_ADAPTER_INFO *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  struct ADAPTER_RENDER *v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v20; // [rsp+72h] [rbp-27h] BYREF
  int v21; // [rsp+74h] [rbp-25h] BYREF
  __int128 *v22; // [rsp+78h] [rbp-21h] BYREF
  __int64 v23; // [rsp+80h] [rbp-19h] BYREF
  const CHAR *v24; // [rsp+88h] [rbp-11h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h] BYREF
  __int64 v26; // [rsp+98h] [rbp-1h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v28; // [rsp+A8h] [rbp+Fh] BYREF

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v17 + 24) = 2411LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_BYTE *)a2 + 77) )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)a2, this, a2[6]);
    v13 = a2[2];
    if ( v13 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[6], v13);
      a2[2] = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  }
  if ( *((_DWORD *)a2 + 7) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2[6]);
  v4 = a2[6];
  v5 = (char *)(a2 + 7);
  if ( *((struct _KTHREAD **)v4 + 10) != KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 4342LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)a2[8], *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*((_DWORD *)v4 + 76);
  v8 = *((_QWORD *)a2[6] + 2);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(v8 + 232)) = 0LL;
  v9 = a2[13];
  while ( v9 != (struct DXGPROCESS_ADAPTER_INFO *)(a2 + 13) )
  {
    v10 = v9;
    v9 = *(struct DXGPROCESS_ADAPTER_INFO **)v9;
    if ( *((_QWORD *)v10 + 3)
      && (unsigned int)dword_1C00AEA90 > 5
      && tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000000010LL) )
    {
      v14 = *((_QWORD *)this + 8);
      v15 = *((_OWORD *)this + 20);
      v22 = &v28;
      v16 = *(_QWORD *)(v14 + 72);
      v19[0] = (*((_BYTE *)this + 347) & 2) != 0;
      v23 = *(_QWORD *)(v8 + 316);
      v28 = v15;
      v24 = *(const CHAR **)(v14 + 80);
      v21 = *((_DWORD *)v10 + 4);
      v25 = v16;
      v26 = v12;
      v20 = 3;
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
        v14,
        (int)&unk_1C007D211,
        v11,
        v12,
        (__int64)&v27,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v21,
        (__int64)&v25,
        &v24,
        (__int64)&v23,
        (__int64)v19,
        (__int64 *)&v22);
    }
    operator delete(v10);
  }
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  operator delete(a2);
}
