/*
 * XREFs of _LdrpResValdiateMappedAddress@4 @ 0x4B343B5A
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

int __fastcall LdrpResValdiateMappedAddress(int a1)
{
  _BYTE v2[28]; // [esp+0h] [ebp-1Ch] BYREF

  if ( a1 )
    return NtQueryVirtualMemory(-1, a1 & 0xFFFFFFFC, 0, (int)v2, 28, 0);
  else
    return -1073741811;
}
