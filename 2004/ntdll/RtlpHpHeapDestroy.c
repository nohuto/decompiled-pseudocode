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
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180107F8C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010E460 (RtlpHpLargeAllocationDestroy.c)
 */

struct _PEB *__fastcall RtlpHpHeapDestroy(__int128 *a1)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _PEB *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int128 *v23; // [rsp+20h] [rbp-29h] BYREF
  __int64 v24; // [rsp+28h] [rbp-21h] BYREF
  __int128 v25; // [rsp+30h] [rbp-19h] BYREF
  __int128 v26; // [rsp+40h] [rbp-9h] BYREF
  __int128 v27; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v28[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v29; // [rsp+66h] [rbp+1Dh]
  __int128 *v30; // [rsp+80h] [rbp+37h]

  v1 = (__int64)a1 + 72;
  v23 = a1;
  v2 = (a1[5] & 1) == 0;
  v4 = *((_QWORD *)a1 + 9);
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
  v11 = (unsigned __int64)(v23 + 42);
  while ( *(_QWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup((__int64)(v23 + 40), v11 ^ *(_QWORD *)v11);
    RtlpHpVsSubsegmentFree((__int64)(v23 + 40), v12, 1u);
  }
  RtlpHpLfhContextCleanup((__int64)(v23 + 52));
  RtlpHpSegContextCleanup(v23 + 16);
  RtlpHpSegContextCleanup(v23 + 28);
  v13 = *v23;
  v24 = *((_QWORD *)v23 + 31) - (_QWORD)v23;
  v2 = (*((_BYTE *)v23 + 30) & 1) == 0;
  v25 = v13;
  if ( v2 )
  {
    v27 = *v23;
    RtlpHpFreeVA(&v23, &v24, BYTE1(v25) < 2u ? 16809984 : 0x8000, &v27);
  }
  else
  {
    v26 = *v23;
    RtlpHpMetadataFree(v23, &v26);
  }
  RtlpHpRegisterEnvironment(&v25, 0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
    v17 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
    RtlpHeapLogRangeDestroy(v23);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v17, v16);
  v20 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v21 = (__int64)result->SharedData + 550;
  }
  else
  {
    v21 = 2147353472LL;
  }
  if ( *(_BYTE *)v21 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v19) )
        v20 = (__int64)NtCurrentPeb()->SharedData + 550;
      v22 = *(unsigned __int8 *)v20;
      v30 = v23;
      v29 = 4131;
      return (struct _PEB *)NtTraceEvent(v22, 1026LL, 8LL, v28);
    }
  }
  return result;
}
