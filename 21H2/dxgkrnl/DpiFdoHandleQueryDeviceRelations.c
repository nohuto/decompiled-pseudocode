/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1C0179040
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0179340 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C019FC7C (DpiFdoHandleQueryPowerRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int PowerRelations; // esi
  int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Length; // ecx
  char v10; // bp
  unsigned int *Information; // r14
  int v12; // eax
  unsigned int v13; // ebp
  _DWORD *PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r15
  __int64 *v20; // rbp
  unsigned int i; // r13d
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD v27[10]; // [rsp+20h] [rbp-98h] BYREF

  memset(v27, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  PowerRelations = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v27[8] = MEMORY[0xFFFFF78000000014];
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LODWORD(v27[3]) = 6;
  LOBYTE(v27[6]) = -1;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 2 )
  {
    PowerRelations = DpiFdoHandleQueryPowerRelations(v7, a2);
  }
  else
  {
    if ( Length )
      goto LABEL_30;
    _m_prefetchw((const void *)(v7 + 3644));
    v10 = _InterlockedOr((volatile signed __int32 *)(v7 + 3644), 1u);
    if ( (v10 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( (v10 & 1) == 0 && *(_DWORD *)(v7 + 236) == 2 && *(_DWORD *)(v7 + 3976) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 6LL, v27);
      if ( *(_BYTE *)(v7 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3304), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v6 = *Information;
      v5 = *Information - 1;
    }
    v12 = *(_DWORD *)(v7 + 3664);
    if ( v12 )
      v5 = v6 + v12 - 1;
    v13 = 8 * v5 + 16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v13);
      *v19 = v6 + *(_DWORD *)(v7 + 3664);
      if ( v6 )
        memmove(v19 + 2, Information + 2, 8LL * v6);
      v20 = *(__int64 **)(v7 + 3648);
      for ( i = 0; i < *(_DWORD *)(v7 + 3664); v20 = (__int64 *)*v20 )
      {
        if ( *v20 == *(_QWORD *)(v7 + 3648) )
          break;
        *(_QWORD *)&v19[2 * v6 + 2 + 2 * i] = v20[3];
        ObfReferenceObject((PVOID)v20[3]);
        *((_BYTE *)v20 + 509) = 1;
        ++i;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v19;
      v22 = (_QWORD *)(v7 + 3672);
      while ( 1 )
      {
        v23 = (_QWORD *)*v22;
        if ( (_QWORD *)*v22 == v22 )
          break;
        if ( (_QWORD *)v23[1] != v22 || (v26 = *v23, *(_QWORD **)(*v23 + 8LL) != v23) )
          __fastfail(3u);
        *v22 = v26;
        *(_QWORD *)(v26 + 8) = v22;
        *((_BYTE *)v23 + 509) = 0;
      }
    }
    else
    {
      PowerRelations = -1073741801;
      v25 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v25);
    }
    _InterlockedAnd((volatile signed __int32 *)(v7 + 3644), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3304));
    KeLeaveCriticalRegion();
  }
  if ( PowerRelations < 0 )
  {
    if ( PowerRelations != -1073741637 )
    {
      a2->IoStatus.Status = PowerRelations;
      IofCompleteRequest(a2, 1);
      return (unsigned int)PowerRelations;
    }
  }
  else
  {
    a2->IoStatus.Status = PowerRelations;
  }
LABEL_30:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 160), a2);
}
