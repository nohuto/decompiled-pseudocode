/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800048E4
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x180004520 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180004568 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x180004614 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpSegContextCleanup @ 0x180004B10 (RtlpHpSegContextCleanup.c)
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpRegisterEnvironment @ 0x180007C08 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1B0 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801082FC (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010E7D0 (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  __int128 v13; // xmm0
  __int64 v14; // rcx
  struct _PEB *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  void *v18; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-21h] BYREF
  __int128 v22; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE Fields[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  PVOID v26; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  BaseAddress = (PVOID)a1;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = (unsigned __int64)BaseAddress + 672;
  while ( *(_QWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup((__int64)BaseAddress + 640, v11 ^ *(_QWORD *)v11);
    RtlpHpVsSubsegmentFree((__int64)BaseAddress + 640, v12, 1u);
  }
  RtlpHpLfhContextCleanup((__int64)BaseAddress + 832);
  RtlpHpSegContextCleanup((char *)BaseAddress + 256);
  RtlpHpSegContextCleanup((char *)BaseAddress + 448);
  v13 = *(_OWORD *)BaseAddress;
  RegionSize = *((_QWORD *)BaseAddress + 31) - (_QWORD)BaseAddress;
  v2 = (*((_BYTE *)BaseAddress + 30) & 1) == 0;
  v22 = v13;
  if ( v2 )
  {
    v23[1] = *(_OWORD *)BaseAddress;
    RtlpHpFreeVA(&BaseAddress, &RegionSize);
  }
  else
  {
    v23[0] = *(_OWORD *)BaseAddress;
    RtlpHpMetadataFree(BaseAddress, v23);
  }
  RtlpHpRegisterEnvironment(&v22, 0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeDestroy(BaseAddress);
  LODWORD(v15) = RtlGetCurrentServiceSessionId();
  v16 = 2147353472LL;
  if ( (_DWORD)v15 )
  {
    v15 = NtCurrentPeb();
    v17 = (__int64)v15->SharedData + 550;
  }
  else
  {
    v17 = 2147353472LL;
  }
  if ( *(_BYTE *)v17 )
  {
    v15 = NtCurrentPeb();
    if ( (v15->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = (void *)*(unsigned __int8 *)v16;
      v26 = BaseAddress;
      v25 = 4131;
      LODWORD(v15) = NtTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v15;
}
