/*
 * XREFs of __ConvertMemHandle@8 @ 0x182DD4
 * Callers:
 *     _NtUserConvertMemHandle@8 @ 0x16070E (_NtUserConvertMemHandle@8.c)
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall _ConvertMemHandle(const void *a1, size_t a2)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi

  v4 = a2 + 12;
  v5 = 12;
  if ( v4 >= 0xC )
    v5 = v4;
  if ( v5 < a2 )
    return 0;
  v6 = (_DWORD *)HMAllocObject(0, 0, 6, v5);
  v7 = v6;
  if ( !v6 )
    return 0;
  HMLockObject(v6);
  v7[2] = a2;
  memcpy(v7 + 3, a1, a2);
  return *v7;
}
