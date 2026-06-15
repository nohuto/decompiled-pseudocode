/*
 * XREFs of sub_180048DA8 @ 0x180048DA8
 * Callers:
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180048DA8(__int64 a1)
{
  __int64 v1; // rax
  double v2; // xmm1_8
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( v1 )
  {
    v2 = (double)*(int *)(v1 + 4);
    if ( v2 > 384000.0 )
    {
      v4 = 7631LL;
    }
    else if ( v2 < 10.0 )
    {
      v4 = 7632LL;
    }
    else if ( *(_WORD *)(v1 + 2) > 0x1000u )
    {
      v4 = 7633LL;
    }
    else
    {
      if ( *(_WORD *)(v1 + 2) )
        return 0LL;
      v4 = 7634LL;
    }
  }
  else
  {
    v4 = 7628LL;
  }
  sub_18004BD84(
    retaddr,
    v4,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    2290679816LL);
  return 2290679816LL;
}
