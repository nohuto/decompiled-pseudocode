/*
 * XREFs of sub_180022FE0 @ 0x180022FE0
 * Callers:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 *     sub_180032518 @ 0x180032518 (sub_180032518.c)
 *     sub_180038644 @ 0x180038644 (sub_180038644.c)
 *     sub_18004073C @ 0x18004073C (sub_18004073C.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 *     sub_18006F18C @ 0x18006F18C (sub_18006F18C.c)
 *     sub_18006F780 @ 0x18006F780 (sub_18006F780.c)
 *     sub_18009DCE0 @ 0x18009DCE0 (sub_18009DCE0.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022FE0(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
