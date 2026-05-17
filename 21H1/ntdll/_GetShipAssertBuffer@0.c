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

__int32 __stdcall GetShipAssertBuffer()
{
  signed __int32 v0; // eax
  int v1; // esi
  int v2; // edi
  _DWORD v4[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v5; // [esp+14h] [ebp-8h] BYREF
  __int32 v6; // [esp+18h] [ebp-4h] BYREF

  v6 = 0;
  v5 = 0;
  v0 = _InterlockedCompareExchange(&dword_4B3A6C20, 255, 0);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v4[1] = -1;
      v2 = 0;
      v4[0] = -1000000;
      do
      {
        ZwDelayExecution(0, (int)v4);
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
    v5 = 0x2000;
    if ( NtAllocateVirtualMemory(-1, (int)&v6, 0, (int)&v5, 4096, 4) >= 0
      && v5 >= 0x2000
      && SetAssertBufferPtrinPeb(v6) >= 0 )
    {
      _InterlockedExchange(&dword_4B3A6C20, v6);
      return v6;
    }
  }
  if ( v6 )
    NtFreeVirtualMemory(-1, (int)&v6, (int)&v5, 0x8000);
  return v1;
}
