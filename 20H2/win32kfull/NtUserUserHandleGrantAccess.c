/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C02040E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C003ED04 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
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
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // r9
  struct _ERESOURCE *v25; // rax
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-60h]
  int v28; // [rsp+50h] [rbp-58h]
  PVOID v29; // [rsp+58h] [rbp-50h]
  __int64 v30; // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  _BYTE v32[24]; // [rsp+78h] [rbp-30h] BYREF

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v9 = Object;
  v29 = Object;
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
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v32);
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
    v30 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v30 + 25) |= 0x20u;
    v16 = i[7];
    v27 = v16;
    if ( a3 )
    {
      v17 = *((_DWORD *)i + 12);
      v18 = *((unsigned int *)i + 13);
      if ( v17 != (_DWORD)v18 )
        goto LABEL_22;
      if ( v17 )
      {
        v21 = 8 * v18;
        v31 = v21;
        v20 = 0xFFFFFFFFLL;
        if ( v21 > 0xFFFFFFFF )
          goto LABEL_19;
        v20 = (unsigned int)(v21 + 64);
        if ( (unsigned int)v20 < (unsigned int)v21 )
          goto LABEL_19;
        v28 = v21 + 64;
        v19 = UserReAllocPool(v16, (unsigned int)v21, (unsigned int)v20, 1751610197LL);
      }
      else
      {
        v19 = Win32AllocPool(64LL, 1751610197LL);
      }
      v27 = v19;
      v16 = v19;
      if ( !v19 )
      {
LABEL_19:
        UserSetLastError(8LL, v20, v14);
        goto LABEL_34;
      }
      i[7] = v19;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v22 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v22 )
          break;
        if ( *(_QWORD *)(v16 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v22 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v16 + 8 * v22) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v23 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v23 )
          goto LABEL_32;
        v24 = (_QWORD *)(v16 + 8LL * v5);
        if ( *v24 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v16 + 8LL * v5), v24 + 1, 8LL * ((unsigned int)v23 - v5 - 1));
      v23 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v23 )
LABEL_32:
        UserSetLastError(6LL, v23, v14);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL, v13, v14);
LABEL_34:
  UserSessionSwitchLeaveCrit(v16);
  v25 = (struct _ERESOURCE *)PsGetJobLock(v9);
  ExReleaseResourceAndLeaveCriticalRegion(v25);
  ObfDereferenceObject(v9);
  return (int)v5;
}
