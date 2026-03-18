/*
 * XREFs of _NtUserUserHandleGrantAccess@12 @ 0x16B080
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

unsigned int __stdcall NtUserUserHandleGrantAccess(int a1, HANDLE Handle, unsigned int a3)
{
  unsigned int v3; // edi
  NTSTATUS v4; // eax
  PVOID v5; // ebx
  struct _ERESOURCE *JobLock; // eax
  int DLT; // eax
  int v9; // eax
  _DWORD *i; // esi
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // ecx
  struct _ERESOURCE *v19; // eax
  ULONG *v20; // [esp+0h] [ebp-4Ch]
  unsigned int v21; // [esp+0h] [ebp-4Ch]
  unsigned int *v22; // [esp+4h] [ebp-48h]
  int v23; // [esp+14h] [ebp-38h]
  PVOID Object; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v3 = 0;
  Object = 0;
  v4 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)_PsJobType, 1, &Object, 0);
  v5 = Object;
  if ( v4 < 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0, 1);
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  v9 = DLT_JOB::getDLT();
  GetDomainLockRef(v9);
  if ( PsGetJobUIRestrictionsClass(v5) )
  {
    for ( i = (_DWORD *)_gpJobsList; ; i = (_DWORD *)*i )
    {
      if ( !i )
        goto LABEL_4;
      if ( (PVOID)i[1] == v5 )
        break;
    }
    ms_exc.registration.TryLevel = 0;
    if ( !HMValidateHandle(a1, 255) )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      ms_exc.registration.TryLevel = -2;
      goto LABEL_33;
    }
    v11 = a1;
    v23 = _gSharedInfo[1] + 16 * (unsigned __int16)a1;
    *(_BYTE *)(v23 + 13) |= 0x20u;
    v12 = i[9];
    if ( !a3 )
    {
      while ( 1 )
      {
        v17 = i[7];
        if ( v3 >= v17 )
          break;
        v18 = (_DWORD *)(v12 + 4 * v3);
        if ( *v18 == a1 )
        {
          memmove((void *)(v12 + 4 * v3), v18 + 1, 4 * (v17 - v3) - 4);
          if ( v3 < --i[7] )
            goto LABEL_31;
          break;
        }
        ++v3;
      }
      UserSetLastError((struct _NT_TIB *)6);
      goto LABEL_31;
    }
    v13 = i[7];
    v14 = i[8];
    if ( v13 != v14 )
      goto LABEL_20;
    if ( v13 )
    {
      a3 = 0;
      if ( ULongLongToULong(4LL * v14, v20) < 0 || (ULongAdd(32, 0, (int *)&a3, v21, v22) & 0x80000000) != 0 )
        goto LABEL_23;
      v15 = UserReAllocPool(v12, 0, a3, 1751610197);
    }
    else
    {
      v15 = Win32AllocPool(32, 1751610197);
    }
    v12 = v15;
    if ( v15 )
    {
      i[9] = v15;
      i[8] += 8;
      v11 = a1;
LABEL_20:
      while ( 1 )
      {
        v16 = i[7];
        if ( v3 >= v16 )
          break;
        if ( *(_DWORD *)(v12 + 4 * v3) == v11 )
        {
          if ( v3 < v16 )
            goto LABEL_31;
          break;
        }
        ++v3;
      }
      *(_DWORD *)(v12 + 4 * v16) = v11;
      ++i[7];
LABEL_31:
      v3 = 1;
      goto LABEL_24;
    }
LABEL_23:
    UserSetLastError((struct _NT_TIB *)8);
LABEL_24:
    ms_exc.registration.TryLevel = -2;
    v5 = Object;
    goto LABEL_33;
  }
LABEL_4:
  UserSetLastError((struct _NT_TIB *)0x57);
LABEL_33:
  UserSessionSwitchLeaveCrit();
  v19 = (struct _ERESOURCE *)PsGetJobLock(v5);
  ExReleaseResourceAndLeaveCriticalRegion(v19);
  ObfDereferenceObject(v5);
  return v3;
}
