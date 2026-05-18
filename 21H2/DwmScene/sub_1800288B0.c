/*
 * XREFs of sub_1800288B0 @ 0x1800288B0
 * Callers:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_180037DE8 @ 0x180037DE8 (sub_180037DE8.c)
 *     sub_18003DF14 @ 0x18003DF14 (sub_18003DF14.c)
 *     sub_18004600C @ 0x18004600C (sub_18004600C.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     sub_180074A5C @ 0x180074A5C (sub_180074A5C.c)
 *     sub_180075050 @ 0x180075050 (sub_180075050.c)
 *     sub_1800A35B0 @ 0x1800A35B0 (sub_1800A35B0.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800288B0(__int64 a1, char a2)
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
