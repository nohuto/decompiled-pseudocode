/*
 * XREFs of LdrIsResItemExist @ 0x14033BF68
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14033AD04 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x14033BFE8 (LdrRscIsTypeExist.c)
 *     LdrpGetRcConfig @ 0x14033C1FC (LdrpGetRcConfig.c)
 */

__int64 __fastcall LdrIsResItemExist(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 RcConfig; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  LOBYTE(a3) = 1;
  RcConfig = LdrpGetRcConfig(a1, a2, a3);
  v6 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v5, &v9) < 0 )
    {
      return 393216;
    }
    else
    {
      v7 = v9;
      if ( (*(_DWORD *)(v6 + 20) & 0x100) != 0 )
        v7 = v9 | 0x100000;
      if ( (*(_DWORD *)(v6 + 16) & 0x10) != 0 )
        v7 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v7;
}
