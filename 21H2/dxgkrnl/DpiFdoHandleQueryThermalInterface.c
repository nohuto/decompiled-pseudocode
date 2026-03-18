/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1C0390EF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int16 a2, __int16 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  int MiniportInterface; // edi
  _BYTE *PoolWithTag; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-50h]
  __int128 Src; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  _QWORD v15[3]; // [rsp+50h] [rbp-20h] BYREF

  v4 = Object[8];
  Src = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 != 1 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225659LL;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    return 3221225507LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  if ( *(_QWORD *)(v4 + 4864) )
    goto LABEL_19;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        a2,
                        1,
                        v12,
                        (__int64)&Src);
  if ( MiniportInterface < 0 )
  {
LABEL_16:
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    goto LABEL_26;
  }
  if ( *(_OWORD *)&v15[1] != 0LL )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    *(_QWORD *)(v4 + 4864) = PoolWithTag;
    if ( !PoolWithTag )
    {
      MiniportInterface = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      if ( *((_QWORD *)&v14 + 1) )
      {
        (*((void (__fastcall **)(_QWORD))&v14 + 1))(*((_QWORD *)&Src + 1));
        Src = 0LL;
        v14 = 0LL;
        memset(v15, 0, sizeof(v15));
      }
      goto LABEL_16;
    }
    *PoolWithTag = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4864) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4864) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 4864) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v4 + 4864) + 8LL), &Src, 0x38uLL);
LABEL_19:
    memmove(a4, &unk_1C012FDD0, 0x38uLL);
    a4[1] = Object;
    v11 = *(_QWORD *)(v4 + 4864);
    if ( !*(_QWORD *)(v11 + 48) )
    {
      a4[5] = 0LL;
      v11 = *(_QWORD *)(v4 + 4864);
    }
    if ( !*(_QWORD *)(v11 + 56) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    MiniportInterface = 0;
    goto LABEL_26;
  }
  WdLogSingleEntry1(3LL, 0LL);
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  MiniportInterface = -1073741637;
LABEL_26:
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
