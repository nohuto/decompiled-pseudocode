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

int __fastcall RtlpHpHeapDestroy(int a1)
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
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int result; // eax
  unsigned __int8 v17; // cl
  int v18; // [esp-8h] [ebp-50h]
  int v19; // [esp-4h] [ebp-4Ch]
  int *v20; // [esp+10h] [ebp-38h] BYREF
  int v21; // [esp+14h] [ebp-34h] BYREF
  _DWORD v22[2]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v23[6]; // [esp+20h] [ebp-28h] BYREF
  __int16 v24; // [esp+26h] [ebp-22h]
  int *v25; // [esp+40h] [ebp-8h]

  v1 = a1 + 68;
  v21 = a1;
  v20 = (int *)a1;
  v2 = (*(_BYTE *)(a1 + 72) & 1) == 0;
  v3 = *(_DWORD *)(a1 + 68);
  v22[0] = a1 + 68;
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
    v6 = v21;
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
    v1 = v22[0];
    v4 = *(_BYTE *)(v22[0] + 4);
  }
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 0;
  if ( (v4 & 1) != 0 )
    *(_BYTE *)(v1 + 4) = 1;
  v11 = (unsigned int)(v20 + 132);
  while ( *(_DWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup(v20 + 128, v11 ^ *(_DWORD *)v11);
    RtlpHpVsSubsegmentFree(1);
  }
  RtlpHpLfhContextCleanup(v20 + 176);
  RtlpHpSegContextCleanup(v20 + 64);
  RtlpHpSegContextCleanup(v20 + 96);
  v12 = *v20;
  v22[1] = v20[1];
  v13 = v20[48] - (_DWORD)v20;
  v22[0] = v12;
  v21 = v13;
  v19 = v20[1];
  v18 = *v20;
  if ( (*((_BYTE *)v20 + 22) & 1) != 0 )
    RtlpHpMetadataFree(v18, v19);
  else
    RtlpHpFreeVA((int *)&v20, &v21, BYTE1(v12) < 2u ? 16809984 : 0x8000, v18, v19);
  RtlpHpRegisterEnvironment(v22, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeDestroy(v20);
  v15 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    result = (int)NtCurrentPeb()->SharedData + 550;
  else
    result = 2147353472;
  if ( *(_BYTE *)result )
  {
    result = (int)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 576) & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (int)NtCurrentPeb()->SharedData + 550;
      v17 = *(_BYTE *)v15;
      v25 = v20;
      v24 = 4131;
      return NtTraceEvent(v17, 1026, 4, (int)v23);
    }
  }
  return result;
}
