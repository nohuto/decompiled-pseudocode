/*
 * XREFs of MiCloneProcessAddressSpace @ 0x1408D4710
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiIsStoreProcess @ 0x14034D700 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140553FD0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405542BC (MiCreateForkWsles.c)
 *     MiInsertClone @ 0x140555784 (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D45B4 (MiBuildNewCloneDescriptor.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x1408D4D98 (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x1408D5010 (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r15
  int v6; // r12d
  int v7; // r13d
  _QWORD *v8; // r14
  _KPROCESS *Process; // rdi
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // r15d
  int v16; // edi
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v28; // [rsp+40h] [rbp-39h]
  __int64 v29; // [rsp+48h] [rbp-31h] BYREF
  __int64 v30; // [rsp+50h] [rbp-29h]
  unsigned __int64 v31; // [rsp+58h] [rbp-21h]
  _KPROCESS *v32; // [rsp+60h] [rbp-19h]
  _OWORD v33[3]; // [rsp+68h] [rbp-11h] BYREF

  v28 = a3;
  v29 = 0LL;
  memset(v33, 0, sizeof(v33));
  v3 = a3;
  v6 = 0;
  v7 = 1;
  P = 0LL;
  v8 = 0LL;
  v26 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v32 = Process;
  if ( (unsigned int)MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1, v10, v11);
  if ( Process != BugCheckParameter1 )
  {
    v6 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v33, v14);
  }
  v15 = v3 & 1;
  v31 = BugCheckParameter1[1].ActiveProcessorsPadding[8];
  if ( !*(_QWORD *)(v31 + 360) || v15 )
  {
    v30 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v30 )
    {
      v16 = MiCreateCloneChain(a2, &P);
      if ( v16 < 0 )
        goto LABEL_10;
      v16 = MiAllocateChildVads((ULONG_PTR)a2, &v29);
      if ( v16 < 0 )
        goto LABEL_10;
      if ( v15 )
      {
        v19 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v31 + 360));
        v8 = v19;
        if ( !v19 )
        {
          v16 = -1073741670;
          goto LABEL_10;
        }
        memset((void *)v19[3], 0, 32LL * v19[5]);
        *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
        *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
      }
      v16 = MiCloneVads(BugCheckParameter1, (ULONG_PTR)a2, (__int64)P, (__int64)v8, v28, &v26);
      if ( v16 >= 0 )
      {
        P = 0LL;
        v16 = MiMapChildLargePageVads(a2, v29);
        MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v30, 0);
        if ( v6 )
        {
          KiUnstackDetachProcess((__int64)v33, 0LL, v20, v21);
          v6 = 0;
        }
        if ( v32 != a2 )
        {
          v6 = 1;
          KiStackAttachProcess(a2, 0LL, (__int64)v33, v21);
        }
        MiCreateForkWsles();
        if ( v8 )
        {
          v22 = v8[5];
          v23 = 0LL;
          v24 = 0;
          if ( !v22 )
            goto LABEL_38;
          v25 = 0LL;
          do
          {
            ++v24;
            v23 += *(_QWORD *)(32 * v25 + v8[3] + 24);
            v25 = v24;
          }
          while ( v24 < v22 );
          if ( v23 )
          {
            v8[6] = v23;
            MiInsertClone((__int64)a2, v8, 0);
          }
          else
          {
LABEL_38:
            MiFreeCloneDescriptor(a2, v8);
          }
          v8 = 0LL;
        }
        if ( v16 >= 0 )
        {
          MiLockDownWorkingSet(a2, 0, v13, v14);
          v7 = 0;
          if ( v6 )
          {
            KiUnstackDetachProcess((__int64)v33, 0LL, v13, v14);
            v6 = 0;
          }
          if ( !v26 )
            return (unsigned int)v16;
          v16 = -1073741670;
          goto LABEL_13;
        }
LABEL_11:
        v17 = P;
        if ( P )
        {
          do
          {
            v18 = (_QWORD *)*v17;
            PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, v17[8]);
            ExFreePoolWithTag(v17, 0);
            v17 = v18;
          }
          while ( v18 );
        }
LABEL_13:
        if ( v8 )
          MiFreeCloneDescriptor(a2, v8);
        goto LABEL_15;
      }
    }
    else
    {
      v16 = -1073741558;
    }
LABEL_10:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v30, 0);
    goto LABEL_11;
  }
  v16 = -1073741637;
LABEL_15:
  if ( v6 )
    KiUnstackDetachProcess((__int64)v33, 0LL, v13, v14);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0, v13, v14);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v16;
}
