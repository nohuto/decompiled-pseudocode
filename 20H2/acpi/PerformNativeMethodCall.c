/*
 * XREFs of PerformNativeMethodCall @ 0x1C00645C0
 * Callers:
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 * Callees:
 *     ConvertNtStatusToAMLIStatus @ 0x1C0010180 (ConvertNtStatusToAMLIStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerformNativeMethodCall(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a3 + 48);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 96);
  else
    v4 = 0LL;
  if ( ghNativeMethodEvalObject )
  {
    v10 = 0LL;
    v7[1] = a3 + 72;
    v7[0] = a1;
    v8 = 0LL;
    v9 = 0LL;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        *(_QWORD *)&v8 = *(_QWORD *)(a3 + 392);
      }
      else if ( a1 == 2 )
      {
        *(_QWORD *)&v8 = *(_QWORD *)(a3 + 392);
      }
    }
    else
    {
      *(_QWORD *)&v9 = a2;
      *(_QWORD *)&v8 = v3 + 120;
      *((_QWORD *)&v8 + 1) = *(_QWORD *)(a2 + 72) + 120LL;
      HIDWORD(v9) = *(_DWORD *)(a3 + 60);
      v10 = *(_QWORD *)(a3 + 64);
      if ( *(_BYTE *)(v4 + 192) )
        DWORD2(v9) = 1;
    }
    v5 = ((__int64 (__fastcall *)(_QWORD *))ghNativeMethodEvalObject)(v7);
  }
  else
  {
    v5 = -1073741823;
  }
  return ConvertNtStatusToAMLIStatus(v5);
}
