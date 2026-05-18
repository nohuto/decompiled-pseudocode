/*
 * XREFs of unknown_libname_100 @ 0x180011544
 * Callers:
 *     sub_1800125E4 @ 0x1800125E4 (sub_1800125E4.c)
 *     sub_180012758 @ 0x180012758 (sub_180012758.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_18006AC30 @ 0x18006AC30 (sub_18006AC30.c)
 *     sub_18006B450 @ 0x18006B450 (sub_18006B450.c)
 *     sub_18006BBDC @ 0x18006BBDC (sub_18006BBDC.c)
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 *     sub_18007B8A0 @ 0x18007B8A0 (sub_18007B8A0.c)
 *     sub_18007C1F8 @ 0x18007C1F8 (sub_18007C1F8.c)
 *     sub_18007CB4C @ 0x18007CB4C (sub_18007CB4C.c)
 *     sub_18007CC5C @ 0x18007CC5C (sub_18007CC5C.c)
 *     sub_18007D064 @ 0x18007D064 (sub_18007D064.c)
 *     sub_18007D1A4 @ 0x18007D1A4 (sub_18007D1A4.c)
 *     sub_18007DF2C @ 0x18007DF2C (sub_18007DF2C.c)
 *     sub_1800A59A4 @ 0x1800A59A4 (sub_1800A59A4.c)
 *     sub_180105404 @ 0x180105404 (sub_180105404.c)
 *     sub_180105634 @ 0x180105634 (sub_180105634.c)
 *     sub_1801056D8 @ 0x1801056D8 (sub_1801056D8.c)
 *     sub_1801057E4 @ 0x1801057E4 (sub_1801057E4.c)
 *     sub_180105B30 @ 0x180105B30 (sub_180105B30.c)
 *     sub_180105D04 @ 0x180105D04 (sub_180105D04.c)
 *     sub_18010BB4C @ 0x18010BB4C (sub_18010BB4C.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 *     sub_180116B3C @ 0x180116B3C (sub_180116B3C.c)
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 *     sub_180117340 @ 0x180117340 (sub_180117340.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_100(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 8);
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
