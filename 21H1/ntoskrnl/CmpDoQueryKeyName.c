/*
 * XREFs of CmpDoQueryKeyName @ 0x14025BE50
 * Callers:
 *     CmpQueryKeyName @ 0x14061B0D0 (CmpQueryKeyName.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpConstructName @ 0x14061DE38 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpCallCallBacks @ 0x140622994 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140622CE0 (CmPostCallbackNotification.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x14086B4AC (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // r15
  UNICODE_STRING *p_UnicodeString; // r14
  char v10; // r12
  char v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // r9
  int v18; // esi
  wchar_t *Buffer; // r10
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v25; // [rsp+31h] [rbp-107h]
  int v27; // [rsp+50h] [rbp-E8h]
  _QWORD v28[2]; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-C0h]
  __int64 v31; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+98h] [rbp-A0h]
  __int128 v34; // [rsp+A8h] [rbp-90h]
  __int64 v35; // [rsp+B8h] [rbp-80h]
  _BYTE v36[48]; // [rsp+C0h] [rbp-78h] BYREF

  v30 = a3;
  v7 = a1;
  v27 = a1;
  v31 = a1;
  UnicodeString = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v25 = 0;
  v11 = 0;
  memset(v36, 0, sizeof(v36));
  v28[1] = v28;
  v28[0] = v28;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    *(_QWORD *)&v32 = v7;
    *((_QWORD *)&v32 + 1) = a3;
    LODWORD(v33) = a4;
    *((_QWORD *)&v33 + 1) = a5;
    v14 = CmpCallCallBacks(47, (unsigned int)&v32, v13, 48, v7, (__int64)v28);
    v18 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
      {
        v15 = 0LL;
        v18 = 0;
      }
      goto LABEL_19;
    }
    v25 = 1;
  }
  CmpAttachToRegistryProcess(v36);
  v11 = 1;
  CmpLockRegistry();
  v8 = *(_QWORD *)(v7 + 8);
  if ( (v8 & 1) != 0 )
  {
    v8 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(v7 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v8);
    v10 = 1;
  }
  v18 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v18 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v8 + 184) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v8, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v8);
    }
    if ( p_UnicodeString )
    {
      if ( v10 )
      {
        CmpUnlockKcb(v8);
        v10 = 0;
      }
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(v36);
      v11 = 0;
      v15 = a4;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v18 = -1073741820;
      }
      else
      {
        v17 = (void *)(a3 + 16);
        Buffer = p_UnicodeString->Buffer;
        v20 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v20 <= (unsigned __int64)a4 - 16 )
        {
          v18 = 0;
LABEL_18:
          v21 = v20 - 2;
          memmove(v17, Buffer, v21);
          v22 = v30;
          v23 = v30 + 16;
          v15 = 0LL;
          *(_WORD *)(v23 + 2 * ((unsigned __int64)v21 >> 1)) = 0;
          *(_WORD *)v22 = v21;
          *(_WORD *)(v22 + 2) = v21;
          *(_QWORD *)(v22 + 8) = v23;
          LODWORD(v7) = v27;
          goto LABEL_19;
        }
        v20 = a4 - 16;
        v18 = -1073741820;
        if ( a4 - 16 >= 2 )
          goto LABEL_18;
        LODWORD(v7) = v27;
      }
    }
    else
    {
      v18 = -1073741670;
    }
  }
LABEL_19:
  if ( v10 )
    CmpUnlockKcb(v8);
  if ( v11 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v36);
  }
  if ( v25 )
    CmPostCallbackNotification(48, v7, v18, (unsigned int)&v32, (__int64)v28);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, (__int64)v17);
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  return (unsigned int)v18;
}
