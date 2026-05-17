/*
 * XREFs of RtlValidateHeap @ 0x18005E080
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800F2FB0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005E250 (RtlpValidateHeapEntry.c)
 *     RtlLockHeap @ 0x18005E390 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E430 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpLogHeapValidateEvent @ 0x18010A5EC (RtlpLogHeapValidateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  bool v13; // di
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  char v18; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v13 = 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v14 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v15 = *(_DWORD *)(a1 + 220);
    v16 = 0;
    if ( v15 )
      LOBYTE(v16) = v15 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v17 = v14 | 1;
    if ( !v16 )
      v17 = v14;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        a3 -= *(_QWORD *)(a3 - 16);
      v13 = RtlpHpSizeHeap(a1, a3, v17) != -1;
    }
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
    return v13;
  }
  else
  {
    v18 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v18 = ((__int64 (*)(void))qword_180164A28)();
    }
    else if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        v10 = RtlpValidateHeapEntry(a1, v9, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v10 = RtlpValidateHeap(a1, v7);
      }
      v18 = v10;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v7, v8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v18;
  }
}
