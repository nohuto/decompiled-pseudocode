/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1405FFF90
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x14023A1EC (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpCheckAdminAccess @ 0x1405EA888 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 *     CmRealKCBToVirtualPath @ 0x140667CCC (CmRealKCBToVirtualPath.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871DE0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r9
  ACCESS_MASK v18; // ebx
  __int64 v19; // r9
  __int64 v20; // rax
  UNICODE_STRING *v21; // rbx
  wchar_t *Buffer; // rcx
  char v24[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v27; // [rsp+70h] [rbp+30h] BYREF

  v27 = 0;
  v25 = 0LL;
  v24[0] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(BugCheckParameter2 + 66) )
    goto LABEL_2;
  v14 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_2;
  v15 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_2;
  if ( (*(_DWORD *)(v14 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v14 + 168);
    *(_DWORD *)(v14 + 160) |= 1u;
  }
  if ( CmpReparseToVirtualPath(BugCheckParameter2, v16, v15, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x20) != 0
    || (LOBYTE(v17) = a5, v18 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter2, a7, a6 | 4u, v17)) )
  {
LABEL_2:
    v13 = -1073741199;
    goto LABEL_24;
  }
  LOBYTE(v19) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter2, a7, 131097LL, v19) )
    goto LABEL_12;
  v13 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(BugCheckParameter2 + 88) + 32LL), v15, &v27);
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v27 )
  {
LABEL_12:
    v13 = -1073741790;
    goto LABEL_24;
  }
  CmpUnlockKcb(a2);
  v13 = CmpReplicateKeyToVirtual(BugCheckParameter2);
  CmpLockKcbExclusive(a2);
  if ( v13 >= 0 )
  {
    v13 = CmpExamineSaclForAuditEvent(*(_QWORD *)(BugCheckParameter2 + 88) + 32LL, v15, v24);
    if ( v13 >= 0 )
    {
      if ( !v24[0] || (v13 = CmpReportAuditVirtualizationEvent(BugCheckParameter2, v15), v13 >= 0) )
      {
        v20 = v25;
        *(_DWORD *)(v14 + 100) |= 2u;
        *(_QWORD *)(v14 + 112) = v20;
LABEL_20:
        v13 = CmRealKCBToVirtualPath(BugCheckParameter2, a3, v15, &DestinationString);
        if ( v13 >= 0 )
        {
          v21 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v21 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v14 |= 8u;
          v13 = 260;
        }
      }
    }
  }
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v13;
}
