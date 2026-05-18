/*
 * XREFs of sub_1800110E8 @ 0x1800110E8
 * Callers:
 *     sub_180011274 @ 0x180011274 (sub_180011274.c)
 *     sub_180013FD8 @ 0x180013FD8 (sub_180013FD8.c)
 *     sub_18001407C @ 0x18001407C (sub_18001407C.c)
 *     sub_1800182D0 @ 0x1800182D0 (sub_1800182D0.c)
 *     sub_180018330 @ 0x180018330 (sub_180018330.c)
 *     sub_180070C1C @ 0x180070C1C (sub_180070C1C.c)
 *     sub_180070C94 @ 0x180070C94 (sub_180070C94.c)
 *     sub_180070DD0 @ 0x180070DD0 (sub_180070DD0.c)
 *     sub_180070E48 @ 0x180070E48 (sub_180070E48.c)
 *     sub_180070EC0 @ 0x180070EC0 (sub_180070EC0.c)
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 *     sub_180071074 @ 0x180071074 (sub_180071074.c)
 *     sub_1800710EC @ 0x1800710EC (sub_1800710EC.c)
 *     sub_18008559C @ 0x18008559C (sub_18008559C.c)
 *     sub_18008A314 @ 0x18008A314 (sub_18008A314.c)
 *     sub_18009426C @ 0x18009426C (sub_18009426C.c)
 *     sub_1800983B0 @ 0x1800983B0 (sub_1800983B0.c)
 *     sub_1800A2EB8 @ 0x1800A2EB8 (sub_1800A2EB8.c)
 *     sub_1800A7238 @ 0x1800A7238 (sub_1800A7238.c)
 *     sub_1800B2C3C @ 0x1800B2C3C (sub_1800B2C3C.c)
 *     sub_1800B78C8 @ 0x1800B78C8 (sub_1800B78C8.c)
 *     sub_1800B796C @ 0x1800B796C (sub_1800B796C.c)
 *     sub_1800B7B38 @ 0x1800B7B38 (sub_1800B7B38.c)
 *     sub_1800B7BC4 @ 0x1800B7BC4 (sub_1800B7BC4.c)
 *     sub_1800D5CD4 @ 0x1800D5CD4 (sub_1800D5CD4.c)
 *     sub_1800F6DB8 @ 0x1800F6DB8 (sub_1800F6DB8.c)
 *     sub_1800F93D8 @ 0x1800F93D8 (sub_1800F93D8.c)
 *     sub_1800FBAB8 @ 0x1800FBAB8 (sub_1800FBAB8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800110E8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      v5 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)(a2 + 16) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
