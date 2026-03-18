/*
 * XREFs of ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EF660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1801EF2BC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneNode::OnChanged(__int64 a1, int a2)
{
  if ( !*(_QWORD *)(a1 + 128) )
    return 0LL;
  if ( a2 == 2 )
    CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 72LL))(*(_QWORD *)(a1 + 112), 0LL, a1);
  return 1LL;
}
