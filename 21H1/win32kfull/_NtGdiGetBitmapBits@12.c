/*
 * XREFs of _NtGdiGetBitmapBits@12 @ 0xE2ADA
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetBitmapBits@16 @ 0xE2B7A (_GreGetBitmapBits@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiGetBitmapBits(int a1, SIZE_T Length, volatile void *Address)
{
  int v3; // esi
  unsigned int BitmapBits; // eax
  HANDLE SecureHandle; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = 1;
  SecureHandle = 0;
  v7 = 0;
  BitmapBits = GreGetBitmapBits(a1, 0, 0, &v7);
  if ( Length > BitmapBits )
    Length = BitmapBits;
  if ( Address )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, Length, 1u);
    SecureHandle = MmSecureVirtualMemory((PVOID)Address, Length, 4u);
    v3 = SecureHandle != 0;
    ms_exc.registration.TryLevel = -2;
  }
  if ( v3 )
    v3 = GreGetBitmapBits(a1, Length, Address, &v7);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  return v3;
}
