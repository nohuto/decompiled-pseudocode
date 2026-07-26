/*
 * XREFs of ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00187F0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002460 (NdisSendNetBufferLists.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002A00 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6AD4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(_DWORD *a1, struct _NET_BUFFER_LIST *a2, int a3, char a4)
{
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x51u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2);
  if ( byte_1C00E3FD8 && (a1[1465] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)a2, a3, 2, a1[135], -536866811);
  v7 = a1[135];
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x52u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2);
}
