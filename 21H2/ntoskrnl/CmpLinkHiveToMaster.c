/*
 * XREFs of CmpLinkHiveToMaster @ 0x14067C9E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140B169F0 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B16B94 (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     RtlUnicodeStringCopy @ 0x140208AD8 (RtlUnicodeStringCopy.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitializeKcbCache @ 0x14067C560 (CmpInitializeKcbCache.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpRecordUnloadEventForHive @ 0x14069FB88 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpEtwDumpKcb @ 0x140910724 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x140910A00 (CmpLogHiveLinkEvent.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        const UNICODE_STRING *a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  __int64 v13; // r12
  int v15; // eax
  signed int v16; // eax
  int v17; // edi
  int v18; // eax
  signed int v19; // eax
  ULONG_PTR *v20; // rsi
  ULONG_PTR v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  UNICODE_STRING *v26; // r15
  PVOID PoolWithTag; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rdi
  __int64 v34; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D8h]
  char v46; // [rsp+40h] [rbp-C0h]
  PVOID v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h]
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int128 v53; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v54[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A4h] [rbp-5Ch]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  _OWORD v61[19]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v62[3]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = a1;
  v51 = a8;
  SourceString = a9;
  v52 = a10;
  v47 = a2;
  v48 = a1;
  v54[1] = 0;
  v58 = 0;
  Handle = 0LL;
  v46 = 0;
  v53 = 0LL;
  memset(v62, 0, sizeof(v62));
  memset(v61, 0, 0x128uLL);
  LODWORD(v61[6]) = -1;
  *((_QWORD *)&v61[9] + 1) = &v61[9];
  *(_QWORD *)&v61[9] = &v61[9];
  memset((char *)&v61[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v53);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v46 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4168) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    *(_QWORD *)&v61[3] = a3;
    if ( a6 )
      v18 = 2115;
    LODWORD(v61[0]) = v18;
    if ( a4 )
      DWORD2(v61[2]) = -1;
    else
      DWORD2(v61[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v60 = 0LL;
    *(_QWORD *)&v61[5] = SourceString;
    v55 = v47;
    v56 = v48;
    v59 = v51;
    v54[0] = 48;
    v57 = 576;
    v19 = ObOpenObjectByName((__int64)v54, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v61, (__int64)&Handle);
    v17 = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v19, 0x20u);
      v36 = *(_OWORD *)((char *)&v61[14] + 8);
      a12[22] = *(_OWORD *)((char *)&v61[13] + 8);
      v37 = *(_OWORD *)((char *)&v61[15] + 8);
      a12[23] = v36;
      v38 = *(_OWORD *)((char *)&v61[16] + 8);
      a12[24] = v37;
      v39 = *(_OWORD *)((char *)&v61[17] + 8);
      a12[25] = v38;
      a12[26] = v39;
LABEL_34:
      v13 = v48;
      goto LABEL_35;
    }
    v47 = 0LL;
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v47, 0LL);
    v20 = (ULONG_PTR *)v47;
    ZwClose(Handle);
    CmpAttachToRegistryProcess(v62);
    if ( !a11 )
      CmpLockRegistry();
    v21 = v20[1];
    SourceString = 0LL;
    CmpConstructNameWithStatus(v21, &SourceString);
    v26 = (UNICODE_STRING *)SourceString;
    if ( !a11 )
      CmpUnlockRegistry(v23, v22, v24, v25, Object, HandleInformation);
    if ( v26
      && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26->Length, 0x70684D43u),
          (*(_QWORD *)(a3 + 1864) = PoolWithTag) != 0LL) )
    {
      *(_WORD *)(a3 + 1856) = 0;
      *(_WORD *)(a3 + 1858) = v26->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1856), v26);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement(&CmHiveIdentity);
      if ( !a11 )
        CmpLockRegistry();
      if ( a6 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *(_QWORD *)(a3 + 2936) = v20[1];
        if ( Event )
        {
          KeResetEvent(Event);
          CmpRecordUnloadEventForHive(a3, Event);
        }
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v28) = 33;
        CmpEtwDumpKcb(v20[1], v28);
      }
      CmpDetachFromRegistryProcess(v62);
      if ( !a11 )
        CmpUnlockRegistry(v30, v29, v31, v32, Object, HandleInformation);
      v33 = (_QWORD *)v52;
      if ( v52 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *v33 = v20[1];
      }
      ObfDereferenceObject(v47);
      if ( a6 )
        *(_BYTE *)(a3 + 2944) = 1;
      v17 = 0;
      v20 = 0LL;
    }
    else
    {
      v17 = -1073741670;
      if ( !a11 )
        CmpLockRegistry();
      CmpRemoveHiveFromNamespace(a3, v20[1], (__int64)&v53);
      CmpDrainDelayDerefContext((_QWORD **)&v53);
      if ( !a11 )
        CmpUnlockRegistry(v41, v40, v42, v43, Object, HandleInformation);
      CmpDetachFromRegistryProcess(v62);
      if ( !v26 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v26, 0x624E4D43u);
LABEL_32:
    if ( v20 )
      ObfDereferenceObject(v20);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 0x10u);
LABEL_35:
  if ( v46 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4168) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v34) = a11;
  CmpCleanupParseContext(v61, v34);
  return (unsigned int)v17;
}
