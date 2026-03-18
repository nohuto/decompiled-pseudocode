/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C02C88A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4A0 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x1C0171B90 (DpiRequestIoPowerState.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C026B090 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C026B134 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C02D76C0 (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r12
  char v7; // r13
  char v8; // r15
  __int64 SDCFlags; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v33; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  _OWORD v35[5]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v36[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h]
  ULONG v40; // [rsp+E4h] [rbp-1Ch]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]

  v3 = IoObject[8];
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  IoWorkItema = IoWorkItem;
  v32 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(SDCFlags) = -1073741637;
    v10 = WdLogNewEntry5_WdError(IoObject, Context);
    *(_QWORD *)(v10 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  v11 = *(_QWORD *)(v3 + 5936);
  LOBYTE(IoWorkItem) = 1;
  v42 = *(_QWORD *)(v3 + 2672);
  v33.PathsArray = (PVOID)4;
  memset(&v33.ModesArray, 0, 24);
  v38 = 0LL;
  v36[0] = 30;
  v36[1] = 72;
  v37 = 0LL;
  memset(&v36[2], 0, 24);
  v39 = 43;
  v41 = 0LL;
  SMgrGdiCallout(&v33, v11, IoWorkItem, 0LL, 0LL, v4);
  v12 = *(_QWORD *)(v3 + 5936);
  SDCFlags = (int)v33.SDCFlags;
  v40 = v33.SDCFlags;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v36, v12);
  if ( (int)SDCFlags >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 484) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v7 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 3976) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(SDCFlags) = -1073741661;
        v10 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v10 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v19 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(SDCFlags) = v19;
    if ( v19 >= 0 )
    {
      v32 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v19);
      LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v20, *((_DWORD *)Context + 4));
      if ( (int)SDCFlags >= 0 )
        goto LABEL_24;
      LODWORD(SDCFlags) = 0;
    }
    else if ( v19 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v15 = WdLogNewEntry5_WdError(v14, v13);
  *(_QWORD *)(v15 + 24) = SDCFlags;
  WdLogEvent5_WdError(v15);
LABEL_20:
  if ( (int)SDCFlags >= 0 )
    goto LABEL_24;
  if ( v32 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v16, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)SDCFlags);
LABEL_24:
  if ( v7 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(&v35[1], 0, 32);
    v21 = *(_QWORD *)(v3 + 2672);
    LOBYTE(v16) = 1;
    *((_QWORD *)&v35[1] + 1) = 0LL;
    *((_QWORD *)&v35[3] + 1) = 0LL;
    *(_QWORD *)&v35[4] = v21;
    v35[0] = 0x480000001EuLL;
    *(_OWORD *)((char *)v35 + 8) = 0LL;
    LODWORD(v35[3]) = 44;
    v22 = *(_QWORD *)(v3 + 5936);
    v33.PathsArray = (PVOID)4;
    *(_QWORD *)&v33.SDCFlags = 0LL;
    *(_QWORD *)&v33.NumPathArrayElements = 1LL;
    v33.ModesArray = 0LL;
    SMgrGdiCallout(&v33, v22, v16, 0LL, 0LL, v4);
    DWORD1(v35[3]) = v33.SDCFlags;
    SDCFlags = (int)v33.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, *(_QWORD *)(v3 + 5936));
    if ( (v33.SDCFlags & 0x80000000) != 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v25 + 24) = SDCFlags;
      WdLogEvent5_WdError(v25);
    }
  }
  if ( v8 == 1 )
  {
    *(_OWORD *)&v33.NumPathArrayElements = 0LL;
    v33.SDCFlags = 143;
    *(_OWORD *)&v33.PathsArray = 0LL;
    memset(v35, 0, 0x48uLL);
    *(_QWORD *)&v35[4] = *(_QWORD *)(v3 + 2672);
    v26 = *((_DWORD *)Context + 4);
    *((_QWORD *)&v35[1] + 1) = 0LL;
    v35[0] = 0x480000001EuLL;
    DWORD2(v35[2]) = 0;
    *(_QWORD *)&v35[2] = 0LL;
    v35[3] = 0x2DuLL;
    v27 = *(_QWORD *)(v3 + 5936);
    if ( (v26 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v33, v4, v27);
    }
    else
    {
      v28 = DxgkRequestSyncDisplaySwitchCallout(&v33, v4, v27);
      SDCFlags = v28;
      if ( v28 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v31 + 24) = SDCFlags;
        WdLogEvent5_WdError(v31);
      }
    }
    DWORD1(v35[3]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, *(_QWORD *)(v3 + 5936));
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
