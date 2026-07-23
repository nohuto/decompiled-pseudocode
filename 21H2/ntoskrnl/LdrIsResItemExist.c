/*
 * XREFs of LdrIsResItemExist @ 0x140227160
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140226068 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x1405EDB54 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x1402271E0 (LdrRscIsTypeExist.c)
 *     LdrpGetRcConfig @ 0x1402273F4 (LdrpGetRcConfig.c)
 */

__int64 __fastcall LdrIsResItemExist(void *a1, _QWORD *a2)
{
  __int64 RcConfig; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  RcConfig = LdrpGetRcConfig(a1);
  v5 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v4, &v8) < 0 )
    {
      return 393216;
    }
    else
    {
      v6 = v8;
      if ( (*(_DWORD *)(v5 + 20) & 0x100) != 0 )
        v6 = v8 | 0x100000;
      if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 )
        v6 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v6;
}
