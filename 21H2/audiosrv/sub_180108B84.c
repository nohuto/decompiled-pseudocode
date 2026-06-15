/*
 * XREFs of sub_180108B84 @ 0x180108B84
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 *     sub_180105F64 @ 0x180105F64 (sub_180105F64.c)
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010A534 @ 0x18010A534 (sub_18010A534.c)
 */

__int64 __fastcall sub_180108B84(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  sub_18010A130("Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool", 263LL);
  if ( !a2 )
  {
    sub_1800D8E60(
      (int)retaddr,
      265,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  if ( !a3 )
  {
    sub_1800D8E60(
      (int)retaddr,
      266,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  *a3 = 0LL;
  v6 = sub_180105F64(a1 + 152, a2, &v12);
  v7 = v6;
  if ( v6 )
  {
    v9 = sub_18010A534(v6, a2, v12);
    if ( v9 >= 0 )
    {
      *a3 = v7;
      return 0LL;
    }
    else
    {
      v11 = 1;
      (**(void (__fastcall ***)(__int64, __int64, int *))(a1 + 656))(a1 + 656, 2LL, &v11);
      if ( v12 )
        sub_180108408(a1 + 152, v12);
      sub_18004BD84(
        (int)retaddr,
        279,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      272,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      -2147024882);
    return 2147942414LL;
  }
}
