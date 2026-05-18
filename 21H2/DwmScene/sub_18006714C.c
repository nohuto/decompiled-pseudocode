/*
 * XREFs of sub_18006714C @ 0x18006714C
 * Callers:
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002B4D0 @ 0x18002B4D0 (sub_18002B4D0.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     sub_1800670D8 @ 0x1800670D8 (sub_1800670D8.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_180070950 @ 0x180070950 (sub_180070950.c)
 *     sub_180070AE0 @ 0x180070AE0 (sub_180070AE0.c)
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_18008C604 @ 0x18008C604 (sub_18008C604.c)
 *     sub_18008CBC4 @ 0x18008CBC4 (sub_18008CBC4.c)
 *     sub_18008D718 @ 0x18008D718 (sub_18008D718.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 *     sub_18008EA94 @ 0x18008EA94 (sub_18008EA94.c)
 *     sub_18008F040 @ 0x18008F040 (sub_18008F040.c)
 *     sub_180091EE0 @ 0x180091EE0 (sub_180091EE0.c)
 *     sub_18009A450 @ 0x18009A450 (sub_18009A450.c)
 *     sub_1800A9518 @ 0x1800A9518 (sub_1800A9518.c)
 *     sub_1800A9CEC @ 0x1800A9CEC (sub_1800A9CEC.c)
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18006714C(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned __int8)sub_1800672C0(a1, a2) )
    {
      sub_18000FE28(v4);
      v2 = sub_18000FE28(v3);
      sub_180066C28(pExceptionObject, v2, 279, (__int64)v4, 0);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
