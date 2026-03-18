/*
 * XREFs of _NtGdiSetBitmapBits@12 @ 0xBF7AA
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetBitmapBits@16 @ 0x20D9E (_GreSetBitmapBits@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiSetBitmapBits(int a1, SIZE_T Size, char *Address)
{
  int v3; // esi
  int v5; // [esp+10h] [ebp-24h] BYREF
  HANDLE SecureHandle; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v7 = 1;
  v5 = 0;
  SecureHandle = 0;
  ms_exc.registration.TryLevel = 0;
  if ( Size && ((unsigned int)&Address[Size] > _MmUserProbeAddress || &Address[Size] < Address) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  SecureHandle = MmSecureVirtualMemory(Address, Size, 2u);
  v3 = SecureHandle != 0;
  v7 = v3;
  ms_exc.registration.TryLevel = -2;
  if ( v3 )
    v3 = GreSetBitmapBits(a1, Size, (int)Address, &v5);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  return v3;
}
