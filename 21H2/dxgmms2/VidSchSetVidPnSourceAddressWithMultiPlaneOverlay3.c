/*
 * XREFs of VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1C00F54F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C002CB8C (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC (VidSchiEnsureHwFlipQueueLog.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  int v3; // esi
  __int64 v5; // r14
  void (__fastcall *v6)(_QWORD); // rax
  __int64 i; // rbp
  void (__fastcall *v8)(_QWORD); // rax

  v3 = 0;
  v5 = *((_QWORD *)a1 + a2->VidPnSourceId + 400);
  if ( *(_DWORD *)(v5 + 44232) != -1 )
  {
    v6 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 382);
    if ( v6 )
      v6(*((_QWORD *)a1 + 390));
  }
  if ( !*((_BYTE *)a1 + 59) )
    goto LABEL_11;
  for ( i = 0LL; (unsigned int)i < a2->PlaneCount; i = (unsigned int)(i + 1) )
  {
    v3 = VidSchiEnsureHwFlipQueueLog(a1, a2->VidPnSourceId, a2->ppPlanes[i]->LayerIndex);
    if ( v3 < 0 )
      break;
  }
  if ( !*(_QWORD *)&a2[1].VidPnSourceId )
    *(LARGE_INTEGER *)&a2[1].VidPnSourceId = KeQueryPerformanceCounter(0LL);
  if ( v3 >= 0 )
LABEL_11:
    v3 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
           *(ADAPTER_DISPLAY **)(*((_QWORD *)a1 + 2) + 2792LL),
           a2);
  if ( *(_DWORD *)(v5 + 44232) != -1 )
  {
    v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 384);
    if ( v8 )
      v8(*((_QWORD *)a1 + 390));
  }
  return (unsigned int)v3;
}
