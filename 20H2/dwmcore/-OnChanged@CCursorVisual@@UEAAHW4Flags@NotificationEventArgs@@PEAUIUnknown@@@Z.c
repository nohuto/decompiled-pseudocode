/*
 * XREFs of ?OnChanged@CCursorVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801BE0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x1801BE04C (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::OnChanged(__int64 a1)
{
  __int64 v2; // rcx
  struct CVisual *v3; // rax
  CCursorVisual *v4; // rcx

  v2 = *(_QWORD *)(a1 + 640);
  if ( v2 )
  {
    v3 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    if ( v3 )
      *(_DWORD *)(a1 + 628) = CCursorVisual::GetDesktopId(v4, v3);
  }
  return 1LL;
}
