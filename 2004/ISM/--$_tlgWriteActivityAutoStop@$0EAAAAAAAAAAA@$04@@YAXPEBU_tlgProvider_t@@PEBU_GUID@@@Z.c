/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180155B30
 * Callers:
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180157198 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

void __fastcall _tlgWriteActivityAutoStop<70368744177664,5>(_DWORD *a1)
{
  const GUID *v1; // r8
  __int64 v2; // r10
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 5u && tlgKeywordOn((__int64)a1, 0x400000000000LL) )
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1801D0985, v1, 0LL, 2u, &v3);
}
