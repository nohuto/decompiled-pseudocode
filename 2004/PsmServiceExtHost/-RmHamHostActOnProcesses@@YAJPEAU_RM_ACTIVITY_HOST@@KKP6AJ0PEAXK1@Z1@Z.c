/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A1F0
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800177A0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18002333C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180029DA8 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18002A0B0 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006AE28 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18006B8A0 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180070AA0 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007CF6C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned int a2,
        char a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        void *a5)
{
  unsigned int v6; // esi
  int (*v7)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r13
  unsigned int *v8; // r12
  unsigned int *Heap; // rdi
  char *v10; // rdx
  char *v11; // r10
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r13d
  PVOID v15; // rax
  HANDLE *v16; // rsi
  PVOID v17; // rax
  _DWORD *v18; // r15
  __int64 v19; // rdi
  unsigned int *v20; // rcx
  void *v21; // rax
  NTSTATUS v22; // eax
  int v23; // r12d
  HANDLE *v24; // r14
  PVOID ProcessHeap; // rcx
  unsigned int *v27; // rax
  PVOID P[2]; // [rsp+40h] [rbp-61h]
  unsigned int v29; // [rsp+50h] [rbp-51h]
  unsigned int v30; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-45h]
  void *ProcessHandle; // [rsp+60h] [rbp-41h] BYREF
  int v33; // [rsp+68h] [rbp-39h]
  unsigned int *v34; // [rsp+70h] [rbp-31h]
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-19h] BYREF
  int DesiredAccessa; // [rsp+108h] [rbp+67h]

  v30 = 1;
  v6 = a2;
  v29 = 0;
  v7 = a4;
  v8 = 0LL;
  *(_OWORD *)P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v19 = 0LL;
    v13 = -1073741801;
    v18 = 0LL;
    v16 = 0LL;
    goto LABEL_20;
  }
  v10 = (char *)a1 + 88;
  v11 = (char *)a1 + 552;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
            v11,
            *((unsigned int *)a1 + 155),
            v10,
            *((unsigned int *)a1 + 156),
            *((_QWORD *)a1 + 4),
            Heap,
            &v30);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v30;
      v8 = Heap;
      goto LABEL_5;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v12 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v27 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
    v10 = (char *)a1 + 88;
    Heap = v27;
    v11 = (char *)a1 + 552;
    if ( !v27 )
    {
      v14 = a2;
      v13 = -1073741801;
      goto LABEL_5;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v14 = a2;
LABEL_5:
  if ( v13 < 0 )
  {
    v16 = 0LL;
    goto LABEL_48;
  }
  if ( !v14 )
  {
    v18 = 0LL;
    goto LABEL_10;
  }
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v14);
  P[0] = v15;
  v16 = (HANDLE *)v15;
  if ( !v15 )
  {
    v13 = -1073741801;
LABEL_48:
    v18 = 0LL;
    goto LABEL_49;
  }
  memset_0(v15, 0, 8 * v14);
  v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v14);
  P[1] = v17;
  v18 = v17;
  if ( v17 )
  {
    memset_0(v17, 0, 4 * v14);
    v6 = a2;
LABEL_10:
    v19 = 0LL;
    DesiredAccessa = v6 | 0x1000;
    v16 = (HANDLE *)P[0];
    ProcessHandle = 0LL;
    v31 = 0;
    if ( v14 )
    {
      v20 = v8;
      v34 = v8;
      do
      {
        v21 = (void *)*v20;
        ClientId.UniqueThread = 0LL;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        v33 = (int)v21;
        ClientId.UniqueProcess = v21;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Length = 48;
        v22 = NtOpenProcess(&ProcessHandle, DesiredAccessa, &ObjectAttributes, &ClientId);
        v13 = v22;
        if ( v22 < 0 )
        {
          if ( (a3 & 1) == 0 && v22 != -1073741813 )
            goto LABEL_17;
        }
        else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                    (char *)a1 + 552,
                    *((unsigned int *)a1 + 155),
                    (char *)a1 + 88,
                    *((unsigned int *)a1 + 156),
                    *((_QWORD *)a1 + 4),
                    ProcessHandle) )
        {
          *((_QWORD *)P[0] + v19) = ProcessHandle;
          v18[v19] = v33;
          v19 = (unsigned int)(v19 + 1);
          v29 = v19;
        }
        else
        {
          NtClose(ProcessHandle);
        }
        v20 = v34 + 2;
        ++v31;
        v34 += 2;
      }
      while ( v31 < v14 );
    }
    v13 = 0;
    goto LABEL_17;
  }
  v16 = (HANDLE *)P[0];
  v13 = -1073741801;
LABEL_49:
  v19 = 0LL;
LABEL_17:
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v19 = v29;
    v18 = P[1];
    v16 = (HANDLE *)P[0];
  }
  v7 = a4;
LABEL_20:
  if ( v13 >= 0 )
  {
    v23 = 0;
    if ( (_DWORD)v19 )
    {
      while ( 1 )
      {
        v13 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, HANDLE, _QWORD, void *))v7)(
                a1,
                v16[v23],
                (unsigned int)v18[v23],
                a5);
        if ( v13 < 0 && (a3 & 1) == 0 )
          break;
        if ( ++v23 >= (unsigned int)v19 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v13 = 0;
    }
  }
  if ( (_DWORD)v19 )
  {
    v24 = v16;
    do
    {
      NtClose(*v24++);
      --v19;
    }
    while ( v19 );
  }
  if ( v16 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    v18 = P[1];
  }
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  return (unsigned int)v13;
}
