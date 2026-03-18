/*
 * XREFs of MiCloneProcessAddressSpace @ 0x1409806C8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1402365F4 (MiIsStoreProcess.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1405BA158 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405BA3BC (MiCreateForkWsles.c)
 *     MiInsertClone @ 0x1405BB8B4 (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14098056C (MiBuildNewCloneDescriptor.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x140980D40 (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x140980FA0 (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r12
  int v6; // r13d
  int v7; // r15d
  _QWORD *v8; // r14
  _KPROCESS *Process; // rdi
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // r12d
  int v16; // edi
  _QWORD *v17; // r12
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
  v30 = BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28];
  if ( !*(_QWORD *)(v30 + 344) || v15 )
  {
    v29 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
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
        v19 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v30 + 344));
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
        MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 1);
        if ( v6 )
        {
          KiUnstackDetachProcess((__int64)v32, 0LL);
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
            KiUnstackDetachProcess((__int64)v32, 0LL);
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
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 1);
    goto LABEL_11;
  }
  v16 = -1073741637;
LABEL_15:
  if ( v6 )
    KiUnstackDetachProcess((__int64)v32, 0LL);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0, v13, v14);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v16;
}
