/*
 * XREFs of PopEndMirroring @ 0x1409930F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwKernelMemoryRundown @ 0x140932458 (EtwKernelMemoryRundown.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopBuildMemoryImageHeader @ 0x1409934F4 (PopBuildMemoryImageHeader.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  unsigned __int8 CurrentIrql; // cl
  int v4; // edi
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *SchedulerAssist; // r9
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 *v13[2]; // [rsp+48h] [rbp-19h] BYREF
  __int16 v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+5Ah] [rbp-7h]
  __int16 v16; // [rsp+5Eh] [rbp-3h]
  struct _KDPC Dpc; // [rsp+68h] [rbp+7h] BYREF
  int v18; // [rsp+C8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  v15 = 0;
  v16 = 0;
  Affinity = 0LL;
  memset(&Dpc, 0, sizeof(Dpc));
  v18 = 0;
  if ( !(_DWORD)v1 )
  {
    if ( (BYTE4(xmmword_140CFC490) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)qword_140C22E80);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      Affinity.Reserved[2] = 0;
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      memset(&PopHibernateSystemContext, 0, 0x50uLL);
      dword_140C50490 = KeNumberProcessors_0;
      HIDWORD(qword_140C50498) = KeNumberProcessors_0;
      LODWORD(qword_140C50498) = 1;
      if ( ((unsigned __int8)&stru_140C504A0 & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      stru_140C504A0 = 0LL;
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v13[1] = (unsigned __int16 *)qword_140CFC848[0];
      v13[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v14 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v13) )
      {
        if ( v18 )
        {
          v4 = dword_140C50494;
          if ( !Dpc.DpcData )
            Dpc.Number = v18 + 1280;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v4 == dword_140C50494 )
            ;
        }
      }
      goto LABEL_20;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)v1 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_24;
  }
  v2 = *(_DWORD *)(qword_140C22E80 + 188);
  if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler(PopHibernatePowerStateHandlerType, qword_140C22E80), v2 < 0) )
  {
LABEL_24:
    IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1C8);
    if ( *(_QWORD *)&qword_140C22E78 )
      IoAddTriageDumpDataBlock(qword_140C22E78, (PVOID)0x1D8);
    if ( qword_140C22E80 )
    {
      IoAddTriageDumpDataBlock(qword_140C22E80, (PVOID)0x1C8);
      v9 = *(_QWORD *)(qword_140C22E80 + 168);
      if ( v9 )
        IoAddTriageDumpDataBlock(v9, (PVOID)0x178);
      v10 = *(_QWORD *)(qword_140C22E80 + 200);
      if ( v10 )
        IoAddTriageDumpDataBlock(v10, (PVOID)0x3E0);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_20:
  v5 = v2;
  v6 = v2 == 1073742484;
  v7 = 0;
  if ( v6 )
    return v5;
  return v7;
}
