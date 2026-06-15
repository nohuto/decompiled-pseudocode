/*
 * XREFs of ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140062410
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x14006117C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x1400618BC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetCurrentPadding(
        CCrossProcessClientInputEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v5; // r8
  struct SharedMessageQueueItem *v6; // rcx
  double v7; // xmm0_8
  bool v8; // [rsp+50h] [rbp+8h] BYREF
  struct SharedMessageQueueItem *v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
         (CCrossProcessClientInputEndpoint *)((char *)this - 8),
         &v9,
         &v8) )
  {
    v6 = v9;
    v7 = *((float *)this + 37);
    *((_DWORD *)this + 115) = *((_DWORD *)v9 + 14);
    v5 = (unsigned int)(int)((double)*((int *)v6 + 14) * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *((_DWORD *)this + 115) = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxxx_EventWriteTransfer(
      **((unsigned int **)this + 8),
      *(unsigned int *)(*((_QWORD *)this + 8) + 4LL),
      (__int64)this - 8,
      3,
      **((_DWORD **)this + 8),
      *(_DWORD *)(*((_QWORD *)this + 8) + 4LL),
      v5,
      0);
}
