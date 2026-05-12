/*
 * XREFs of RaidAdapterCreateDumpInfo @ 0x1C0077780
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007B60C (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0011AE0 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0011C10 (RaidQueryCrashdumpFunctions.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002C864 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002C94C (RaidAdapterFreeDumpInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00774F4 (RaidAdapterCreateDriverInfo.c)
 */

__int64 __fastcall RaidAdapterCreateDumpInfo(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  _QWORD *v6; // r14
  _BYTE *v7; // r12
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  unsigned int v14; // esi
  _QWORD *v15; // rcx
  _QWORD *v16; // r10
  __int64 v17; // rdx
  char *Pool; // rax
  char *v19; // rdi
  char *v20; // rax
  char *v21; // r14
  _BYTE *v22; // r12
  PVOID v23; // rax
  PVOID v24; // rsi
  __int64 v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // eax
  char v30; // r13
  _QWORD *v31; // rcx
  char v32; // si
  struct _DEVICE_OBJECT *v33; // rcx
  __int64 v34; // rax
  PVOID *v35; // rax
  PVOID **v36; // rcx
  PVOID *v37; // rax
  PVOID *v39; // [rsp+20h] [rbp-10h] BYREF
  PVOID v40; // [rsp+28h] [rbp-8h] BYREF
  char v41; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp+50h]
  char v43; // [rsp+88h] [rbp+58h]

  v42 = a3;
  v6 = a5;
  v7 = a6;
  *a4 = 0;
  v10 = a2 + 5;
  *a3 = 0LL;
  v11 = (_QWORD *)a2[5];
  v41 = 0;
  v39 = 0LL;
  v14 = 0;
  v43 = 0;
  *v6 = 0LL;
  *v7 = 0;
  if ( v11 != a2 + 5 )
  {
    do
    {
      v15 = v11 - 1;
      v16 = v11 - 1;
      v17 = v11[2] - *(_QWORD *)(a1 + 5192);
      if ( !v17 )
        v17 = v15[4] - *(_QWORD *)(a1 + 5200);
      if ( !v17 )
        break;
      v11 = (_QWORD *)*v11;
      v15 = 0LL;
      v16 = 0LL;
    }
    while ( v11 != v10 );
    if ( v16 )
    {
      *v6 = v15[7];
      *a4 = 1;
      *v7 = 1;
      *a3 = v15;
      return v14;
    }
  }
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v40 = Pool;
  v19 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x70uLL);
  *((_QWORD *)v19 + 2) = v19 + 8;
  *((_QWORD *)v19 + 1) = v19 + 8;
  *(_DWORD *)v19 = 112;
  *(_OWORD *)(v19 + 24) = *(_OWORD *)(a1 + 5192);
  v20 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v21 = v20;
  if ( v20 )
  {
    memset(v20 + 4, 0, 0x15CuLL);
    v22 = v21 + 312;
    *(_DWORD *)v21 = 312;
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v21 + 1) = a1;
    *((_OWORD *)v21 + 4) = *(_OWORD *)(a1 + 328);
    *((_OWORD *)v21 + 5) = *(_OWORD *)(a1 + 344);
    *((_OWORD *)v21 + 6) = *(_OWORD *)(a1 + 360);
    *((_OWORD *)v21 + 7) = *(_OWORD *)(a1 + 376);
    *((_OWORD *)v21 + 8) = *(_OWORD *)(a1 + 392);
    *((_OWORD *)v21 + 9) = *(_OWORD *)(a1 + 408);
    *((_OWORD *)v21 + 10) = *(_OWORD *)(a1 + 424);
    *((_OWORD *)v21 + 11) = *(_OWORD *)(a1 + 440);
    *((_OWORD *)v21 + 12) = *(_OWORD *)(a1 + 456);
    *((_OWORD *)v21 + 13) = *(_OWORD *)(a1 + 472);
    *((_OWORD *)v21 + 14) = *(_OWORD *)(a1 + 488);
    *((_OWORD *)v21 + 15) = *(_OWORD *)(a1 + 504);
    *((_OWORD *)v21 + 16) = *(_OWORD *)(a1 + 520);
    *((_OWORD *)v21 + 17) = *(_OWORD *)(a1 + 536);
    *((_DWORD *)v19 + 11) = 312;
    v23 = RaidAllocatePool(NonPagedPoolNx, 0x10000uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v24 = v23;
    if ( !v23 )
    {
      v14 = -1073741670;
LABEL_43:
      if ( v21 )
        ExFreePoolWithTag(v21, 0x44436152u);
      goto LABEL_45;
    }
    memset(v23, 0, 0x10000uLL);
    *((_DWORD *)v21 + 10) = 0x10000;
    *((_QWORD *)v21 + 6) = v24;
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 472) - 2) <= 2u )
      *((_DWORD *)v19 + 10) |= 1u;
    v25 = *(_QWORD *)(a1 + 552);
    if ( (*(_DWORD *)(v25 + 184) & 0x20) != 0 )
    {
      *((_DWORD *)v19 + 10) |= 2u;
      v25 = *(_QWORD *)(a1 + 552);
    }
    if ( (*(_DWORD *)(v25 + 184) & 0x80u) != 0 && (*(_DWORD *)(v25 + 188) & 2) != 0 )
      v26 = HiberFileHybridPriority;
    else
      v26 = -1;
    *((_WORD *)v21 + 148) = v26;
    if ( *(_BYTE *)(a1 + 4514) )
    {
      *((_QWORD *)v19 + 8) = *(_QWORD *)(a1 + 728);
      v27 = a1 + 792;
    }
    else
    {
      *((_QWORD *)v19 + 8) = 0LL;
      v27 = 0LL;
    }
    *((_QWORD *)v21 + 36) = v27;
    v28 = *(_DWORD *)(a1 + 520);
    if ( v28 )
      StorPortGetAdditionalCrashDumpArea(a1, (__int64)(v21 + 64), v28);
    v29 = RaidAdapterCreateDriverInfo(a1, a2, &v39, &v41);
    v30 = v41;
    v14 = v29;
    if ( v29 < 0 )
    {
      v37 = v39;
      goto LABEL_40;
    }
    v31 = *(_QWORD **)(a1 + 5088);
    if ( v31 && (int)PoFxRegisterCrashdumpDevice(*v31) >= 0 )
    {
      *v22 = 1;
      v32 = 1;
      *((_QWORD *)v21 + 40) = **(_QWORD **)(a1 + 5088);
    }
    else
    {
      v32 = v43;
    }
    v33 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 5154) = 1;
    *(_WORD *)(a1 + 5152) = 40;
    if ( RaidQueryCrashdumpFunctions(v33, (_LARGE_INTEGER)(a1 + 5152)) >= 0
      && (v34 = *(_QWORD *)(a1 + 5184)) != 0
      && *(_QWORD *)(a1 + 5176) )
    {
      *((_QWORD *)v21 + 42) = v34;
      *((_QWORD *)v21 + 43) = *(_QWORD *)(a1 + 5160);
    }
    else
    {
      *(_WORD *)(a1 + 5154) = 0;
      if ( !v32 )
      {
LABEL_38:
        v35 = v39;
        v14 = 0;
        v36 = (PVOID **)a5;
        *((_QWORD *)v19 + 6) = v21;
        v21 = 0LL;
        *((_QWORD *)v19 + 7) = v35;
        v40 = 0LL;
        *v36 = v35;
        v37 = 0LL;
        v39 = 0LL;
        *a6 = v30;
        *v42 = v19;
        v19 = 0LL;
LABEL_40:
        if ( !v30 && v37 )
          RaidAdapterFreeDriverInfo(&v39);
        goto LABEL_43;
      }
    }
    *((_QWORD *)v21 + 41) = a1 + 5037;
    *((_QWORD *)v21 + 2) = a1 + 5037;
    *((_QWORD *)v21 + 3) = StorDumpAdapterPowerOn;
    *((_QWORD *)v21 + 4) = v22;
    goto LABEL_38;
  }
  v14 = -1073741670;
LABEL_45:
  if ( v19 )
    RaidAdapterFreeDumpInfo(&v40);
  return v14;
}
