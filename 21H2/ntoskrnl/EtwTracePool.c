/*
 * XREFs of EtwTracePool @ 0x1405A7EF4
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14021728C (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9FAC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmIsNonPagedPoolNx @ 0x140545228 (MmIsNonPagedPoolNx.c)
 *     ExCheckSingleFilter @ 0x1405B382C (ExCheckSingleFilter.c)
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
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r8
  unsigned int v16; // edi
  unsigned __int16 *v17; // r10
  int v18; // r9d
  __int64 v19; // r10
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
    v9 = 2;
    v20 = SessionId;
    ++v8;
    v28 = 4;
    v27 = &v20;
  }
  v26 = 0;
  v24 = v21;
  v21[0] = v5;
  v21[1] = a3;
  v22 = a5;
  v23 = a4;
  v25 = 24;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v14 = (unsigned int)v13;
    v11 &= v11 - 1;
    v15 = 32 * v13 + EtwpHostSiloState + 4260;
    if ( v15 && (*(_DWORD *)(v15 + 4) & 0x40) != 0 && (v16 = EtwpPoolTagFilter[10 * (unsigned int)v13]) != 0 )
    {
      v17 = &EtwpPoolTagFilter[10 * (unsigned int)v13 + 2];
      while ( !(unsigned int)ExCheckSingleFilter(a3, *(unsigned int *)v17) )
      {
        v17 = (unsigned __int16 *)(v19 + 4);
        if ( v18 + 1 >= v16 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( !v15 || (*(_DWORD *)(v15 + 4) & 1) == 0 || a5 <= 0xFE0 )
        continue;
    }
    EtwpLogKernelEvent(
      (__int64)&v24,
      EtwpHostSiloState,
      *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4208),
      v9,
      v8,
      0x1401B02u);
  }
}
