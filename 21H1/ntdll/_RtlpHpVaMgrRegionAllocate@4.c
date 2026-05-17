/*
 * XREFs of _RtlpHpVaMgrRegionAllocate@4 @ 0x4B37B334
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlpHpVaMgrAllocAligned@12 @ 0x4B37A9F0 (_RtlpHpVaMgrAllocAligned@12.c)
 *     _RtlpHpVaMgrRangeCreate@12 @ 0x4B37B05E (_RtlpHpVaMgrRangeCreate@12.c)
 */

_BYTE *__thiscall RtlpHpVaMgrRegionAllocate(unsigned __int16 *this)
{
  int v2; // edx
  _BYTE *v3; // esi
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  int v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+18h] [ebp-8h] BYREF
  int v8; // [esp+1Ch] [ebp-4h] BYREF

  v7 = this[10] << 20;
  v2 = RtlpHpVaMgrAllocAligned((int)this, (int)&v7, v7);
  v8 = v2;
  if ( !v2 )
    return 0;
  memset(v5, 0, sizeof(v5));
  v6 = 0;
  LOWORD(v6) = this[10];
  v3 = RtlpHpVaMgrRangeCreate((int)this, v2, v5);
  v8 = v3 == 0 ? v8 : 0;
  if ( v8 )
    NtFreeVirtualMemory(-1, (int)&v8, (int)&v7, 0x8000);
  return v3;
}
