/*
 * XREFs of CmpDoQueryKeyName @ 0x140346910
 * Callers:
 *     CmpQueryKeyName @ 0x1407C05A0 (CmpQueryKeyName.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     CmpConstructName @ 0x1407C05CC (CmpConstructName.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r15
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
  char v22; // [rsp+31h] [rbp-117h]
  int v24; // [rsp+50h] [rbp-F8h]
  _QWORD v25[2]; // [rsp+58h] [rbp-F0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-D0h]
  __int64 v28; // [rsp+80h] [rbp-C8h]
  __int128 v29; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-A0h]
  __int128 v32; // [rsp+B8h] [rbp-90h]
  __int64 v33; // [rsp+C8h] [rbp-80h]
  _BYTE v34[48]; // [rsp+D0h] [rbp-78h] BYREF

  v27 = a3;
  v7 = a1;
  v24 = a1;
  v28 = a1;
  v29 = 0LL;
  UnicodeString = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v22 = 0;
  v11 = 0;
  memset(v34, 0, sizeof(v34));
  CmpInitializeThreadInfo(&v29);
  v25[1] = v25;
  v25[0] = v25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = a3;
    LODWORD(v31) = a4;
    *((_QWORD *)&v31 + 1) = a5;
    v14 = CmpCallCallBacks(47, (unsigned int)&v30, v13, 48, v7, (__int64)v25);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
        v15 = 0;
      goto LABEL_19;
    }
    v22 = 1;
  }
  CmpAttachToRegistryProcess(v34);
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
      CmpDetachFromRegistryProcess(v34);
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
    CmpDetachFromRegistryProcess(v34);
  }
  if ( v22 )
    CmPostCallbackNotification(48, v7, v15, (unsigned int)&v30, (__int64)v25);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v29;
  return (unsigned int)v15;
}
