/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0083440
 * Callers:
 *     UserValidateCopyRgn @ 0x1C0014070 (UserValidateCopyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0014170 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C00141C0 (CreateEmptyRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0084880 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     EtwTraceGdiCreateHandle @ 0x1C00808EC (EtwTraceGdiCreateHandle.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0080E90 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0083740 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0083920 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00864EC (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0086970 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF930 (HmgIncProcessHandleCountEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned __int8 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  void *v7; // rsi
  __int64 v8; // rax
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  struct HOBJ__ *v13; // rsi
  unsigned int CurrentProcessId; // eax
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 *ThreadWin32Thread; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct _ERESOURCE *v30; // rbx
  __int64 v31; // rdx
  GdiHandleManager *v32; // rcx
  int v33; // r8d
  struct HOBJ__ *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  char EtwGdiHandleType; // al
  __int64 v41; // [rsp+30h] [rbp-28h] BYREF
  int v42; // [rsp+38h] [rbp-20h]
  unsigned int v43; // [rsp+60h] [rbp+8h] BYREF

  if ( (((a1->left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v2 = gpTypeIsolation[7];
  v42 = 0;
  if ( v2 )
  {
    v5 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    if ( !v5 )
      goto LABEL_15;
    v7 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0252C50 && (int)qword_1C0252C50(v4, v3, v6) >= 0 && qword_1C0252C58 )
      v8 = qword_1C0252C58(v7);
    else
      v8 = 0LL;
    *(_QWORD *)(v5 + 88) = v8;
    if ( v8 )
      goto LABEL_15;
    REGION::vDeleteREGION((REGION *)v5);
  }
  v5 = 0LL;
LABEL_15:
  v41 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 24) = 112LL;
    *(_DWORD *)(v5 + 80) = 0;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 56) = v5 + 48;
    *(_QWORD *)(v5 + 48) = v5 + 48;
    left = a1->left;
    right = a1->right;
    if ( a1->left > right )
    {
      a1->left = right;
      a1->right = left;
    }
    top = a1->top;
    bottom = a1->bottom;
    if ( top > bottom )
    {
      a1->top = bottom;
      a1->bottom = top;
    }
    RGNOBJ::vSet((RGNOBJ *)&v41, a1);
    v13 = 0LL;
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    CurrentThread = KeGetCurrentThread();
    v16 = CurrentProcessId & 0xFFFFFFFC;
    if ( !(unsigned __int8)KeIsAttachedProcess(v17)
      || (CurrentProcess = PsGetCurrentProcess(v19, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v28 = *ThreadWin32Thread;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 72);
          if ( v29 )
            v16 = *(_DWORD *)(v29 + 8);
        }
      }
    }
    v30 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(v25);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v30);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v25, v24, v26, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    if ( (unsigned int)HmgIncProcessHandleCountEx(v16, v24, 0LL) )
    {
      v43 = 0;
      if ( GdiHandleManager::AcquireEntryIndex(v32, &v43) )
      {
        v34 = ENTRYOBJ::hSetup((struct OBJECT *)v5, 4u, 1u, v43);
        LOBYTE(v35) = 4;
        v13 = v34;
        EtwGdiHandleType = GetEtwGdiHandleType(v35, v36, v37, v38);
        EtwTraceGdiCreateHandle((int)v13, EtwGdiHandleType, v16);
      }
      else
      {
        HmgDecProcessHandleCount(v16);
      }
    }
    GreReleaseHmgrSemaphore((int)v32, v31, v33);
    if ( v13 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
      v13 = 0LL;
      if ( v42 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
    }
  }
  else
  {
    EngSetLastError(8u);
    return 0LL;
  }
  return v13;
}
