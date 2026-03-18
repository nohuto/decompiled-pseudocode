/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C002E6A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapBits @ 0x1C002E780 (GreSetBitmapBits.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(__int64 a1, unsigned int a2, char *a3)
{
  HANDLE v6; // r14
  unsigned int v7; // ebx
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  if ( a2 && ((unsigned __int64)&a3[a2] > MmUserProbeAddress || &a3[a2] < a3) )
    *(_BYTE *)MmUserProbeAddress = 0;
  v6 = MmSecureVirtualMemory(a3, a2, 2u);
  v7 = v6 != 0LL;
  if ( v7 )
    v7 = GreSetBitmapBits(a1, a2, a3, &v9, v6 != 0LL, v6);
  if ( v6 )
    MmUnsecureVirtualMemory(v6);
  return v7;
}
