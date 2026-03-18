/*
 * XREFs of DpiAgpAllocatePool @ 0x1C0394EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r14
  SIZE_T v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // edi
  PMDL Mdl; // rsi
  int v12; // eax
  __int64 v13; // r8
  PVOID v14; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // r14
  struct _KMUTANT *v17; // rsi
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = (int)a3;
  v6 = a2;
  v21 = 0LL;
  v22[0] = 0LL;
  if ( !a1 || !a2 || !BaseAddress )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_QWORD *)(v7 + 16) != 0x274727044LL || !*(_QWORD *)(v7 + 712) || !*(_QWORD *)(v7 + 728) )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    return v10;
  }
  *BaseAddress = 0LL;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v7 + 712))(
         *(_QWORD *)(v7 + 680),
         v8,
         a3,
         &v21,
         a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 712), v9);
    return v10;
  }
  Mdl = IoAllocateMdl(0LL, v6, 0, 0, 0LL);
  if ( !Mdl )
  {
    v10 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
LABEL_32:
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 720))(*(_QWORD *)(v7 + 680), v21);
    return v10;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v7 + 728))(
          *(_QWORD *)(v7 + 680),
          v21,
          v8,
          0LL,
          Mdl,
          v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 728), v12);
LABEL_31:
    IoFreeMdl(Mdl);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v7 + 704) & 1) != 0 )
  {
    if ( !(_DWORD)v5 )
    {
      v13 = 516LL;
      goto LABEL_20;
    }
    if ( (_DWORD)v5 != 1 )
    {
      if ( (_DWORD)v5 == 2 )
      {
        v13 = 1028LL;
        goto LABEL_20;
      }
      WdLogSingleEntry2(2LL, v5, v7);
    }
    v13 = 4LL;
LABEL_20:
    v14 = (PVOID)MmMapIoSpaceEx(*a4, v6, v13);
    goto LABEL_24;
  }
  Mdl->MdlFlags |= 0x2002u;
  v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
LABEL_24:
  *BaseAddress = v14;
  if ( !v14 )
  {
    v10 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v7 + 736))(*(_QWORD *)(v7 + 680), v21, v8, 0LL);
    goto LABEL_31;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    if ( (*(_DWORD *)(v7 + 704) & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v6);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_30;
  }
  *((_DWORD *)PoolWithTag + 4) = 1953656900;
  *((_DWORD *)PoolWithTag + 5) = 9;
  PoolWithTag[3] = v21;
  PoolWithTag[4] = *a4;
  PoolWithTag[5] = v22[0];
  PoolWithTag[6] = Mdl;
  v17 = (struct _KMUTANT *)(v7 + 2600);
  *((_DWORD *)PoolWithTag + 14) = v6;
  *((_BYTE *)PoolWithTag + 60) = *(_BYTE *)(v7 + 704) & 1;
  *((_DWORD *)PoolWithTag + 16) = a3;
  PoolWithTag[9] = *BaseAddress;
  KeWaitForSingleObject((PVOID)(v7 + 2600), Executive, 0, 0, 0LL);
  v18 = (__int64 *)(v7 + 2584);
  v19 = *v18;
  if ( *(__int64 **)(*v18 + 8) != v18 )
    __fastfail(3u);
  *v16 = v19;
  v16[1] = v18;
  *(_QWORD *)(v19 + 8) = v16;
  *v18 = (__int64)v16;
  KeReleaseMutex(v17, 0);
  WdLogSingleEntry1(4LL, *BaseAddress);
  return v10;
}
