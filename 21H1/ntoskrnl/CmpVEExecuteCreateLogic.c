/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1406D038C
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x14030B554 (KCBNeedsVirtualImage.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x1406BBE58 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1406D0328 (CmpReparseToVirtualPath.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086B9F0 (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086CE1C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086CF34 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  int v17; // ebx
  __int64 v19; // r9
  ACCESS_MASK v20; // ebx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  UNICODE_STRING *v24; // rbx
  wchar_t *Buffer; // rcx
  __int64 v26; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  char v28; // [rsp+70h] [rbp+30h] BYREF
  __int64 v29; // [rsp+78h] [rbp+38h] BYREF

  v29 = a2;
  LOBYTE(v29) = 0;
  v26 = 0LL;
  v28 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  v12 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_4;
  v13 = a4 + 32;
  if ( !KCBNeedsVirtualImage(a1) )
    goto LABEL_4;
  if ( (*(_DWORD *)(v12 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v12 + 168, v14, v15, v16);
    *(_DWORD *)(v12 + 160) |= 1u;
  }
  if ( CmpReparseToVirtualPath(a1, v14, v13, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
    || (LOBYTE(v19) = a5, v20 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v19)) )
  {
LABEL_4:
    v17 = -1073741199;
    goto LABEL_5;
  }
  LOBYTE(v21) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v21) )
    goto LABEL_26;
  v17 = CmpCheckAdminAccess(v20, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL), v13, (BOOLEAN *)&v29);
  if ( v17 < 0 )
    goto LABEL_5;
  if ( !(_BYTE)v29 )
  {
LABEL_26:
    v17 = -1073741790;
    goto LABEL_5;
  }
  v22 = *(_DWORD *)v12 >> 10;
  LOBYTE(v22) = (*(_DWORD *)v12 & 0x400) != 0;
  v17 = CmpReplicateKeyToVirtual(a1, v13, v22, &v26);
  if ( v17 >= 0 )
  {
    v17 = CmpExamineSaclForAuditEvent(*(_QWORD *)(a1 + 88) + 32LL, v13, &v28);
    if ( v17 >= 0 )
    {
      if ( !v28 || (v17 = CmpReportAuditVirtualizationEvent(a1, v13), v17 >= 0) )
      {
        v23 = v26;
        *(_DWORD *)(v12 + 100) |= 2u;
        *(_QWORD *)(v12 + 112) = v23;
LABEL_22:
        v17 = CmRealKCBToVirtualPath(a1, a3, v13, &DestinationString);
        if ( v17 >= 0 )
        {
          v24 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v24 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v12 |= 8u;
          v17 = 260;
        }
      }
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v17;
}
