/*
 * XREFs of ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801402F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057430 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18013E9B4 (--0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x18013EB44 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetActiveEndpoint(
        PhoneTopology *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IEndpointDevice *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // rcx
  SetCellularRoutingWorkItem *v13; // rax
  int v14; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+50h] [rbp+8h] BYREF
  SetCellularRoutingWorkItem *v19; // [rsp+60h] [rbp+18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_29;
  }
  v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)a3 + 56LL))(a3);
  v8 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a3 + 48LL))(a3, &v18);
  if ( v8 < 0 )
  {
    v6 = v8;
    goto LABEL_29;
  }
  v9 = v18;
  if ( a2 )
  {
    if ( v18 == *((_DWORD *)this + 325) )
    {
      v12 = v7;
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        v12 = *(_QWORD *)v7;
      v11 = (char *)this + 780;
      if ( !(unsigned int)_o__wcsnicmp(v12, (char *)this + 780, 260LL) )
        goto LABEL_29;
      v9 = v18;
    }
    else
    {
      v11 = (char *)this + 780;
    }
    *((_DWORD *)this + 325) = v9;
    goto LABEL_20;
  }
  if ( v18 != *((_DWORD *)this + 194) )
  {
    v11 = (char *)this + 256;
    goto LABEL_12;
  }
  v10 = v7;
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v10 = *(_QWORD *)v7;
  v11 = (char *)this + 256;
  if ( (unsigned int)_o__wcsnicmp(v10, (char *)this + 256, 260LL) )
  {
    v9 = v18;
LABEL_12:
    *((_DWORD *)this + 194) = v9;
LABEL_20:
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v7 = *(_QWORD *)v7;
    StringCchCopyW(v11, 260LL, (char *)v7);
    if ( *((_QWORD *)this + 3) )
    {
      v13 = (SetCellularRoutingWorkItem *)operator new(0x438uLL);
      v19 = v13;
      if ( v13 )
        v13 = SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(v13, (PhoneTopology *)((char *)this + 256));
      if ( v13 )
      {
        v14 = PhoneTopology::AddWorkItemToQueue(this, v13);
        if ( v14 < 0 )
          v6 = v14;
      }
      else
      {
        v6 = -2147024882;
      }
    }
  }
LABEL_29:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
