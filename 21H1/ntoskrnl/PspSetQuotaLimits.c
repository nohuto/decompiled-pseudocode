/*
 * XREFs of PspSetQuotaLimits @ 0x1406D3274
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057BEA4 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x14057C154 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405E5240 (SePrivilegedServiceAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PspSinglePrivCheck @ 0x1406D368C (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x1406D9004 (PspAssignProcessQuotaBlock.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v8; // r12
  NTSTATUS result; // eax
  int v10; // edi
  __int64 v11; // r8
  int v12; // r15d
  char v13; // r13
  char v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  bool v20; // zf
  int v21; // esi
  signed __int64 *v22; // rdi
  struct _DMA_ADAPTER *v23; // rbx
  char v24; // [rsp+40h] [rbp-118h]
  char v25; // [rsp+41h] [rbp-117h]
  char v26; // [rsp+42h] [rbp-116h] BYREF
  char v27; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v30; // [rsp+58h] [rbp-100h]
  _OWORD v31[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset(v31, 0, 0x58uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v26 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v33 = 0LL;
  v34 = 0LL;
  if ( a3 == 48 )
  {
    v31[0] = *(_OWORD *)a2;
    v31[1] = *(_OWORD *)(a2 + 16);
    v31[2] = *(_OWORD *)(a2 + 32);
    memset(&v31[3], 0, 40);
    v24 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v24 = 0;
    v31[0] = *(_OWORD *)a2;
    v31[1] = *(_OWORD *)(a2 + 16);
    v31[2] = *(_OWORD *)(a2 + 32);
    v31[3] = *(_OWORD *)(a2 + 48);
    v31[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v31[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v31[5] & 0xFFFFFFE0) != 0 || (v31[5] & 3) == 3 || (v31[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v31[5] & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v31[5] & 2) != 0 )
      v10 = 8;
  }
  if ( (v31[5] & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v31[5] & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v31[3] + 1) | *(_QWORD *)&v31[4] | *((_QWORD *)&v31[4] + 1) | DWORD1(v31[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    if ( *((_UNKNOWN **)Object + 173) != &PspSystemQuotaBlock || *(_QWORD *)&v31[1] && *((_QWORD *)&v31[1] + 1) )
    {
      if ( *(_QWORD *)&v31[1] && *((_QWORD *)&v31[1] + 1) )
      {
        if ( v31[1] == __PAIR128__(-1LL, -1LL) )
        {
          v25 = 1;
          v13 = 0;
          v27 = 0;
        }
        else
        {
          v25 = 0;
          LOBYTE(v11) = a4;
          v13 = PspSinglePrivCheck(*((_QWORD *)&v31[1] + 1), -1LL, v11, &SubjectContext);
          v27 = 1;
        }
        v14 = 0;
        v15 = Object;
        v30 = Object;
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
              if ( !v25 )
                v31[1] = *(_OWORD *)(v16 + 792);
            }
            PspLockWorkingSetChangeExclusiveUnsafe();
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          }
          v12 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v31[1],
                  *((unsigned __int64 *)&v31[1] + 1),
                  0,
                  v13,
                  v10,
                  &v26);
          if ( v12 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10, v18, v19);
          if ( v16 )
            PspUnlockWorkingSetChangeExclusiveUnsafe();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v17, v18, (__int64)v19);
          KeUnstackDetachProcess(&ApcState);
          if ( v26 == 1 && !v8 )
            v14 = 1;
          v20 = v30[162] == v16;
          v15 = v30;
          if ( v20 )
            break;
          v8 = 0;
        }
        if ( v27 == 1 && BYTE4(v34) )
        {
          if ( v14 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, (int *)&v33, SBYTE5(v34));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    else
    {
      if ( v24 == 1 )
      {
        memset(v31, 0, 0x58uLL);
        LODWORD(v31[5]) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v21 = -1073741727;
LABEL_52:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v21;
      }
      v22 = (signed __int64 *)Object;
      v23 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      v21 = PspAssignProcessQuotaBlock(v31, v22, v23);
      ObFastDereferenceObject(v22 + 151, v23);
      if ( v21 < 0 )
        goto LABEL_52;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v12;
  }
  return result;
}
