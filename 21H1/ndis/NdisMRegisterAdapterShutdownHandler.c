/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C0060FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039C20 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Fu,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 258) )
  {
    *((_QWORD *)MiniportHandle + 258) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 257) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x30u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      MiniportHandle);
}
