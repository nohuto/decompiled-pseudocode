/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00FD8B0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00FD734 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00FD9C0 (-CommitSlot@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  unsigned __int64 v4; // rsi
  ULONG v5; // ebp

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xE4u ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<233472,912>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    if ( ++*((_DWORD *)a1 + 8) >= 0xE4u )
      *((_DWORD *)a1 + 8) = 0;
    v4 = (a1[2] ^ a1[1]) + 912 * (v5 & 3) + (unsigned __int64)(v5 >> 2 << 12);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
