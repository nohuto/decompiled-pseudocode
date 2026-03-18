/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180233690
 * Callers:
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1802322E8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180232480 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  struct CInteraction *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  struct CInteraction **v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
  {
    v5 = a1;
    v7 = &v5;
    v9 = 0;
    v8 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180342EF0,
      (unsigned __int8 *)dword_1802EB04D,
      0LL,
      0LL,
      3u,
      &v6);
  }
  (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a1 + 48LL))(a1);
  v2 = *((_QWORD *)a1 + 26);
  if ( v2 )
  {
    if ( *(struct CInteraction **)(v2 + 232) == a1 )
      *(_QWORD *)(v2 + 232) = *((_QWORD *)a1 + 27);
    *((_QWORD *)a1 + 26) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 28);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 216) = *((_QWORD *)a1 + 27);
    *((_QWORD *)a1 + 28) = 0LL;
    v3 = 0LL;
  }
  v4 = *((_QWORD *)a1 + 27);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 224) = v3;
    *((_QWORD *)a1 + 27) = 0LL;
  }
  *((_QWORD *)a1 + 25) = 0LL;
}
