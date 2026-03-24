/*
 * XREFs of DpiAgpAllocatePool @ 0x1C02D6620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  SIZE_T v7; // r12
  unsigned int v8; // esi
  PMDL Mdl; // rbp
  char v10; // r13
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rax
  PVOID v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rsi
  __int64 v40; // rax
  char v41; // al
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v49; // [rsp+40h] [rbp-58h]
  __int64 v50; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v51[9]; // [rsp+50h] [rbp-48h] BYREF
  char v52; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  v8 = 0;
  v50 = 0LL;
  Mdl = 0LL;
  v52 = 0;
  v10 = 0;
  v51[0] = 0LL;
  if ( !a1 || !(_DWORD)a2 || !BaseAddress )
  {
    LODWORD(v15) = -1073741811;
LABEL_35:
    if ( (int)v15 >= 0 )
      return (unsigned int)v15;
    if ( v10 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 712)
    || !*(_QWORD *)(v6 + 728) )
  {
    LODWORD(v15) = -1073741811;
    v47 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v15;
  }
  *BaseAddress = 0LL;
  LOBYTE(v8) = (a2 & 0xFFF) != 0;
  v11 = ((unsigned int)a2 >> 12) + v8;
  v49 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v6 + 712))(
          *(_QWORD *)(v6 + 680),
          v11,
          a3,
          &v50,
          a4);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v6 + 712);
    *(_QWORD *)(v16 + 32) = v15;
LABEL_11:
    WdLogEvent5_WdError(v16);
LABEL_32:
    v8 = v49;
    goto LABEL_35;
  }
  v52 = 1;
  Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v15) = -1073741670;
    v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v21);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 720))(*(_QWORD *)(v6 + 680), v50);
    return (unsigned int)v15;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v6 + 728))(
          *(_QWORD *)(v6 + 680),
          v50,
          v11,
          0LL,
          Mdl,
          v51);
  v15 = v22;
  if ( v22 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(v6 + 728);
    v16 = v25;
    *(_QWORD *)(v25 + 32) = v15;
    goto LABEL_11;
  }
  v10 = 1;
  if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
  {
    v26 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v26 = 1028;
        }
        else
        {
          v27 = WdLogNewEntry5_WdError((unsigned int)(v5 - 1), v23);
          *(_QWORD *)(v27 + 24) = v5;
          *(_QWORD *)(v27 + 32) = v6;
          WdLogEvent5_WdError(v27);
        }
      }
    }
    else
    {
      v26 = 516;
    }
    v28 = (PVOID)MmMapIoSpaceEx(*a4, v7, v26);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v28 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v28;
  if ( v28 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v39 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v15) = -1073741801;
      v40 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
      *(_QWORD *)(v40 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v40);
      v8 = v49;
LABEL_37:
      if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
        MmUnmapIoSpace(BaseAddress, v7);
      else
        MmUnmapLockedPages(BaseAddress, Mdl);
      goto LABEL_40;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v50;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v51[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v7;
    v41 = *(_BYTE *)(v6 + 704) & 1;
    v39[16] = v5;
    *((_BYTE *)v39 + 60) = v41;
    *((_QWORD *)v39 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v6 + 2600), Executive, 0, 0, 0LL);
    v42 = (_QWORD *)(v6 + 2584);
    v43 = *(_QWORD *)(v6 + 2584);
    if ( *(_QWORD *)(v43 + 8) != v6 + 2584 )
      __fastfail(3u);
    *(_QWORD *)v39 = v43;
    *((_QWORD *)v39 + 1) = v42;
    *(_QWORD *)(v43 + 8) = v39;
    *v42 = v39;
    KeReleaseMutex((PRKMUTEX)(v6 + 2600), 0);
    v46 = WdLogNewEntry5_WdEvent(v45, v44);
    *(_QWORD *)(v46 + 24) = *BaseAddress;
    WdLogEvent5_WdEvent(v46);
    goto LABEL_32;
  }
  LODWORD(v15) = -1073741670;
  v33 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
  *(_QWORD *)(v33 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v33);
  v8 = v49;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v6 + 736))(*(_QWORD *)(v6 + 680), v50, v8, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v52 == 1 )
    goto LABEL_44;
  return (unsigned int)v15;
}
