/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x1C00D3D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C00222B4 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(_QWORD *a1, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 388];
  if ( *(_DWORD *)(v4 + 33288) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[370];
    if ( v5 )
      v5(a1[378]);
  }
  v6 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 2672LL), a2);
  if ( *(_DWORD *)(v4 + 33288) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[372];
    if ( v7 )
      v7(a1[378]);
  }
  return v6;
}
