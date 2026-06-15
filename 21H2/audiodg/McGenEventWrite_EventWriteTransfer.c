/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x140051214
 * Callers:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140051278 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0jjt_EventWriteTransfer @ 0x140053660 (McTemplateU0jjt_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14006168C (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x1400616F0 (McTemplateU0pqp_EventWriteTransfer.c)
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x140061778 (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140061830 (McTemplateU0pqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x1400618BC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061978 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1400629F4 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x140063C44 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140063CEC (McTemplateU0pxxq_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x140064AEC (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x140064B88 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x140064C34 (McTemplateU0pqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x140064CD0 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140064D88 (McTemplateU0pxqxq_EventWriteTransfer.c)
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

  v5 = (unsigned __int16 *)qword_14008F058;
  v6 = 0;
  if ( qword_14008F058 )
  {
    UserData->Ptr = qword_14008F058;
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
