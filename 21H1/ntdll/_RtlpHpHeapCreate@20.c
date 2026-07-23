/*
 * XREFs of _RtlpHpHeapCreate@20 @ 0x4B378A0E
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpHpMetadataHeapCreate@12 @ 0x4B3794A0 (_RtlpHpMetadataHeapCreate@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGetHeapInterceptorIndex@4 @ 0x4B36D74D (_RtlpGetHeapInterceptorIndex@4.c)
 *     _RtlpHeapLogRangeCreate@12 @ 0x4B36D797 (_RtlpHeapLogRangeCreate@12.c)
 *     _RtlpLogHeapCreateEvent@20 @ 0x4B36EF35 (_RtlpLogHeapCreateEvent@20.c)
 *     _RtlpHpEnvQueryProcessorCount@0 @ 0x4B37247C (_RtlpHpEnvQueryProcessorCount@0.c)
 *     _RtlpHpLfhContextInitialize@28 @ 0x4B3765A7 (_RtlpHpLfhContextInitialize@28.c)
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 *     _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7 (_RtlpHpRegisterEnvironment@8.c)
 *     _RtlpHpSegContextInitialize@36 @ 0x4B37B6E8 (_RtlpHpSegContextInitialize@36.c)
 *     _RtlpHpSegContextReserve@12 @ 0x4B37B777 (_RtlpHpSegContextReserve@12.c)
 *     _RtlpHpVsContextInitialize@24 @ 0x4B37F8D9 (_RtlpHpVsContextInitialize@24.c)
 */

int __fastcall RtlpHpHeapCreate(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf
  char v12; // si
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int StackCookie; // [esp+Ch] [ebp-24h]
  int v19[4]; // [esp+18h] [ebp-18h] BYREF
  int (__stdcall *v20)(int, int); // [esp+28h] [ebp-8h]

  if ( a2 > 0x7FFFFFFF || RtlpHpRegisterEnvironment(&a4, 1) < 0 )
    return 0;
  StackCookie = RtlpHpEnvQueryProcessorCount();
  v7 = (int *)RtlpHpHeapAllocate(a1, StackCookie, a4, a5);
  v6 = 0;
  if ( !v7 )
  {
    RtlpHpRegisterEnvironment(&a4, 0);
    return v6;
  }
  v8 = a4;
  v9 = a5;
  *v7 = a4;
  v7[1] = v9;
  v7[2] = -571548178;
  v7[3] = a1;
  if ( BYTE1(v8) >= 2u )
    LOBYTE(v6) = 16;
  if ( (a1 & 0x4000000) != 0 )
    LOBYTE(v6) = v6 | 4;
  RtlpHpSegContextInitialize(v7 + 64, (int)v7, (int)(v7 + 176), (int)(v7 + 128), (int)(v7 + 32), v6, v8, v9);
  RtlpHpSegContextInitialize(v7 + 96, (int)v7, 0, 0, (int)(v7 + 32), v6, a4, a5);
  v7[16] = 0;
  v7[17] = 0;
  v7[18] = 0;
  v11 = (v7[3] & 0x20000000) == 0;
  v7[45] = 0;
  if ( !v11 )
    v7[4] = (unsigned __int16)RtlpGetHeapInterceptorIndex((int (__stdcall *)(int, int, int, int))RtlpStackTraceDatabaseLogPrefix);
  v20 = 0;
  v12 = a4 & 1;
  v19[0] = (int)RtlpHpSegVsAllocate;
  v19[1] = (int)RtlpHpSegLfhVsFree;
  v19[2] = (int)RtlpHpSegLfhVsCommit;
  v19[3] = (int)RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(v7 + 128, (int)v19, a4 & 1, v10, (int)&dword_4B3A8A2C);
  v19[0] = (int)RtlpHpSegLfhAllocate;
  v20 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(
    (unsigned int)(v7 + 176),
    (int)(v7 + 64),
    StackCookie,
    v12,
    v19,
    (_WORD)v7 + 128,
    &dword_4B3A8A28);
  v7[21] = 0;
  if ( (int)RtlpHpSegContextReserve(a3) < 0 )
  {
    v6 = 0;
LABEL_27:
    if ( v7 )
      RtlpHpHeapDestroy(v7);
    return v6;
  }
  v6 = (int)v7;
  v7 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeCreate(v6, *(_DWORD *)(v6 + 192) - v6, a1);
  v14 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (int)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(
      v6,
      a1,
      *(_DWORD *)(v6 + 192) - v6,
      *(_DWORD *)(v6 + 188) - v6,
      (HANDLE)*(unsigned __int8 *)v14);
    goto LABEL_27;
  }
  return v6;
}
