/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x14090EC00
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x14069E3E0 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryOpenSubKeysEx(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v17; // rcx
  size_t v18; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  signed __int64 v25; // r10
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v31; // [rsp+40h] [rbp-1F8h]
  char v32; // [rsp+41h] [rbp-1F7h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v35; // [rsp+60h] [rbp-1D8h]
  __int128 v36; // [rsp+70h] [rbp-1C8h]
  int v37; // [rsp+80h] [rbp-1B8h]
  __int128 v38; // [rsp+88h] [rbp-1B0h] BYREF
  _OWORD v39[3]; // [rsp+98h] [rbp-1A0h] BYREF
  _OWORD v40[19]; // [rsp+D0h] [rbp-168h] BYREF

  v6 = a2;
  v38 = 0LL;
  v37 = 0;
  memset(v39, 0, sizeof(v39));
  Object = 0LL;
  memset(v40, 0, 0x128uLL);
  LODWORD(v40[6]) = -1;
  *((_QWORD *)&v40[9] + 1) = &v40[9];
  *(_QWORD *)&v40[9] = &v40[9];
  memset((char *)&v40[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v31 = 0;
  CmpInitializeThreadInfo((__int64)&v38);
  v32 = CmpAcquireShutdownRundown(v9, v8, v10);
  if ( !v32 )
  {
    v15 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v15 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v15 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a4;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    ProbeForWrite(a3, v6, 4u);
  }
  v15 = ObReferenceObjectByNameEx(
          a1,
          0LL,
          0x20019u,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v40,
          (PADAPTER_OBJECT *)&Object);
  if ( v15 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v18 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v12, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v31 = 1;
      v20 = Object;
      v15 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v15 >= 0 )
      {
        if ( (*(_DWORD *)(v20[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v15 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        LODWORD(v35) = 8;
        *((_QWORD *)&v36 + 1) = v18 + Size[1];
        *(_QWORD *)&v36 = v20;
        *(_QWORD *)((char *)&v35 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess(v39);
        CmpSearchForOpenSubKeys(v20[1], 0, (__int64)Size);
        CmpDetachFromRegistryProcess(v39);
        v15 = DWORD1(v35);
        CmpUnlockRegistry(v22, v21, v23, v24);
        v31 = 0;
        *a4 = v35;
        v11 = (char *)Size[1];
        *a3 = *(_DWORD *)Size[1];
        if ( v15 >= 0 )
        {
          v25 = v11 - (char *)a3;
          v26 = 0;
          if ( *(_DWORD *)v11 )
          {
            do
            {
              *(_QWORD *)&v11[24 * ++v26] -= v25;
              v11 = (char *)Size[1];
            }
            while ( v26 < *(_DWORD *)Size[1] );
          }
          memmove(a3, v11, v18);
          v15 = 0;
        }
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_22:
  if ( v31 )
    CmpUnlockRegistry(v12, v11, v13, v14);
  CmpCleanupParseContext(v40, 0LL);
  if ( v32 )
    CmpReleaseShutdownRundown(v28, v27, v29);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  CmCleanupThreadInfo((__int64 *)&v38);
  return (unsigned int)v15;
}
