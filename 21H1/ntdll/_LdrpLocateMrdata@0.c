/*
 * XREFs of _LdrpLocateMrdata@0 @ 0x4B334ED2
 * Callers:
 *     _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E (_LdrpChangeMrdataProtection@4.c)
 * Callees:
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpMakePermanentImageCommit@8 @ 0x4B2D1B08 (_LdrpMakePermanentImageCommit@8.c)
 */

unsigned int __stdcall LdrpLocateMrdata()
{
  char *v0; // eax
  int v1; // edi
  unsigned int v2; // esi
  unsigned int result; // eax
  unsigned __int16 *v4; // [esp+8h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3, 0x4B280000u, 0, 0, &v4);
  v0 = RtlSectionTableFromVirtualAddress(v4, (unsigned int)(&LdrSystemDllInitBlock - 315228160));
  if ( !v0 )
    __fastfail(5u);
  v1 = *((_DWORD *)v0 + 3) + 1260912640;
  v2 = *((_DWORD *)v0 + 2);
  result = LdrpMakePermanentImageCommit(v1, v2);
  LdrpMrdataSize = v2;
  LdrpMrdataBase = v1;
  return result;
}
