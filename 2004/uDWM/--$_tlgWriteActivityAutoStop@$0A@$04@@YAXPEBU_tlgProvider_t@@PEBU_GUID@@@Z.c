/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800943A8
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180030300 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800057B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<0,5>(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 5u )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)a1, byte_1800D1026, a2, 0LL, 2, (__int64)v3);
  return result;
}
