/*
 * XREFs of HalpCmciInitProcessor @ 0x14099AD20
 * Callers:
 *     HalpMcaResumeProcessorConfig @ 0x140996A40 (HalpMcaResumeProcessorConfig.c)
 *     HalpInitializeCmc @ 0x1409A20E8 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     HalpCmciPollProcessor @ 0x1403A0BFC (HalpCmciPollProcessor.c)
 *     HalpGetMcaPcrContext @ 0x1403A0D18 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfig @ 0x1403A0D48 (HalpCmciSetProcessorConfig.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIsCmciImplementedAMD @ 0x1409A7EBC (HalpIsCmciImplementedAMD.c)
 */

BOOLEAN __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2)
{
  char CpuInfo; // al
  unsigned __int8 CurrentIrql; // bp
  char v6; // si
  __int64 McaPcrContext; // rax
  __int64 v8; // rdi
  BOOLEAN result; // al
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v16);
  v16 &= -(CpuInfo != 0);
  if ( v16 == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
    HalpMcaPollForCmc = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v6 = 1;
  if ( HalpCmciRevertToPolledMode )
    goto LABEL_24;
  if ( *(_BYTE *)(a1 + 48) != 5 )
  {
    HalpMcaPollForCmc = 1;
LABEL_24:
    v6 = 0;
  }
  HalpCmciSetProcessorConfig(a1, v6, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v8 = McaPcrContext;
  if ( McaPcrContext && v6 )
  {
    *(_DWORD *)(McaPcrContext + 112) = 0;
    *(_BYTE *)(McaPcrContext + 120) = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v8 && *(_QWORD *)(v8 + 16) )
        {
          if ( *(_QWORD *)(v8 + 24) )
            return KeInsertQueueDpc((PRKDPC)(v8 + 40), 0LL, 0LL);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2);
      }
    }
  }
  return result;
}
