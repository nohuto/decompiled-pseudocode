/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1402F0B30
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     ObGetAssociatedWaitObject @ 0x1402F1004 (ObGetAssociatedWaitObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _BYTE *a8)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  PVOID v13; // rsi
  _BYTE *AssociatedWaitObject; // rax
  _BYTE *v15; // rdi
  _BYTE *v16; // rsi
  KSPIN_LOCK *v17; // r12
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v19; // r8
  PVOID v20; // rdx
  char v21; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  PVOID v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v35; // [rsp+40h] [rbp-38h] BYREF
  PVOID v36; // [rsp+48h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v36 = 0LL;
    v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v36, 0LL);
    if ( v12 >= 0 )
    {
      v35 = 0LL;
      v12 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v35, 0LL);
      if ( v12 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        v24 = v36;
LABEL_38:
        ObfDereferenceObjectWithTag(v24, 0x746C6644u);
        return v12;
      }
      v13 = v35;
      AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v35);
      v15 = AssociatedWaitObject;
      if ( AssociatedWaitObject && (((*AssociatedWaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v16 = Object;
        v17 = (KSPIN_LOCK *)((char *)Object + 96);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          v16 = Object;
        }
        KxAcquireSpinLock(v17);
        if ( !v16[104] )
        {
          v16[104] = 1;
          v19 = Object;
          *((_QWORD *)Object + 6) = a4;
          v19[7] = a5;
          *((_DWORD *)v19 + 18) = a6;
          v19[8] = a7;
          v19[10] = v35;
          v20 = v36;
          v19[11] = v36;
          v21 = KeRegisterObjectNotification(v15, v20, v19);
          KxReleaseSpinLock(v17);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v32 = CurrentPrcb->SchedulerAssist;
                v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v29 = (v33 & v32[5]) == 0;
                v32[5] &= v33;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( a8 )
          {
            if ( PreviousMode )
            {
              v23 = (__int64)a8;
              if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
                v23 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v23 = *(_BYTE *)v23;
            }
            *a8 = v21;
          }
          return v12;
        }
        KxReleaseSpinLock(v17);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v25 = KeGetCurrentIrql();
            if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
            {
              v26 = KeGetCurrentPrcb();
              v27 = v26->SchedulerAssist;
              v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v29 = (v28 & v27[5]) == 0;
              v27[5] &= v28;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(v26);
            }
          }
        }
        __writecr8(CurrentIrql);
        v12 = -1073741585;
        v13 = v35;
      }
      else
      {
        v12 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v36, 0x746C6644u);
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    }
    v24 = Object;
    goto LABEL_38;
  }
  return result;
}
