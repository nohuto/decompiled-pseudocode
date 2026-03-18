/*
 * XREFs of EtwTracePool @ 0x14062DEE4
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x140641F58 (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140B0ABEC (ExInitializePoolTracker.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmIsNonPagedPoolNx @ 0x14059AA94 (MmIsNonPagedPoolNx.c)
 *     ExCheckSingleFilter @ 0x14063A59C (ExCheckSingleFilter.c)
 */

void __fastcall EtwTracePool(
        unsigned __int16 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v8; // si
  unsigned int v9; // r15d
  int SessionId; // eax
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int *v16; // r9
  __int64 v17; // r9
  int v18; // r10d
  unsigned int v19; // r11d
  int v20; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-40h]
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]
  _DWORD *v24; // [rsp+50h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+5Ch] [rbp-24h]
  int *v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]

  v20 = 0;
  v5 = a2 & 0x26D;
  v8 = a1;
  if ( a5 <= 0xFE0 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return;
  }
  else
  {
    v5 |= 0x10000000u;
  }
  v9 = 1;
  if ( a1 == 3618 && (v5 & 1) == 0 && MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v29 = 0;
    v20 = SessionId;
    v9 = 2;
    v28 = 4;
    v27 = &v20;
    ++v8;
  }
  v26 = 0;
  v24 = v21;
  v21[0] = v5;
  v21[1] = a3;
  v22 = a5;
  v23 = a4;
  v25 = 24;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v12 = !_BitScanForward((unsigned int *)&v13, v11);
  if ( !v12 )
  {
    while ( 1 )
    {
      v14 = (unsigned int)v13;
      v11 &= v11 - 1;
      v15 = 32 * v13 + EtwpHostSiloState + 4284;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 4) & 0x40) != 0 && EtwpPoolTagFilter[10 * (unsigned int)v13] )
          break;
      }
      if ( v15 )
      {
LABEL_19:
        if ( (*(_DWORD *)(v15 + 4) & 1) == 0 || a5 <= 0xFE0 )
          goto LABEL_22;
        goto LABEL_21;
      }
LABEL_22:
      v12 = !_BitScanForward((unsigned int *)&v13, v11);
      if ( v12 )
        return;
    }
    v16 = (unsigned int *)&EtwpPoolTagFilter[10 * (unsigned int)v13 + 2];
    while ( !(unsigned int)ExCheckSingleFilter(a3, *v16) )
    {
      v16 = (unsigned int *)(v17 + 4);
      if ( v18 + 1 >= v19 )
        goto LABEL_19;
    }
LABEL_21:
    EtwpLogKernelEvent(
      (__int64)&v24,
      EtwpHostSiloState,
      *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4232),
      v9,
      v8,
      0x1401B02u);
    goto LABEL_22;
  }
}
