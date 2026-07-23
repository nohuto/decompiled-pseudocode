/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x140560E5C
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1405602B0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140560CA4 (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140560D74 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleStartCsVetoAccounting @ 0x14056139C (PpmIdleStartCsVetoAccounting.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 */

char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int v5; // ecx
  LARGE_INTEGER j; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // dl
  unsigned int i; // edx
  unsigned __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise.LowPart) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v9 = LOBYTE(InterruptTimePrecise.LowPart) & ~a2;
    *(_BYTE *)(a1 + 24) = v9;
    if ( !v9 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v11 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v11 + 32) )
          *(LARGE_INTEGER *)(v11 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise.LowPart) |= a2;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise.LowPart;
    if ( LOBYTE(InterruptTimePrecise.LowPart) == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v5 = 0;
      for ( j = InterruptTimePrecise; v5 < *(_DWORD *)(a1 + 28); ++v5 )
      {
        v7 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)v5 << 6);
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          LOBYTE(InterruptTimePrecise.LowPart) = LOBYTE(j.LowPart) - v8;
          *(_QWORD *)(v7 + 56) += j.QuadPart - v8;
          *(_QWORD *)(v7 + 48) = 0LL;
        }
      }
    }
  }
  return InterruptTimePrecise.LowPart;
}
