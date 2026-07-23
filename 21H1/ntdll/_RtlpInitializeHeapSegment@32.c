/*
 * XREFs of _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD
 * Callers:
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        _DWORD *BaseAddress,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int *BaseAddressa,
        unsigned int a8)
{
  unsigned int v9; // ecx
  int *v11; // ebx
  signed int v12; // eax
  unsigned __int16 *v13; // edx
  unsigned int v14; // eax
  unsigned __int16 *v15; // edx
  unsigned int v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // ecx
  ULONG HeapProtection; // eax
  int v21; // eax
  __int16 v22; // ax
  ULONG_PTR v23; // [esp-10h] [ebp-38h]
  ULONG v24; // [esp+0h] [ebp-28h]
  int v25; // [esp+10h] [ebp-18h]
  unsigned int NtGlobalFlag; // [esp+14h] [ebp-14h]
  __int16 v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-Ch]
  unsigned __int16 *v29; // [esp+20h] [ebp-8h]
  unsigned int v30; // [esp+24h] [ebp-4h] BYREF

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = BaseAddressa;
  v28 = (int)(a8 - a6) / 4096;
  v12 = (a3 + 7) & 0xFFFFFFF8;
  v13 = (unsigned __int16 *)(v12 + a2);
  v27 = v12 >> 3;
  v14 = v12 + a2 + 40;
  v29 = v13;
  if ( v14 >= (unsigned int)BaseAddressa )
  {
    if ( v14 < a8 )
    {
      v30 = (char *)v13 - (char *)BaseAddressa + 8;
      if ( RtlpHpHeapCheckCommitLimit(BaseAddress, BaseAddress + 53) )
      {
        HeapProtection = RtlpGetHeapProtection(BaseAddress, 1);
        HIDWORD(v23) = &v30;
        LODWORD(v23) = 0;
        if ( NtAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFF,
               (PVOID *)&BaseAddressa,
               v23,
               (PSIZE_T)0x1000,
               HeapProtection,
               v24) >= 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v21 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v21 = 2147353472;
          if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(v30, 3);
          v11 = (int *)((char *)BaseAddressa + v30);
          v9 = a8;
          BaseAddressa = (int *)((char *)BaseAddressa + v30);
          goto LABEL_3;
        }
      }
      ++BaseAddress[137];
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 2) = 1;
  *(_BYTE *)(a2 + 7) = 1;
  v25 = (int)(v9 - (_DWORD)v11) / 4096;
  *(_WORD *)a2 = v27;
  *(_WORD *)(a2 + 4) = *((_WORD *)BaseAddress + 42);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v22 = RtlLogStackBackTraceEx((void *)1);
    v11 = BaseAddressa;
    *(_WORD *)(a2 + 52) = v22;
  }
  *(_DWORD *)(a2 + 44) = 0;
  v15 = v29;
  *(_DWORD *)(a2 + 12) = a5;
  *(_DWORD *)(a2 + 28) = a6;
  *(_DWORD *)(a2 + 24) = BaseAddress;
  *(_DWORD *)(a2 + 40) = (v28 << 12) + a6;
  *(_DWORD *)(a2 + 32) = v28;
  *(_DWORD *)(a2 + 8) = -1114130;
  *(_DWORD *)(a2 + 36) = v29;
  BaseAddress[126] += v28 << 12;
  BaseAddress[125] += v28 << 12;
  *(_DWORD *)(a2 + 60) = a2 + 56;
  *(_DWORD *)(a2 + 56) = a2 + 56;
  *(_BYTE *)(a2 + 6) = *(_DWORD *)(a2 + 24) != a2;
  v29[2] = *((_WORD *)BaseAddress + 42) ^ *(_WORD *)a2;
  if ( *(_DWORD *)(a2 + 24) == a2 )
  {
    LOBYTE(v16) = 0;
  }
  else
  {
    v16 = (((unsigned int)v29 - a2) >> 16) + 1;
    if ( v16 >= 0xFE )
    {
      RtlpLogHeapFailure(v29, a2, 0, 0);
      v11 = BaseAddressa;
      v15 = v29;
      LOBYTE(v16) = (((unsigned int)v29 - a2) >> 16) + 1;
    }
  }
  *((_BYTE *)v15 + 6) = v16;
  RtlpCreateUCREntry((int)BaseAddress, (char *)a2, v11 - 6, v25 << 12, (int *)v15, (int *)&v30);
  if ( BaseAddress[19] )
  {
    *(_BYTE *)(a2 + 3) = *(_BYTE *)(a2 + 2) ^ *(_BYTE *)a2 ^ *(_BYTE *)(a2 + 1);
    *(_DWORD *)a2 ^= BaseAddress[20];
  }
  if ( v30 )
    RtlpInsertFreeBlock((int)BaseAddress, v29, v30);
  v17 = (_DWORD *)(a2 + 16);
  v18 = (_DWORD *)BaseAddress[42];
  if ( (_DWORD *)*v18 == BaseAddress + 41 )
  {
    *v17 = BaseAddress + 41;
    v17[1] = v18;
    *v18 = v17;
    BaseAddress[42] = v17;
  }
  else
  {
    RtlpLogHeapFailure(BaseAddress + 41, 0, *v18, 0);
  }
  ++BaseAddress[129];
  return 1;
}
