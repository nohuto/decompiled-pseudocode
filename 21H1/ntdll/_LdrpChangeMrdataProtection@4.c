/*
 * XREFs of _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E
 * Callers:
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 * Callees:
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 */

int __thiscall LdrpChangeMrdataProtection(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF
  void *v4; // [esp+8h] [ebp-4h] BYREF

  v4 = this;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  v2 = LdrpMrdataBase;
  v3 = LdrpMrdataSize;
  result = ZwProtectVirtualMemory(-1, &v2, &v3, v4, &v4);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
