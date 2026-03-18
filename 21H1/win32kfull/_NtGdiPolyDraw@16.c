/*
 * XREFs of _NtGdiPolyDraw@16 @ 0x213ACA
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 */

int __stdcall NtGdiPolyDraw(HDC a1, struct _POINTL *Address, char *a3, SIZE_T Size)
{
  int v4; // edi
  SIZE_T v5; // ecx
  HANDLE v7; // [esp+14h] [ebp-20h]
  HANDLE SecureHandle; // [esp+18h] [ebp-1Ch]

  v4 = 1;
  SecureHandle = 0;
  v7 = 0;
  if ( Size <= 0x1FFFFFFF )
  {
    v5 = Size;
    if ( 8 * Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Address[v5] > _MmUserProbeAddress || &Address[v5] < Address )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    if ( Size && ((unsigned int)&a3[Size] > _MmUserProbeAddress || &a3[Size] < a3) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    SecureHandle = MmSecureVirtualMemory(Address, 8 * Size, 2u);
    v7 = MmSecureVirtualMemory(a3, Size, 2u);
  }
  if ( !SecureHandle || !v7 )
    v4 = 0;
  if ( v4 )
    v4 = GrePolyDraw(a1, Address, a3, Size);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v7 )
    MmUnsecureVirtualMemory(v7);
  return v4;
}
