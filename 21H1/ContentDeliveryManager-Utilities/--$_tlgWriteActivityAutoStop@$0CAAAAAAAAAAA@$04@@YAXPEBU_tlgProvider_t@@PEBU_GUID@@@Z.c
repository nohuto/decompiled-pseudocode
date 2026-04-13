/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800395FC
 * Callers:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180029598 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_180029598.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040C98 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflect.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

int __fastcall _tlgWriteActivityAutoStop<35184372088832,5>(__int64 a1, const GUID *a2)
{
  __int64 v2; // rax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*(_QWORD *)(a1 + 16) & 0x200000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24) & 0x200000000000LL;
    if ( v2 == *(_QWORD *)(a1 + 24) )
      LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(a1, (unsigned __int8 *)dword_180171013, a2, 0LL, 2u, &v4);
  }
  return v2;
}
