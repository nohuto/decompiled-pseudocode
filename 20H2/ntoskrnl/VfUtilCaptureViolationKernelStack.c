/*
 * XREFs of VfUtilCaptureViolationKernelStack @ 0x1409C9400
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeGetCurrentStackPointer @ 0x1403FC380 (KeGetCurrentStackPointer.c)
 *     RtlCaptureContext @ 0x1404053E0 (RtlCaptureContext.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall VfUtilCaptureViolationKernelStack(PCONTEXT ContextRecord, _QWORD *a2)
{
  char v5; // bp
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v8; // ecx
  signed __int64 v9; // rdi
  size_t v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  v18 = 0LL;
  v16 = 0;
  if ( !ContextRecord )
    return 0;
  v5 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  RtlCaptureContext(ContextRecord);
  if ( !KeQueryCurrentStackInformation((char *)&v16, (struct _KPRCB **)&Src, &v18)
    || v16 <= 9 && (v8 = 929, _bittest(&v8, v16)) )
  {
    v5 = 0;
  }
  else
  {
    v9 = KeGetCurrentStackPointer() - (_BYTE *)Src;
    memset(&VfRuleViolationStackSavedArea, 0, 0x6000uLL);
    v10 = v18 - (_QWORD)Src;
    if ( v18 - (unsigned __int64)Src > 0x6000 )
      v10 = 24576LL;
    memmove(&VfRuleViolationStackSavedArea, Src, v10);
    *a2 = &VfRuleViolationStackSavedArea;
    ContextRecord->Rsp = (unsigned __int64)&VfRuleViolationStackSavedArea + v9;
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
  __writecr8(CurrentIrql);
  return v5;
}
