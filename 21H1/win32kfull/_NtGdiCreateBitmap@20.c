/*
 * XREFs of _NtGdiCreateBitmap@20 @ 0x9BB9E
 * Callers:
 *     <none>
 * Callees:
 *     ?noOverflowCJSCANW@@YGKKGGK@Z @ 0x9BC5E (-noOverflowCJSCANW@@YGKKGGK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiCreateBitmap(int a1, int a2, int a3, int a4, char *Address)
{
  int Bitmap; // ebx
  SIZE_T v7; // eax
  unsigned __int16 v8; // [esp+0h] [ebp-30h]
  unsigned int v9; // [esp+4h] [ebp-2Ch]
  HANDLE SecureHandle; // [esp+10h] [ebp-20h]

  Bitmap = 1;
  SecureHandle = 0;
  if ( Address )
  {
    v7 = noOverflowCJSCANW(a4, a2, v8, v9);
    Bitmap = v7 != 0;
    if ( v7 )
    {
      if ( (unsigned int)&Address[v7] > _MmUserProbeAddress || &Address[v7] < Address )
        *(_BYTE *)_MmUserProbeAddress = 0;
      SecureHandle = MmSecureVirtualMemory(Address, v7, 2u);
      Bitmap &= -(SecureHandle != 0);
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, a2, a3, a4, Address);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  return Bitmap;
}
