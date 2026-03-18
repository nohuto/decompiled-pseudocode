/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1C02D2860
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4A0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     DpiQueryMiniportInterface @ 0x1C01808E0 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int16 v6; // si
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int MiniportInterface; // esi
  __int64 v14; // r8
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int128 Src; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h]
  _QWORD v26[3]; // [rsp+50h] [rbp-20h] BYREF

  v4 = Object[8];
  v6 = a2;
  Src = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (_WORD)a3 != 1 )
  {
    v8 = WdLogNewEntry5_WdWarning(Object, a2, a3);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    v10 = WdLogNewEntry5_WdError(Object, a2);
    *(_QWORD *)(v10 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v10);
    return 3221225507LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  if ( *(_QWORD *)(v4 + 4936) )
    goto LABEL_19;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        v6,
                        1,
                        v23,
                        (__int64)&Src);
  if ( MiniportInterface < 0 )
  {
LABEL_16:
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    goto LABEL_26;
  }
  if ( *(_OWORD *)&v26[1] != 0LL )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    *(_QWORD *)(v4 + 4936) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      MiniportInterface = -1073741670;
      *(_QWORD *)(v21 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v21);
      if ( *((_QWORD *)&v25 + 1) )
      {
        (*((void (__fastcall **)(_QWORD))&v25 + 1))(*((_QWORD *)&Src + 1));
        Src = 0LL;
        v25 = 0LL;
        memset(v26, 0, sizeof(v26));
      }
      goto LABEL_16;
    }
    *PoolWithTag = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4936) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4936) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 4936) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v4 + 4936) + 8LL), &Src, 0x38uLL);
LABEL_19:
    memmove(a4, &unk_1C00AFCF8, 0x38uLL);
    a4[1] = Object;
    v22 = *(_QWORD *)(v4 + 4936);
    if ( !*(_QWORD *)(v22 + 48) )
    {
      a4[5] = 0LL;
      v22 = *(_QWORD *)(v4 + 4936);
    }
    if ( !*(_QWORD *)(v22 + 56) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    MiniportInterface = 0;
    goto LABEL_26;
  }
  v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
  *(_QWORD *)(v15 + 24) = 0LL;
  WdLogEvent5_WdWarning(v15);
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  MiniportInterface = -1073741637;
LABEL_26:
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
