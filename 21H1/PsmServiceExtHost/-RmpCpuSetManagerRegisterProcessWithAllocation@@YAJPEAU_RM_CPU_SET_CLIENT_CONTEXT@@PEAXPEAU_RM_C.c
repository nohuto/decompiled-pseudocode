/*
 * XREFs of ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006D300
 * Callers:
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x1800688D8 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F640 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18006BD10 (-RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18006BD88 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006C090 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18006C1E0 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x18006C334 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18006C788 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006D660 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmpCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        PVOID *a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // rsi
  struct _RM_CPU_SET_PROCESS *v9; // rbx
  struct _RM_CPU_SET_PROCESS *Process; // rax
  struct _RM_CPU_SET_PROCESS *v11; // rbp
  struct _RM_CPU_SET_PROCESS *Heap; // rax
  NTSTATUS ObjectsForProcess; // edi
  PVOID v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *i; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  P = 0LL;
  v9 = 0LL;
  Process = RmpCpuSetManagerFindProcess(v4, a2);
  v11 = Process;
  if ( Process )
  {
    v15 = (_QWORD *)((char *)Process + 24);
    for ( i = (_QWORD *)*((_QWORD *)Process + 3); i != v15; i = (_QWORD *)*i )
    {
      if ( (struct _RM_CPU_SET_ALLOCATION *)*(i - 3) == a3 )
        return (unsigned int)-1073740008;
    }
    goto LABEL_6;
  }
  Heap = (struct _RM_CPU_SET_PROCESS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v11 = Heap;
  memset_0(Heap, 0, 0x40uLL);
  *((_QWORD *)v9 + 4) = (char *)v9 + 24;
  *((_QWORD *)v9 + 3) = (char *)v9 + 24;
  ObjectsForProcess = RmpCpuSetManagerAllocateObjectsForProcess(a2, (void **)v9);
  if ( ObjectsForProcess >= 0 )
  {
    RmpCpuSetManagerInsertProcess(v4, v9);
LABEL_6:
    ObjectsForProcess = RmpCpuSetManagerCreateProcessRegistration(
                          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
                          v11,
                          a3,
                          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
    if ( ObjectsForProcess < 0 )
    {
      v14 = P;
    }
    else
    {
      v9 = 0LL;
      RmpCpuSetManagerApplyProcessPolicy(v4, v11);
      v14 = 0LL;
      *a4 = P;
    }
    if ( v14 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(v4, v14, 1u);
  }
  if ( v9 )
    RmpCpuSetManagerDestroyProcess(v4, v9);
  return (unsigned int)ObjectsForProcess;
}
