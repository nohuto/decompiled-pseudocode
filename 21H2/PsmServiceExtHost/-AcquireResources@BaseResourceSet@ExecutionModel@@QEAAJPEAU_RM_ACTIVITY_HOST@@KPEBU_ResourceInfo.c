/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000222C
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F18 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180002420 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180002450 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800024E4 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002518 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180015080 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180035FB4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180045B58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1800634D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800746B8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 *a8,
        int a9,
        _DWORD *a10)
{
  __int64 v11; // r12
  int v13; // eax
  unsigned __int8 v14; // bl
  int v15; // esi
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *i; // rbx
  _QWORD *v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int8 v26; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h] BYREF
  int v33; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[1200]; // [rsp+90h] [rbp-70h] BYREF

  v11 = a3;
  `vector constructor iterator'(v35, 0x18uLL, 0x32uLL, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v34[2] = 0LL;
  v34[0] = v34;
  v34[1] = v34;
  v26 = 0;
  memcpy_0(v35, a4, 24 * v11);
  if ( a9 == 1 )
  {
    v14 = 1;
  }
  else
  {
    v13 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            a1,
            v11,
            (unsigned int)v35,
            a6,
            a5,
            a7,
            (__int64)&v26,
            (__int64)v27,
            (__int64)v34);
    v14 = v26;
    v15 = v13;
    if ( v13 < 0 )
      goto LABEL_11;
    if ( !v27[0] )
    {
LABEL_18:
      v15 = -2147220992;
      goto LABEL_11;
    }
    if ( !v26 )
      goto LABEL_5;
  }
  if ( !a8 )
    goto LABEL_18;
LABEL_5:
  a10[322] = a5;
  a10[2] = a6;
  if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(a1 + 40, a10) < 0 )
  {
    v15 = -2147024882;
  }
  else
  {
    if ( v14 )
    {
      a10[320] = 1;
      if ( (_DWORD)v11 )
      {
        v20 = v11;
        do
        {
          if ( *(_DWORD *)a4 <= 0x31u )
          {
            v16 = 3 * (*(int *)a4 + 3LL);
            *(_OWORD *)&a10[2 * v16] = *(_OWORD *)a4;
            *(_QWORD *)&a10[2 * v16 + 4] = a4[2];
          }
          a4 += 3;
          --v20;
        }
        while ( v20 );
      }
      ExecutionModel::BaseResourceSet::RevokeResourceList(v16, v34);
    }
    else
    {
      ExecutionModel::BaseResourceSet::RecursiveVisit(
        a1,
        1,
        v11,
        (unsigned int)v35,
        a10[2],
        1,
        (__int64)&v26,
        (__int64)v27,
        0LL,
        (__int64)a10);
      a10[320] = 2;
    }
    if ( a8 )
      *a8 = v14;
    v15 = 0;
  }
LABEL_11:
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 1LL) )
  {
    v30 = v14;
    v31 = a6;
    v32 = a5;
    v29 = a7;
    v33 = v11;
    LODWORD(v28) = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a7,
      (unsigned int)&unk_18009DA32,
      v17,
      v18,
      (__int64)&v28,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  if ( v15 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v28, a10);
    v21 = v28;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = v23 )
    {
      v23 = (_QWORD *)*i;
      if ( i[2] == v21 )
      {
        v24 = (_QWORD *)i[1];
        *v24 = v23;
        v23[1] = v24;
        v25 = i[2];
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        operator delete(i);
        --*(_QWORD *)(a1 + 56);
        v21 = v28;
      }
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v34);
  return (unsigned int)v15;
}
