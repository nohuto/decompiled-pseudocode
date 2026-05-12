/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C000EA30
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0003950 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004FF0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C0010920 (StorTickEventQueue.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002D590 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0032DD0 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A240 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E52C (_tlgKeywordOn.c)
 *     RaidLogMiniportCompletion @ 0x1C000EBF0 (RaidLogMiniportCompletion.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A58C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001A634 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  struct _KDPC *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  char v17; // [rsp+30h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-94h] BYREF
  int v19; // [rsp+3Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  int *v23; // [rsp+70h] [rbp-58h]
  __int64 v24; // [rsp+78h] [rbp-50h]
  _BYTE v25[16]; // [rsp+80h] [rbp-48h] BYREF
  char *v26; // [rsp+90h] [rbp-38h]
  __int64 v27; // [rsp+98h] [rbp-30h]
  _BYTE v28[16]; // [rsp+A0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 568) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5216));
  if ( a3 )
    goto LABEL_6;
  if ( (((unsigned __int64)qword_1C0069310 >> 3) & 1) != 0 )
    RaidLogMiniportCompletion(a2);
  if ( (*(_BYTE *)(a1 + 548) & 0x10) == 0
    || (LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v7 != 1) )
  {
LABEL_6:
    v5 = *(_QWORD *)(a2 + 160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 141);
      v8 = v6 == -85;
      LOBYTE(v7) = v6 + 85;
      if ( v8 || (_BYTE)v7 == 1 )
      {
        if ( (unsigned int)dword_1C0069058 > 5 )
        {
          LOBYTE(v7) = tlgKeywordOn(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4864);
            v21 = a1 + 5192;
            v19 = *(_DWORD *)(a1 + 56);
            v23 = &v19;
            v22 = 16LL;
            v24 = 4LL;
            tlgCreate1Sz_wchar_t(v25, v12);
            v13 = *(_QWORD *)(a1 + 4872);
            v17 = *(_BYTE *)(a1 + 4420);
            v26 = &v17;
            v27 = 1LL;
            tlgCreate1Sz_wchar_t(v28, v13);
            LOBYTE(v7) = tlgWriteTransfer_EtwWriteTransfer((int)&v20, (int)&dword_1C005D76D, v14, v15, 7u, &v20);
          }
        }
        return (char)v7;
      }
      *(_BYTE *)(v5 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
    ProcNumber = v9;
    if ( v9.Group == 0xFFFF )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1 + 4515) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v9.Group = ProcNumber.Group;
    }
    if ( v9.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v9.Group) )
    {
LABEL_19:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 240), (PSLIST_ENTRY)(a2 + 32));
      v10 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v11 = 0LL;
      goto LABEL_18;
    }
    v7 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v7 )
    {
      LOBYTE(v7) = ProcNumber.Number;
      v10 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                           + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      if ( LODWORD(v10[1].ProcessorHistory) != 2 )
      {
        v11 = *(void **)(a1 + 8);
LABEL_18:
        LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
      }
    }
  }
  return (char)v7;
}
