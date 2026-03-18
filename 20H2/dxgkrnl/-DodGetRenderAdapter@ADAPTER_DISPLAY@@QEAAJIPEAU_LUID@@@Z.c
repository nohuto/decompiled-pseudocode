/*
 * XREFs of ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0210FC8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetRenderAdapter(ADAPTER_DISPLAY *this, __int64 a2, struct _LUID *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _LUID *))(*((_QWORD *)this + 2) + 1968LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 1888LL),
         a2,
         a3);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
