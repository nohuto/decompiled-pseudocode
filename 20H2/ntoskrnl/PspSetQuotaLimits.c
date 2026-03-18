/*
 * XREFs of PspSetQuotaLimits @ 0x1406C8ED4
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057FF14 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x1405801C4 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140606DA0 (SePrivilegedServiceAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspSinglePrivCheck @ 0x1406C92EC (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v8; // r12
  NTSTATUS result; // eax
  unsigned int v10; // edi
  __int64 v11; // r8
  int v12; // r15d
  char v13; // r13
  char v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  bool v17; // zf
  int v18; // esi
  signed __int64 *v19; // rdi
  struct _DMA_ADAPTER *v20; // rbx
  char v21; // [rsp+40h] [rbp-118h]
  char v22; // [rsp+41h] [rbp-117h]
  char v23; // [rsp+42h] [rbp-116h] BYREF
  char v24; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v27; // [rsp+58h] [rbp-100h]
  _OWORD v28[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset(v28, 0, 0x58uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v23 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v30 = 0LL;
  v31 = 0LL;
  if ( a3 == 48 )
  {
    v28[0] = *(_OWORD *)a2;
    v28[1] = *(_OWORD *)(a2 + 16);
    v28[2] = *(_OWORD *)(a2 + 32);
    memset(&v28[3], 0, 40);
    v21 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v21 = 0;
    v28[0] = *(_OWORD *)a2;
    v28[1] = *(_OWORD *)(a2 + 16);
    v28[2] = *(_OWORD *)(a2 + 32);
    v28[3] = *(_OWORD *)(a2 + 48);
    v28[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v28[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v28[5] & 0xFFFFFFE0) != 0 || (v28[5] & 3) == 3 || (v28[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v28[5] & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v28[5] & 2) != 0 )
      v10 = 8;
  }
  if ( (v28[5] & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v28[5] & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v28[3] + 1) | *(_QWORD *)&v28[4] | *((_QWORD *)&v28[4] + 1) | DWORD1(v28[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    if ( *((_UNKNOWN **)Object + 173) != &PspSystemQuotaBlock || *(_QWORD *)&v28[1] && *((_QWORD *)&v28[1] + 1) )
    {
      if ( *(_QWORD *)&v28[1] && *((_QWORD *)&v28[1] + 1) )
      {
        if ( v28[1] == __PAIR128__(-1LL, -1LL) )
        {
          v22 = 1;
          v13 = 0;
          v24 = 0;
        }
        else
        {
          v22 = 0;
          LOBYTE(v11) = a4;
          v13 = PspSinglePrivCheck(*((_QWORD *)&v28[1] + 1), -1LL, v11, &SubjectContext);
          v24 = 1;
        }
        v14 = 0;
        v15 = Object;
        v27 = Object;
        while ( 1 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          --CurrentThread->SpecialApcDisable;
          v16 = v15[162];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 848) & 1) != 0 )
            {
              v10 = 1;
              v13 = 1;
              v8 = 1;
              if ( !v22 )
                v28[1] = *(_OWORD *)(v16 + 792);
            }
            PspLockWorkingSetChangeExclusiveUnsafe();
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          }
          v12 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v28[1],
                  *((unsigned __int64 *)&v28[1] + 1),
                  0,
                  v13,
                  v10,
                  &v23);
          if ( v12 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10);
          if ( v16 )
            PspUnlockWorkingSetChangeExclusiveUnsafe();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeUnstackDetachProcess(&ApcState);
          if ( v23 == 1 && !v8 )
            v14 = 1;
          v17 = v27[162] == v16;
          v15 = v27;
          if ( v17 )
            break;
          v8 = 0;
        }
        if ( v24 == 1 && BYTE4(v31) )
        {
          if ( v14 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, (int *)&v30, SBYTE5(v31));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    else
    {
      if ( v21 == 1 )
      {
        memset(v28, 0, 0x58uLL);
        LODWORD(v28[5]) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v18 = -1073741727;
LABEL_52:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v18;
      }
      v19 = (signed __int64 *)Object;
      v20 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      v18 = PspAssignProcessQuotaBlock(v28, v19, v20);
      ObFastDereferenceObject(v19 + 151, v20);
      if ( v18 < 0 )
        goto LABEL_52;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v12;
  }
  return result;
}
