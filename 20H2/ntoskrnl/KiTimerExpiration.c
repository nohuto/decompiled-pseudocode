/*
 * XREFs of KiTimerExpiration @ 0x140388B90
 * Callers:
 *     KiTimerExpirationDpc @ 0x140388A70 (KiTimerExpirationDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KiSelectActiveTimerTable @ 0x14028BA20 (KiSelectActiveTimerTable.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     KiExpireTimerTable @ 0x140388D50 (KiExpireTimerTable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r13d
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // ebx
  int v16; // r14d
  int v17; // ebp
  __int128 v19; // [rsp+50h] [rbp-68h] BYREF
  __int128 *v20; // [rsp+60h] [rbp-58h] BYREF
  int v21; // [rsp+68h] [rbp-50h]
  int v22; // [rsp+6Ch] [rbp-4Ch]

  v19 = 0LL;
  result = KiSelectActiveTimerTable(a1, 1);
  v11 = result;
  if ( result )
  {
    v12 = *(_DWORD *)(v9 + 35584);
    *(_DWORD *)(a1 + 35584) = ((_BYTE)v12 + 1) & 0xF;
    *(_QWORD *)(a1 + 16LL * v12 + 35592) = v10;
    *(LARGE_INTEGER *)(a1 + 16LL * v12 + 35600) = KeQueryPerformanceCounter(0LL);
    v13 = a3 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v22 = 0;
      v20 = &v19;
      *(_QWORD *)&v19 = a3;
      BYTE8(v19) = 0;
      v21 = 16;
      EtwTraceKernelEvent((__int64)&v20, 1u, 0x40020000u, 0xF50u, 0x602u);
    }
    v14 = 0LL;
    v15 = v13 - a2 + 1;
    if ( v15 > 0x100 )
      v14 = (v13 - v15 + 1) << 18;
    do
    {
      if ( v15 <= 0x100 )
      {
        v16 = v15;
        v17 = 256 - v15;
        v14 = a3;
        if ( 256 - v15 > 0x18 )
          v17 = 24;
      }
      else
      {
        v14 += 0x4000000LL;
        v16 = 256;
        v17 = 0;
      }
      KiExpireTimerTable(a1, v11, a2, v16, v17, v14, 0, a5);
      if ( a4 )
        KiExpireTimerTable(a1, v11, a2, v16, v17, v14, 1, a5);
      a2 += v16;
      result = 24LL;
      v15 -= v16;
    }
    while ( v15 );
    if ( (*(_BYTE *)(a1 + 12588) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 32420) = 0;
      result = *(unsigned int *)(a1 + 32424);
      if ( (unsigned int)result >= KeTimeIncrement )
      {
        result = (unsigned int)(result - KeTimeIncrement);
        *(_DWORD *)(a1 + 32424) = result;
      }
      else
      {
        *(_DWORD *)(a1 + 32424) = 0;
      }
    }
  }
  return result;
}
