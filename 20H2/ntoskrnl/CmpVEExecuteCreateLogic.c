/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1406C4C5C
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x140319D18 (KCBNeedsVirtualImage.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpCheckAdminAccess @ 0x1406C33FC (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1406C4BF8 (CmpReparseToVirtualPath.c)
 *     CmRealKCBToVirtualPath @ 0x1406FC068 (CmRealKCBToVirtualPath.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140874434 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14087454C (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
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
  __int64 v20; // r8
  __int64 v21; // rax
  UNICODE_STRING *v22; // rbx
  wchar_t *Buffer; // rcx
  char v25[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v28; // [rsp+70h] [rbp+30h] BYREF

  v28 = 0;
  v26 = 0LL;
  v25[0] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_2;
  v14 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_2;
  v15 = a4 + 32;
  if ( !KCBNeedsVirtualImage(a1) )
    goto LABEL_2;
  if ( (*(_DWORD *)(v14 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v14 + 168);
    *(_DWORD *)(v14 + 160) |= 1u;
  }
  if ( CmpReparseToVirtualPath(a1, v16, v15, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
    || (LOBYTE(v17) = a5, v18 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v17)) )
  {
LABEL_2:
    v13 = -1073741199;
    goto LABEL_24;
  }
  LOBYTE(v19) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v19) )
    goto LABEL_12;
  v13 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL), v15, &v28);
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v28 )
  {
LABEL_12:
    v13 = -1073741790;
    goto LABEL_24;
  }
  CmpUnlockKcb(a2);
  v20 = *(_DWORD *)v14 >> 10;
  LOBYTE(v20) = (*(_DWORD *)v14 & 0x400) != 0;
  v13 = CmpReplicateKeyToVirtual(a1, v15, v20, &v26);
  CmpLockKcbExclusive(a2);
  if ( v13 >= 0 )
  {
    v13 = CmpExamineSaclForAuditEvent(*(_QWORD *)(a1 + 88) + 32LL, v15, v25);
    if ( v13 >= 0 )
    {
      if ( !v25[0] || (v13 = CmpReportAuditVirtualizationEvent(a1, v15), v13 >= 0) )
      {
        v21 = v26;
        *(_DWORD *)(v14 + 100) |= 2u;
        *(_QWORD *)(v14 + 112) = v21;
LABEL_20:
        v13 = CmRealKCBToVirtualPath(a1, a3, v15, &DestinationString);
        if ( v13 >= 0 )
        {
          v22 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v22 = DestinationString;
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
