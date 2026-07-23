/*
 * XREFs of _GetShipAssertBuffer@0 @ 0x4B33B3F0
 * Callers:
 *     _ShipAssert@8 @ 0x4B33B510 (_ShipAssert@8.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 *     _SetAssertBufferPtrinPeb@4 @ 0x4B33B4C3 (_SetAssertBufferPtrinPeb@4.c)
 */

int __stdcall GetShipAssertBuffer()
{
  signed __int32 v0; // eax
  int v1; // esi
  int v2; // edi
  ULONG_PTR v4; // [esp-10h] [ebp-2Ch]
  ULONG v5; // [esp+0h] [ebp-1Ch]
  LARGE_INTEGER DelayInterval; // [esp+Ch] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-8h] BYREF

  RegionSize = 0LL;
  v0 = _InterlockedCompareExchange(&dword_4B3A6C20, 255, 0);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v2 = 0;
      DelayInterval.QuadPart = -1000000LL;
      do
      {
        ZwDelayExecution(0, &DelayInterval);
        v1 = dword_4B3A6C20;
        if ( dword_4B3A6C20 != 255 )
          break;
        ++v2;
      }
      while ( v2 < 5 );
      if ( v2 == 5 )
      {
        v1 = 238;
        _InterlockedCompareExchange(&dword_4B3A6C20, 238, 255);
      }
    }
  }
  else
  {
    HIDWORD(v4) = &RegionSize;
    LODWORD(v4) = 0;
    LODWORD(RegionSize) = 0x2000;
    if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, v4, (PSIZE_T)0x1000, 4u, v5) >= 0
      && (unsigned int)RegionSize >= 0x2000
      && SetAssertBufferPtrinPeb(HIDWORD(RegionSize)) >= 0 )
    {
      _InterlockedExchange(&dword_4B3A6C20, SHIDWORD(RegionSize));
      return HIDWORD(RegionSize);
    }
  }
  if ( HIDWORD(RegionSize) )
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
  return v1;
}
