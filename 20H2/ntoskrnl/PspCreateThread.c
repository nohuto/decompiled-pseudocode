/*
 * XREFs of PspCreateThread @ 0x140686404
 * Callers:
 *     NtCreateThreadEx @ 0x140692890 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x140909860 (NtCreateThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140323C34 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x140686784 (PspMapThreadCreationFlags.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  char PreviousMode; // al
  _KPROCESS *v18; // rbx
  int v19; // edi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v25; // ebx
  int Flink_high; // eax
  unsigned __int8 v27; // [rsp+60h] [rbp-A0h]
  int v28[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42[50]; // [rsp+E0h] [rbp-20h] BYREF

  v28[0] = 0;
  v33 = a6;
  v38 = a7;
  v36 = a9;
  v30 = a11;
  v34 = a12;
  v37 = a3;
  v29 = a2;
  v39 = a1;
  v35 = a13;
  *(_QWORD *)&v28[1] = a8;
  memset(v42, 0, sizeof(v42));
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  DmaAdapter = 0LL;
  v18 = 0LL;
  v27 = PreviousMode;
  v19 = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    v18 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v28[1] )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v18 = a5;
LABEL_6:
  if ( v18 != Process && !PspIsProcessReadyForRemoteThread((__int64)v18) )
    return 3221225473LL;
  v21 = v30;
  LOBYTE(v14) = 1;
  if ( v30 && *(_QWORD *)&v28[1] )
  {
    v21 = v30 & -(__int64)((v18->SecureState.SecureHandle & 1) != 0);
    v30 = v21;
  }
  if ( !v33
    && !v21
    && (((__int64)v18[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || (HIDWORD(v18[2].ReadyListHead.Blink) & 0x4000) != 0
     || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v27 )
  {
    Flink_high = HIDWORD(v18[2].Header.WaitListHead.Flink);
    if ( (Flink_high & 0x1000) != 0 || (Flink_high & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v18, 0x72437350u);
      return (unsigned int)v19;
    }
  }
  if ( (HIDWORD(v18[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v18[2].Affinity.Count && *(_QWORD *)&v28[1] )
  {
    v19 = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, v28, v14);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v18[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v19 = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v18, 0x72437350u);
  v22 = v33;
  v40 = v36;
  v19 = PspAllocateThread(
          (ULONG_PTR)v18,
          v37,
          v27,
          v33,
          *(__int64 *)&v28[1],
          &v40,
          v30,
          v34,
          v28,
          &DmaAdapter,
          (_BYTE *)v35,
          (_DMA_OPERATIONS **)v42);
  if ( v19 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v18[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v18, 0x72437350u);
  inserted = PspInsertThread(DmaAdapter, (ULONG_PTR)v18, v29, v35, v22, v34, (__int64)v42, v39, v38);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v18[1].ProfileListHead.Blink;
  v25 = inserted;
  ExReleaseRundownProtection_0(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  HalPutDmaAdapter(DmaAdapter);
  return v25;
}
