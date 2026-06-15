/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140059CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140057FA0 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140058528 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140058ACC (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        int a2)
{
  CCrossProcessBaseEndpoint *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rax
  _BYTE v10[64]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (CCrossProcessClientInputEndpoint *)((char *)this - 448);
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 448, 15, a2, 0, 0);
  v5 = *((_QWORD *)this - 47);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags(v2, *(unsigned int *)(v5 + 164)) )
  {
    if ( !*((_DWORD *)this + 4) )
      LODWORD(v7) = _InterlockedExchangeAdd64(
                      (volatile signed __int64 *)(*((_QWORD *)this - 47) + 24LL),
                      (unsigned int)(a2 * *((_DWORD *)this - 90)));
  }
  else
  {
    if ( (byte_140085401 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v7, v6, (__int64)v2);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 164LL), 0xFFFFFFFE);
  }
  if ( a2 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage((volatile __int32 **)v2, (struct SharedMessageQueueItem *)v10);
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v6, (_DWORD)v2, 16, a2, 0, *((_DWORD *)this + 4));
  v8 = *((_QWORD *)this - 3);
  if ( v8 )
  {
    v9 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    SetEvent(v9);
  }
  *((_DWORD *)this + 4) = 3;
}
