/*
 * XREFs of CmpLinkHiveToMaster @ 0x14068C2C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A52DF8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A52F90 (CmpInitializePreloadedHive.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     RtlUnicodeStringCopy @ 0x14025C490 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x14061DE38 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpRecordUnloadEventForHive @ 0x1406593A0 (CmpRecordUnloadEventForHive.c)
 *     CmpInitializeKcbCache @ 0x14068C6B0 (CmpInitializeKcbCache.c)
 *     CmpEtwDumpKcb @ 0x140865D08 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x140865FE8 (CmpLogHiveLinkEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  UNICODE_STRING *v13; // r12
  char v14; // r13
  int v15; // eax
  char v16; // r14
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  struct _DMA_ADAPTER *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  PVOID PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  struct _KEVENT *v29; // rdi
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  char v42; // [rsp+41h] [rbp-BFh]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  PRKEVENT Event; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v53[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B4h] [rbp-4Ch]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _OWORD v60[19]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v61[3]; // [rsp+200h] [rbp+100h] BYREF

  Event = a7;
  v49 = a8;
  v47 = a9;
  v51 = a10;
  v48 = a2;
  v13 = 0LL;
  v46 = a1;
  v53[1] = 0;
  v57 = 0;
  v14 = 0;
  Handle = 0LL;
  v42 = 0;
  v52 = 0LL;
  memset(v61, 0, sizeof(v61));
  memset(v60, 0, 0x128uLL);
  LODWORD(v60[6]) = -1;
  *((_QWORD *)&v60[9] + 1) = &v60[9];
  *(_QWORD *)&v60[9] = &v60[9];
  memset((char *)&v60[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v52);
  v15 = *(_DWORD *)(a3 + 160);
  v16 = 1;
  if ( (v15 & 0x20) == 0 )
  {
    v42 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v17 = CmpInitializeKcbCache(a3, a5);
  v18 = v17;
  if ( v17 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v17, 16);
LABEL_43:
    v16 = 0;
    goto LABEL_29;
  }
  v19 = 67;
  *(_QWORD *)&v60[3] = a3;
  if ( a6 )
    v19 = 2115;
  LODWORD(v60[0]) = v19;
  if ( a4 )
    DWORD2(v60[2]) = -1;
  else
    DWORD2(v60[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
  *(_QWORD *)&v60[5] = v47;
  v54 = v48;
  v55 = v46;
  v58 = v49;
  v59 = 0LL;
  v53[0] = 48;
  v56 = 576;
  v20 = ObOpenObjectByName((__int64)v53, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v60, (__int64)&Handle);
  v18 = v20;
  if ( v20 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v20, 32);
    v14 = 0;
    v35 = *(_OWORD *)((char *)&v60[14] + 8);
    a12[22] = *(_OWORD *)((char *)&v60[13] + 8);
    v36 = *(_OWORD *)((char *)&v60[15] + 8);
    a12[23] = v35;
    v37 = *(_OWORD *)((char *)&v60[16] + 8);
    a12[24] = v36;
    v38 = *(_OWORD *)((char *)&v60[17] + 8);
    a12[25] = v37;
    a12[26] = v38;
    goto LABEL_43;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v21 = (struct _DMA_ADAPTER *)Object;
  ZwClose(Handle);
  CmpAttachToRegistryProcess((__int64)v61, v22, v23, v24);
  if ( !a11 )
    CmpLockRegistry();
  v13 = (UNICODE_STRING *)CmpConstructName((__int64)v21->DmaOperations);
  if ( !a11 )
    CmpUnlockRegistry();
  if ( !v13
    || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13->Length, 0x70684D43u),
        (*(_QWORD *)(a3 + 1856) = PoolWithTag) == 0LL) )
  {
    v18 = -1073741670;
    goto LABEL_47;
  }
  *(_WORD *)(a3 + 1848) = 0;
  *(_WORD *)(a3 + 1850) = v13->Length;
  RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1848), v13);
  *(_BYTE *)(a3 + 141) = 0;
  *(_DWORD *)(a3 + 1668) = _InterlockedIncrement(&CmHiveIdentity);
  if ( !a11 )
    CmpLockRegistry();
  if ( a6 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    v29 = Event;
    *(_QWORD *)(a3 + 2928) = v21->DmaOperations;
    if ( v29 )
    {
      KeResetEvent(v29);
      CmpRecordUnloadEventForHive(a3, v29);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v26) = 33;
    CmpEtwDumpKcb(v21->DmaOperations, v26);
  }
  CmpDetachFromRegistryProcess((__int64)v61, v26, v27, v28);
  if ( !a11 )
    CmpUnlockRegistry();
  v30 = (_QWORD *)v51;
  if ( v51 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    *v30 = v21->DmaOperations;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( a6 )
    *(_BYTE *)(a3 + 2936) = 1;
  v14 = 1;
  v16 = 0;
  v18 = 0;
LABEL_29:
  v21 = 0LL;
  if ( v18 >= 0 || !v14 )
    goto LABEL_30;
  CmpAttachToRegistryProcess((__int64)v61, v31, v32, v33);
LABEL_47:
  if ( !a11 )
    CmpLockRegistry();
  CmpRemoveHiveFromNamespace(a3, (__int64)v21->DmaOperations, (__int64)&v52);
  CmpDrainDelayDerefContext((_QWORD **)&v52);
  if ( !a11 )
    CmpUnlockRegistry();
  if ( v16 )
    CmpDetachFromRegistryProcess((__int64)v61, v39, v40, v41);
LABEL_30:
  if ( v13 )
    CmpFreeTransientPoolWithTag(v13, 0x624E4D43u);
  if ( v21 )
    HalPutDmaAdapter(v21);
  if ( v42 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v18 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v46);
  CmpCleanupParseContext((__int64)v60, a11);
  return (unsigned int)v18;
}
