/*
 * XREFs of MiCloneProcessAddressSpace @ 0x1408D9060
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1407114D4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiIsStoreProcess @ 0x14026A4B0 (MiIsStoreProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403183E0 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559AC0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559DAC (MiCreateForkWsles.c)
 *     MiInsertClone @ 0x14055B274 (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x14055B2F8 (MiLockDownWorkingSet.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620130 (MiUnlockVadRange.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F04 (MiBuildNewCloneDescriptor.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D93B4 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x1408D96E8 (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x1408D9960 (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  _DWORD *v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v27; // [rsp+40h] [rbp-39h]
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h]
  unsigned __int64 v30; // [rsp+58h] [rbp-21h]
  _KPROCESS *v31; // [rsp+60h] [rbp-19h]
  _OWORD v32[3]; // [rsp+68h] [rbp-11h] BYREF

  v27 = a3;
  v28 = 0LL;
  memset(v32, 0, sizeof(v32));
  v3 = a3;
  v6 = 0;
  v7 = 1;
  P = 0LL;
  v8 = 0LL;
  v25 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  if ( (unsigned int)MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1, v10, v11);
  if ( Process != BugCheckParameter1 )
  {
    v6 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v32, v14);
  }
  v15 = v3 & 1;
  v30 = BugCheckParameter1[1].ActiveProcessorsPadding[8];
  if ( !*(_QWORD *)(v30 + 360) || v15 )
  {
    v29 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v29 )
    {
      v16 = MiCreateCloneChain(a2, &P);
      if ( v16 < 0 )
        goto LABEL_10;
      v16 = MiAllocateChildVads((ULONG_PTR)a2, &v28);
      if ( v16 < 0 )
        goto LABEL_10;
      if ( v15 )
      {
        v19 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v30 + 360));
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
      v16 = MiCloneVads(BugCheckParameter1, (__int64)a2, (__int64)P, (__int64)v8, v27, &v25);
      if ( v16 >= 0 )
      {
        P = 0LL;
        v16 = MiMapChildLargePageVads(a2, v28);
        MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 0);
        if ( v6 )
        {
          KiUnstackDetachProcess((__int64)v32, 0);
          v6 = 0;
        }
        if ( v31 != a2 )
        {
          v6 = 1;
          KiStackAttachProcess(a2, 0LL, (__int64)v32, v20);
        }
        MiCreateForkWsles();
        if ( v8 )
        {
          v21 = v8[5];
          v22 = 0LL;
          v23 = 0;
          if ( !v21 )
            goto LABEL_38;
          v24 = 0LL;
          do
          {
            ++v23;
            v22 += *(_QWORD *)(32 * v24 + v8[3] + 24);
            v24 = v23;
          }
          while ( v23 < v21 );
          if ( v22 )
          {
            v8[6] = v22;
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
            KiUnstackDetachProcess((__int64)v32, 0);
            v6 = 0;
          }
          if ( !v25 )
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
            PsReturnProcessNonPagedPoolQuota(a2, v17[8]);
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
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 0);
    goto LABEL_11;
  }
  v16 = -1073741637;
LABEL_15:
  if ( v6 )
    KiUnstackDetachProcess((__int64)v32, 0);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0, v13, v14);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v16;
}
