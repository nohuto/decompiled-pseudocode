/*
 * XREFs of HalpPCIConfig @ 0x14022FCD0
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x14022FC60 (HaliPciInterfaceReadConfig.c)
 *     HaliPciInterfaceWriteConfig @ 0x14037CD60 (HaliPciInterfaceWriteConfig.c)
 *     HalpWritePCIConfig @ 0x14039E92C (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x14039EC44 (HalpReadPCIConfig.c)
 *     HalpPciHandleSecureAccess @ 0x1404D295C (HalpPciHandleSecureAccess.c)
 *     HaliHandlePCIConfigSpaceAccess @ 0x1404D6BC0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdWritePCIConfig @ 0x1404DF550 (HalpKdWritePCIConfig.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpPciAccessMmConfigSpace @ 0x14022FE20 (HalpPciAccessMmConfigSpace.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14022FFA4 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPciAccessIoConfigSpace @ 0x1403BC508 (HalpPciAccessIoConfigSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpPCIConfig(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int BugCheckParameter3,
        unsigned int Size,
        int a7)
{
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r15
  unsigned int v10; // r12d
  __int64 *v11; // r8
  char v12; // r9
  int v13; // edx
  __int64 result; // rax
  int v15; // edx
  unsigned __int8 v16; // bl
  unsigned int v17; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  char v23[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3;
  v9 = a2;
  v10 = (unsigned __int16)a1;
  v23[0] = 0;
  if ( HalpIommuSkipPciConfigDisabled )
    goto LABEL_3;
  v11 = (__int64 *)HalpIommuList;
  v12 = 0;
  if ( (__int64 *)HalpIommuList == &HalpIommuList )
    goto LABEL_3;
  do
  {
    a1 = (unsigned int *)v11;
    v11 = (__int64 *)*v11;
    result = a1[114];
    if ( (result & 8) != 0 && a1[116] == v10 && a1[117] == (_DWORD)v9 )
    {
      v17 = a1[118];
      result = (unsigned int)v8 ^ v17;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a1 + 472)) & 0x1F) == 0
        && (((unsigned __int8)v8 ^ (unsigned __int8)v17) & 0xE0) == 0 )
      {
        v12 = 1;
      }
    }
  }
  while ( v11 != &HalpIommuList );
  if ( !v12 )
  {
LABEL_3:
    if ( qword_140C4A288 )
    {
      LOBYTE(a1) = a7 == 1;
      result = qword_140C4A288(
                 a1,
                 v10,
                 (unsigned int)v9,
                 v8 & 0x1F,
                 (unsigned __int8)v8 >> 5,
                 BugCheckParameter3,
                 Size,
                 a4);
      if ( (int)result >= 0 )
        return result;
      if ( (_DWORD)result != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v8, BugCheckParameter3, (int)result);
    }
    HalpPCIAcquireConfigSpaceLock(v23);
    LOBYTE(v13) = v9;
    result = HalpPciAccessMmConfigSpace((unsigned __int16)v10, v13, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
    if ( !(_BYTE)result )
    {
      LOBYTE(v15) = v9;
      result = HalpPciAccessIoConfigSpace((unsigned __int16)v10, v15, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
      if ( !(_BYTE)result && !a7 )
        result = (__int64)memset(a4, 255, Size);
    }
    if ( !HalpDoingCrashDump )
    {
      KxReleaseSpinLock(&HalpPCIConfigLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v16 = v23[0];
        if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = v23[0];
          v21 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v16 = v23[0];
      }
      result = v16;
      __writecr8(v16);
    }
  }
  else if ( !a7 )
  {
    return (__int64)memset(a4, 255, Size);
  }
  return result;
}
