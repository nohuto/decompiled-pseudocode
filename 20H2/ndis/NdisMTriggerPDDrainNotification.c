/*
 * XREFs of NdisMTriggerPDDrainNotification @ 0x1C007E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C007E020 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qS @ 0x1C007E7B8 (WPP_RECORDER_SF_qS.c)
 */

void __fastcall NdisMTriggerPDDrainNotification(__int64 a1, char a2, int a3, int a4)
{
  ULONG_PTR v4; // rbx

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qS(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)L" ", a3, a4);
  if ( a2 )
  {
    if ( *(_BYTE *)(v4 + 62) )
      ndisBugCheckEx(0x23uLL, 4uLL, v4, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 48LL));
    *(_BYTE *)(v4 + 62) = 1;
    KeInsertQueueDpc((PRKDPC)(v4 + 88), 0LL, 0LL);
  }
  else
  {
    ndisTriggerPDDrainNotification(v4);
  }
}
