/*
 * XREFs of sub_18001610C @ 0x18001610C
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001A940 @ 0x18001A940 (sub_18001A940.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001610C(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    v8 = 0LL;
    v2 = CreateGameConfigStoreClient(&v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      sub_180003268(retaddr, 19, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v2);
      return v3;
    }
    v6 = 0LL;
    sub_18001A940(&v6, v8, 0LL);
    v5 = *(volatile signed __int32 **)(a1 + 8);
    *(_OWORD *)a1 = v6;
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return 0LL;
}
