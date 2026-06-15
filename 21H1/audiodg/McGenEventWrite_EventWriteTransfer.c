/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x140046A04
 * Callers:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140046A68 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0jjt_EventWriteTransfer @ 0x140048E50 (McTemplateU0jjt_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140058ACC (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x140058B30 (McTemplateU0pqp_EventWriteTransfer.c)
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x140058BB8 (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140058C70 (McTemplateU0pqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140058CFC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140058DB8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x140059DF4 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14005B010 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x14005B0B8 (McTemplateU0pxxq_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14005BE90 (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14005BF2C (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x14005BFD8 (McTemplateU0pqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14005C074 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x14005C12C (McTemplateU0pxqxq_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_140084058;
  v6 = 0;
  if ( qword_140084058 )
  {
    UserData->Ptr = qword_140084058;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
