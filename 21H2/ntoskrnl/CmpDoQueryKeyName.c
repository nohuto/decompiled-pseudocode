/*
 * XREFs of CmpDoQueryKeyName @ 0x14026CB70
 * Callers:
 *     CmpQueryKeyName @ 0x14065C3B0 (CmpQueryKeyName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmPostCallbackNotification @ 0x14065C5F0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x14065C84C (CmpCallCallBacks.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v15; // esi
  wchar_t *Buffer; // r10
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v22; // [rsp+31h] [rbp-107h]
  int v24; // [rsp+50h] [rbp-E8h]
  _QWORD v25[2]; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-C0h]
  __int64 v28; // [rsp+80h] [rbp-B8h]
  __int128 v29; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+98h] [rbp-A0h]
  __int128 v31; // [rsp+A8h] [rbp-90h]
  __int64 v32; // [rsp+B8h] [rbp-80h]
  _BYTE v33[48]; // [rsp+C0h] [rbp-78h] BYREF

  v27 = a3;
  v7 = a1;
  v24 = a1;
  v28 = a1;
  UnicodeString = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v22 = 0;
  v11 = 0;
  memset(v33, 0, sizeof(v33));
  v25[1] = v25;
  v25[0] = v25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    *(_QWORD *)&v29 = v7;
    *((_QWORD *)&v29 + 1) = a3;
    LODWORD(v30) = a4;
    *((_QWORD *)&v30 + 1) = a5;
    v14 = CmpCallCallBacks(47, (unsigned int)&v29, v13, 48, v7, (__int64)v25);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
        v15 = 0;
      goto LABEL_19;
    }
    v22 = 1;
  }
  CmpAttachToRegistryProcess(v33);
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
  v15 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v15 >= 0 )
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
      CmpDetachFromRegistryProcess(v33);
      v11 = 0;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v15 = -1073741820;
      }
      else
      {
        Buffer = p_UnicodeString->Buffer;
        v17 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v17 <= (unsigned __int64)a4 - 16 )
        {
          v15 = 0;
LABEL_18:
          v18 = v17 - 2;
          memmove((void *)(a3 + 16), Buffer, v18);
          v19 = v27;
          v20 = v27 + 16;
          *(_WORD *)(v20 + 2 * ((unsigned __int64)v18 >> 1)) = 0;
          *(_WORD *)v19 = v18;
          *(_WORD *)(v19 + 2) = v18;
          *(_QWORD *)(v19 + 8) = v20;
          LODWORD(v7) = v24;
          goto LABEL_19;
        }
        v17 = a4 - 16;
        v15 = -1073741820;
        if ( a4 - 16 >= 2 )
          goto LABEL_18;
        LODWORD(v7) = v24;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_19:
  if ( v10 )
    CmpUnlockKcb(v8);
  if ( v11 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v33);
  }
  if ( v22 )
    CmPostCallbackNotification(48, v7, v15, (unsigned int)&v29, (__int64)v25);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  return (unsigned int)v15;
}
