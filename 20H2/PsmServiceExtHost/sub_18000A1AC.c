/*
 * XREFs of sub_18000A1AC @ 0x18000A1AC
 * Callers:
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_18000AF20 @ 0x18000AF20 (sub_18000AF20.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180022AFC @ 0x180022AFC (sub_180022AFC.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_180028C4C @ 0x180028C4C (sub_180028C4C.c)
 *     sub_180028ECC @ 0x180028ECC (sub_180028ECC.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     sub_180035A10 @ 0x180035A10 (sub_180035A10.c)
 *     sub_180035CA4 @ 0x180035CA4 (sub_180035CA4.c)
 *     sub_180035D5C @ 0x180035D5C (sub_180035D5C.c)
 *     sub_180035E14 @ 0x180035E14 (sub_180035E14.c)
 *     sub_180037BEC @ 0x180037BEC (sub_180037BEC.c)
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 *     sub_18007A4CC @ 0x18007A4CC (sub_18007A4CC.c)
 *     sub_18007B0F8 @ 0x18007B0F8 (sub_18007B0F8.c)
 *     sub_18007B7A0 @ 0x18007B7A0 (sub_18007B7A0.c)
 *     sub_18007B958 @ 0x18007B958 (sub_18007B958.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 *     sub_18008299C @ 0x18008299C (sub_18008299C.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18000A1AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1 + 64;
  sub_18000B084(a1, a2, 1LL);
  RtlAcquireSRWLockExclusive(v2);
  *(_DWORD *)(v2 + 8) = GetCurrentThreadId();
  if ( (unsigned int)sub_180018A60(a1) )
    sub_18001CC80(v2, 1LL);
  sub_18001E830(v5, v4, 1LL);
  *(_DWORD *)(v2 + 8) = 0;
  return RtlReleaseSRWLockExclusive(v2);
}
