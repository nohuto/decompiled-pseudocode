/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C0204F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00269D4 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(unsigned __int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID v9; // rsi
  struct _ERESOURCE *JobLock; // rax
  unsigned int DLT; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *i; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *v23; // r9
  struct _ERESOURCE *v24; // rax
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+50h] [rbp-58h]
  PVOID v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]
  _BYTE v31[24]; // [rsp+78h] [rbp-30h] BYREF

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v9 = Object;
  v28 = Object;
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7, v8);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v31);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v9) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v9 )
        break;
    }
    if ( !HMValidateHandle(a1, 0xFFu) )
      goto LABEL_10;
    v29 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v29 + 25) |= 0x20u;
    v17 = i[7];
    v26 = v17;
    if ( a3 )
    {
      v18 = *((_DWORD *)i + 12);
      v19 = *((unsigned int *)i + 13);
      if ( v18 != (_DWORD)v19 )
        goto LABEL_22;
      if ( v18 )
      {
        v22 = 8 * v19;
        v30 = v22;
        v21 = 0xFFFFFFFFLL;
        if ( v22 > 0xFFFFFFFF )
          goto LABEL_19;
        v21 = (unsigned int)(v22 + 64);
        if ( (unsigned int)v21 < (unsigned int)v22 )
          goto LABEL_19;
        v27 = v22 + 64;
        v20 = UserReAllocPool(v17, (unsigned int)v22, (unsigned int)v21, 1751610197LL);
      }
      else
      {
        v20 = Win32AllocPool(64LL, 1751610197LL);
      }
      v26 = v20;
      v17 = v20;
      if ( !v20 )
      {
LABEL_19:
        UserSetLastError(8LL, v21, v14);
        goto LABEL_34;
      }
      i[7] = v20;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v16 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v16 )
          break;
        if ( *(_QWORD *)(v17 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v16 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v17 + 8 * v16) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v16 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v16 )
          goto LABEL_32;
        v23 = (_QWORD *)(v17 + 8LL * v5);
        if ( *v23 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v17 + 8LL * v5), v23 + 1, 8LL * ((unsigned int)v16 - v5 - 1));
      v16 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v16 )
LABEL_32:
        UserSetLastError(6LL, v16, v14);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL, v13, v14);
LABEL_34:
  UserSessionSwitchLeaveCrit(v17, v16, v14);
  v24 = (struct _ERESOURCE *)PsGetJobLock(v9);
  ExReleaseResourceAndLeaveCriticalRegion(v24);
  ObfDereferenceObject(v9);
  return (int)v5;
}
