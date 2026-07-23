/*
 * XREFs of _RtlpHpHeapDestroy@4 @ 0x4B378C76
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpHeapLogRangeDestroy@4 @ 0x4B36D816 (_RtlpHeapLogRangeDestroy@4.c)
 *     _RtlpHpLfhContextCleanup@4 @ 0x4B3764C9 (_RtlpHpLfhContextCleanup@4.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 *     _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7 (_RtlpHpRegisterEnvironment@8.c)
 *     _RtlpHpLargeAllocationDestroy@8 @ 0x4B37A2B4 (_RtlpHpLargeAllocationDestroy@8.c)
 *     _RtlpHpSegContextCleanup@4 @ 0x4B37B557 (_RtlpHpSegContextCleanup@4.c)
 *     _RtlpHpVsSubsegmentCleanup@8 @ 0x4B37FB77 (_RtlpHpVsSubsegmentCleanup@8.c)
 *     _RtlpHpVsSubsegmentFree@12 @ 0x4B37FE9A (_RtlpHpVsSubsegmentFree@12.c)
 */

NTSTATUS __fastcall RtlpHpHeapDestroy(int a1)
{
  int v1; // esi
  bool v2; // zf
  unsigned int v3; // eax
  char v4; // cl
  int v5; // ebx
  int v6; // esi
  _DWORD *v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  ULONG_PTR v12; // rax
  int v13; // eax
  int v14; // esi
  NTSTATUS result; // eax
  unsigned __int8 v16; // cl
  int v17; // [esp-8h] [ebp-50h]
  int v18; // [esp-4h] [ebp-4Ch]
  PVOID BaseAddress; // [esp+10h] [ebp-38h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-34h] BYREF
  int v21; // [esp+1Ch] [ebp-2Ch]
  _BYTE Fields[6]; // [esp+20h] [ebp-28h] BYREF
  __int16 v23; // [esp+26h] [ebp-22h]
  PVOID v24; // [esp+40h] [ebp-8h]

  v1 = a1 + 68;
  LODWORD(RegionSize) = a1;
  BaseAddress = (PVOID)a1;
  v2 = (*(_BYTE *)(a1 + 72) & 1) == 0;
  v3 = *(_DWORD *)(a1 + 68);
  HIDWORD(RegionSize) = a1 + 68;
  if ( !v2 )
  {
    if ( v3 )
      v3 ^= v1;
    else
      v3 = 0;
  }
  v4 = *(_BYTE *)(a1 + 72);
  v5 = *(_BYTE *)(v1 + 4) & 1;
  if ( v3 )
  {
    v6 = RegionSize;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_DWORD *)v3 )
        {
          v7 = (_DWORD *)v3;
          if ( v5 )
            v3 ^= *(_DWORD *)v3;
          else
            v3 = *(_DWORD *)v3;
          *v7 = 0;
        }
        v8 = *(_DWORD *)(v3 + 4);
        if ( !v8 )
          break;
        v9 = v3;
        if ( v5 )
          v3 ^= v8;
        else
          v3 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v9 + 4) = 0;
      }
      v10 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFC;
      if ( v5 && v10 )
        v10 ^= v3;
      RtlpHpLargeAllocationDestroy(v3, v6);
      if ( !v10 )
        break;
      v3 = v10;
    }
    v1 = HIDWORD(RegionSize);
    v4 = *(_BYTE *)(HIDWORD(RegionSize) + 4);
  }
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 0;
  if ( (v4 & 1) != 0 )
    *(_BYTE *)(v1 + 4) = 1;
  v11 = (unsigned int)BaseAddress + 528;
  while ( *(_DWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup((char *)BaseAddress + 512, v11 ^ *(_DWORD *)v11);
    RtlpHpVsSubsegmentFree(1);
  }
  RtlpHpLfhContextCleanup((int *)BaseAddress + 176);
  RtlpHpSegContextCleanup((char *)BaseAddress + 256);
  RtlpHpSegContextCleanup((char *)BaseAddress + 384);
  HIDWORD(v12) = *(_DWORD *)BaseAddress;
  v21 = *((_DWORD *)BaseAddress + 1);
  LODWORD(v12) = *((_DWORD *)BaseAddress + 48) - (_DWORD)BaseAddress;
  RegionSize = v12;
  v18 = *((_DWORD *)BaseAddress + 1);
  v17 = *(_DWORD *)BaseAddress;
  if ( (*((_BYTE *)BaseAddress + 22) & 1) != 0 )
    RtlpHpMetadataFree(v17, v18);
  else
    RtlpHpFreeVA(&BaseAddress, &RegionSize, BYTE5(v12) < 2u ? 16809984 : 0x8000, v17, v18);
  RtlpHpRegisterEnvironment((char *)&RegionSize + 4, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy(BaseAddress);
  v14 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    result = (NTSTATUS)NtCurrentPeb()->SharedData + 550;
  else
    result = 2147353472;
  if ( *(_BYTE *)result )
  {
    result = (NTSTATUS)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 576) & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v14 = (int)NtCurrentPeb()->SharedData + 550;
      v16 = *(_BYTE *)v14;
      v24 = BaseAddress;
      v23 = 4131;
      return NtTraceEvent((HANDLE)v16, 0x402u, 4u, Fields);
    }
  }
  return result;
}
