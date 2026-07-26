/*
 * XREFs of _lambda_9f85fcd2040f04b850747010404e3e47_::_lambda_invoker_cdecl_ @ 0x1C010B470
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0105498 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C20 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall lambda_9f85fcd2040f04b850747010404e3e47_::_lambda_invoker_cdecl_(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  v2 = *a2;
  v4 = *(_QWORD *)(*a2 + 40);
  if ( v4 && (*(_DWORD *)(v4 + 64) & 0x10000000) != 0 )
  {
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      (NDIS_BIND_DRIVER_BASE *)v2,
      (void (__fastcall *)(_LIST_ENTRY *))lambda_9edbb2f1ece71295dd9ace7767007f5b_::_lambda_invoker_cdecl_);
    v2 = *a2;
  }
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 48), 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v2);
  }
}
