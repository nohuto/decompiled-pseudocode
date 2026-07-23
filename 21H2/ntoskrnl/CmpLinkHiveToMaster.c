/*
 * XREFs of CmpLinkHiveToMaster @ 0x1406F8338
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A5BA10 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A5BBA8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x140213A9C (CmpRemoveHiveFromNamespace.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpRecordUnloadEventForHive @ 0x1405E0DB8 (CmpRecordUnloadEventForHive.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpInitializeKcbCache @ 0x1406F8720 (CmpInitializeKcbCache.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpEtwDumpKcb @ 0x14086A7D8 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x14086AAB8 (CmpLogHiveLinkEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  signed int v17; // eax
  int v18; // edi
  int v19; // eax
  signed int v20; // eax
  struct _DMA_ADAPTER *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KEVENT *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // [rsp+41h] [rbp-BFh]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  PRKEVENT Event; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B4h] [rbp-4Ch]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  _OWORD v57[19]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v58[3]; // [rsp+200h] [rbp+100h] BYREF

  Event = a7;
  v46 = a8;
  v44 = a9;
  v48 = a10;
  v45 = a2;
  v13 = 0LL;
  v43 = a1;
  v50[1] = 0;
  v54 = 0;
  v14 = 0;
  Handle = 0LL;
  v39 = 0;
  v49 = 0LL;
  memset(v58, 0, sizeof(v58));
  memset(v57, 0, 0x128uLL);
  LODWORD(v57[6]) = -1;
  *((_QWORD *)&v57[9] + 1) = &v57[9];
  *(_QWORD *)&v57[9] = &v57[9];
  memset((char *)&v57[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v49);
  v15 = *(_DWORD *)(a3 + 160);
  v16 = 1;
  if ( (v15 & 0x20) == 0 )
  {
    v39 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v17 = CmpInitializeKcbCache(a3, a5);
  v18 = v17;
  if ( v17 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v17, 0x10u);
LABEL_43:
    v16 = 0;
    goto LABEL_29;
  }
  v19 = 67;
  *(_QWORD *)&v57[3] = a3;
  if ( a6 )
    v19 = 2115;
  LODWORD(v57[0]) = v19;
  if ( a4 )
    DWORD2(v57[2]) = -1;
  else
    DWORD2(v57[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
  *(_QWORD *)&v57[5] = v44;
  v51 = v45;
  v52 = v43;
  v55 = v46;
  v56 = 0LL;
  v50[0] = 48;
  v53 = 576;
  v20 = ObOpenObjectByName((__int64)v50, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v57, (__int64)&Handle);
  v18 = v20;
  if ( v20 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v20, 0x20u);
    v14 = 0;
    v33 = *(_OWORD *)((char *)&v57[14] + 8);
    a12[22] = *(_OWORD *)((char *)&v57[13] + 8);
    v34 = *(_OWORD *)((char *)&v57[15] + 8);
    a12[23] = v33;
    v35 = *(_OWORD *)((char *)&v57[16] + 8);
    a12[24] = v34;
    v36 = *(_OWORD *)((char *)&v57[17] + 8);
    a12[25] = v35;
    a12[26] = v36;
    goto LABEL_43;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v21 = (struct _DMA_ADAPTER *)Object;
  ZwClose(Handle);
  CmpAttachToRegistryProcess((__int64)v58);
  if ( !a11 )
    CmpLockRegistry(v22);
  v13 = (UNICODE_STRING *)CmpConstructName((__int64)v21->DmaOperations);
  if ( !a11 )
    CmpUnlockRegistry(v24, v23);
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
    CmpLockRegistry(v27);
  if ( a6 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    v28 = Event;
    *(_QWORD *)(a3 + 2928) = v21->DmaOperations;
    if ( v28 )
    {
      KeResetEvent(v28);
      CmpRecordUnloadEventForHive(a3, v28);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v26) = 33;
    CmpEtwDumpKcb(v21->DmaOperations, v26);
  }
  CmpDetachFromRegistryProcess((__int64)v58);
  if ( !a11 )
    CmpUnlockRegistry(v30, v29);
  v31 = (_QWORD *)v48;
  if ( v48 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    *v31 = v21->DmaOperations;
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
  CmpAttachToRegistryProcess((__int64)v58);
LABEL_47:
  if ( !a11 )
    CmpLockRegistry(v24);
  CmpRemoveHiveFromNamespace(a3, (__int64)v21->DmaOperations, (__int64)&v49);
  CmpDrainDelayDerefContext((_QWORD **)&v49);
  if ( !a11 )
    CmpUnlockRegistry(v38, v37);
  if ( v16 )
    CmpDetachFromRegistryProcess((__int64)v58);
LABEL_30:
  if ( v13 )
    CmpFreeTransientPoolWithTag(v13, 0x624E4D43u);
  if ( v21 )
    HalPutDmaAdapter(v21);
  if ( v39 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v18 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v43);
  CmpCleanupParseContext((__int64)v57, a11);
  return (unsigned int)v18;
}
