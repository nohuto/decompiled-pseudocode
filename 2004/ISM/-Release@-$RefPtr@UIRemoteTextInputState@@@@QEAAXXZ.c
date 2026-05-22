/*
 * XREFs of ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x18007F610
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18008BFE8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x18008D5F0 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z.c)
 *     ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801A2494 (--1TextInputStateAdapter@@EEAA@XZ.c)
 *     ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x1801A2570 (-Dispose@TextInputStateAdapter@@UEAAJXZ.c)
 *     ?OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A2BA0 (-OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefPtr<IRemoteTextInputState>::Release(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
