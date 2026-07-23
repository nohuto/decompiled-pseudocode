/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x1409B02C8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409AEFE0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14022E620 (RtlSetBitsEx.c)
 *     RtlFindSetBitsEx @ 0x1402873C0 (RtlFindSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140506E9C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405082AC (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     RtlFindNextForwardRunClearEx @ 0x140585AE0 (RtlFindNextForwardRunClearEx.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409B05A4 (IopLiveDumpRemoveSystemCacheFromDump.c)
 */

char __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  _RTL_BITMAP_EX *v6; // rsi
  ULONG64 SetBits; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 NextForwardRunClear; // [rsp+20h] [rbp-28h]
  ULONG64 v19; // [rsp+28h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF
  ULONG64 v21; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  __int64 MillisecondCounter; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v22 = 0LL;
  v24 = 0LL;
  MillisecondCounter = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v20 = 0LL;
  if ( (v3 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v4 = a1 + 544;
  v5 = *(_QWORD *)(a1 + 544);
  v19 = v5;
  IopLiveDumpRemoveSystemCacheFromDump(a1, a2, &v24);
  v6 = (_RTL_BITMAP_EX *)(a1 + 600);
  if ( a1 != -600 )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v6, 1uLL, 0LL);
      if ( SetBits != -1LL )
      {
        do
        {
          NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v6, SetBits, &v22);
          if ( NextForwardRunClear )
            v5 = v22;
          v8 = v5 - SetBits;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v4, SetBits, v8);
          }
          else
          {
            v9 = *(_QWORD *)(a1 + 552);
            *(_QWORD *)&v20 = SetBits + v8;
            v10 = SetBits;
            *((_QWORD *)&v20 + 1) = v9;
            v21 = SetBits;
            do
            {
              v11 = RtlFindNextForwardRunClearEx((__int64)&v20, v10, &v21);
              if ( !v11 )
                break;
              v12 = *(_QWORD *)(a1 + 688);
              if ( v11 > v12 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v11 = v12;
              }
              v13 = v21;
              if ( v11 )
              {
                RtlSetBitsEx((__int64)&v20, v21, v11);
                *(_QWORD *)(a1 + 688) -= v11;
              }
              v14 = *(_DWORD *)(a1 + 80);
              if ( (v14 & 2) != 0 )
                return v14;
              v10 = v11 + v13;
              v21 = v10;
            }
            while ( v10 < SetBits + v8 );
            v4 = a1 + 544;
          }
          v15 = v8 + NextForwardRunClear;
          v5 = v19;
          SetBits += v15;
        }
        while ( SetBits < v19 );
      }
      if ( v6 == (_RTL_BITMAP_EX *)(a1 + 600) && (*(_DWORD *)(a1 + 40) & 4) != 0 )
        v6 = (_RTL_BITMAP_EX *)(a1 + 656);
      else
        v6 = 0LL;
    }
    while ( v6 );
  }
  v14 = *(_DWORD *)(a1 + 80);
  if ( (v14 & 0x80u) != 0 )
  {
    v16 = IopLiveDumpGetMillisecondCounter(0);
    LOBYTE(v14) = IopLiveDumpTracePopulateBitmapForDumpDuration((const GUID *)a1, v16 - MillisecondCounter, v24);
  }
  return v14;
}
