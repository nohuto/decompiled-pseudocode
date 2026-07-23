/*
 * XREFs of HalpTscCompatibilitySynchronization @ 0x1404C171C
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x14039CD00 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

char __fastcall HalpTscCompatibilitySynchronization(__int64 a1)
{
  __int16 v1; // si
  int v3; // esi
  int v4; // eax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+20h] [rbp-8h]

  v1 = v9;
  _disable();
  v3 = v1 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = -1LL;
    _InterlockedDecrement((volatile signed __int32 *)a1);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)a1 != -1 );
    _InterlockedOr(v8, 0);
  }
  HalpProcessorFence();
  v5 = __rdtsc();
  while ( *(_DWORD *)(a1 + 4) != KeGetCurrentPrcb()->Number )
    _mm_pause();
  if ( !*(_BYTE *)(a1 + 34) || *(_DWORD *)(a1 + 36) != KeGetCurrentPrcb()->Number )
  {
    if ( v5 < *(_QWORD *)(a1 + 16) )
      *(_QWORD *)(a1 + 16) = v5;
    if ( v5 > *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = v5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    *(_BYTE *)(a1 + 32) = *(_BYTE *)(a1 + 33) || *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16) <= 0xF4240uLL;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 8));
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) != -1 );
    _InterlockedOr(v8, 0);
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 32);
  if ( (_BYTE)v6 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    __writemsr(0x10u, v6);
  }
  if ( v3 )
    _enable();
  return v6;
}
