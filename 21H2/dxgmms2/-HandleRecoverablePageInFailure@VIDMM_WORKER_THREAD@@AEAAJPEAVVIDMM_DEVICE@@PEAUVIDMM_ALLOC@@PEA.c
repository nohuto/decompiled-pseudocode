/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00DED6C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00DDFB0 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM.c)
 *     ?FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00DE83C (-FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00DF4E0 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(
        union _LARGE_INTEGER *a1,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        ...)
{
  unsigned int v6; // ebx
  int v8; // r12d
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // r15
  char v12; // cl
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v19; // [rsp+90h] [rbp+28h]
  __int64 v20; // [rsp+98h] [rbp+30h]
  __int64 v21; // [rsp+A0h] [rbp+38h]
  int *v22; // [rsp+A8h] [rbp+40h]
  _QWORD *v23; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, int *);
  v23 = va_arg(va1, _QWORD *);
  v6 = 0;
  if ( VIDMM_WORKER_THREAD::FlushDeferredEvictions(a1, a2) )
  {
    ++a1[47].HighPart;
    return 0LL;
  }
  v8 = v21;
  v9 = **a3;
  v10 = *(_DWORD *)(v9 + 68);
  v11 = 1584LL * (v10 & 0x3F);
  v12 = *(_BYTE *)(*(_QWORD *)(a1->QuadPart + 40224) + v11 + 437);
  if ( v12 < 0
    && (*(_DWORD *)(a1->QuadPart + 7056) & 0x2000) == 0
    && ((unsigned __int8)~((unsigned __int8)v12 >> 2) & ((*(_DWORD *)a3[12] & 0x20000) != 0)) == 0
    && (v10 & 0x400) == 0
    && VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(a1, v9, a2) )
  {
    ++a1[48].LowPart;
    return 0LL;
  }
  v13 = v20;
  v14 = 0LL;
  v17 = 0LL;
  if ( !*(_BYTE *)(v20 + 8) )
  {
    if ( v19 && *(_DWORD *)(v19 + 48) == 203 )
      v15 = *(_DWORD *)(v19 + 80);
    else
      v15 = 0;
    if ( (unsigned __int8)VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v20, v8, v15, (__int64 *)va) )
    {
      ++a1[48].HighPart;
      return 0LL;
    }
    v14 = v17;
  }
  if ( (*(_DWORD *)a3[12] & 0x20000) != 0
    && (*(_BYTE *)(*(_QWORD *)(a1->QuadPart + 40224) + v11 + 437) & 4) == 0
    && !*(_BYTE *)(v13 + 8) )
  {
    v16 = *(_DWORD *)v13;
LABEL_26:
    v6 = -1073741823;
    goto LABEL_27;
  }
  v16 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 == 2 )
  {
    if ( v14 )
    {
      *v23 = v14;
      return 3223191812LL;
    }
    v16 = 2;
    goto LABEL_26;
  }
LABEL_27:
  *v22 = v16;
  return v6;
}
