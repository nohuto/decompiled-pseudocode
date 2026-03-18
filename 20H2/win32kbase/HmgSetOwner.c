/*
 * XREFs of HmgSetOwner @ 0x1C003D030
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C001DA90 (GreSetBitmapOwnerEx.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E690 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C001EE80 (GreMakeBitmapNonStock.c)
 *     CreateEmptyRgnPublic @ 0x1C001FA90 (CreateEmptyRgnPublic.c)
 *     GreSetRegionOwner @ 0x1C003CBE0 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EE60 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetPaletteOwner @ 0x1C00B3A90 (GreSetPaletteOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014108C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitICM @ 0x1C0293518 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0293798 (bInitBMOBJ.c)
 *     bInitPALOBJ @ 0x1C02938C4 (bInitPALOBJ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     HmgDecProcessHandleCount @ 0x1C003E660 (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003EA1C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgSetOwner(unsigned int a1, int a2, char a3)
{
  unsigned int v3; // edi
  char v4; // r13
  unsigned __int64 v5; // rbp
  int v7; // r15d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int16 *v19; // rsi
  char v20; // al
  GdiHandleManager *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 v40; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rcx
  unsigned int v43; // ebx
  __int16 v44; // ax
  unsigned __int64 v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v48; // [rsp+40h] [rbp-58h] BYREF
  int v49; // [rsp+48h] [rbp-50h]
  int v50; // [rsp+4Ch] [rbp-4Ch]
  __int64 v51; // [rsp+A0h] [rbp+8h]
  __int64 v53; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  LODWORD(v5) = a2;
  v7 = 0;
  if ( a2 == -2147483646 )
    v5 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v8 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  v53 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v53);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v13 = gpHandleManager;
  v14 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v49 = 1;
  if ( v14 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | (a1 >> 8) & 0xFF0000) >> 16 )
        v14 = (unsigned __int16)a1;
    }
    else
    {
      v14 = (unsigned __int16)a1;
    }
  }
  v15 = *((_QWORD *)v13 + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_80;
  v17 = ((v14 - v16) >> 16) + 1;
  if ( v14 < v16 )
    v17 = 0LL;
  v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    v14 += ((1 - (_DWORD)v17) << 16) - v16;
  v19 = 0LL;
  if ( v14 < *(_DWORD *)(v18 + 20) )
  {
    v47 = 16LL * (unsigned __int8)v14;
    v46 = 8 * ((unsigned __int64)v14 >> 8);
    v51 = v47 + *(_QWORD *)(**(_QWORD **)(v18 + 24) + v46);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v51, 0LL);
    if ( v14 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + v46) + v47 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v14 + 8) |= 1u;
      v19 = (unsigned __int16 *)(24LL * v14 + *(_QWORD *)v18);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v51, 0LL);
      KeLeaveCriticalRegion();
    }
    v4 = a3;
  }
  v48 = v19;
  if ( !v19 )
  {
LABEL_80:
    KeLeaveCriticalRegion();
    goto LABEL_81;
  }
  _m_prefetchw(v19 + 4);
  v50 = *((_DWORD *)v19 + 2);
  v20 = *((_BYTE *)v19 + 15);
  if ( (v20 & 0x20) != 0 )
    goto LABEL_39;
  if ( (v20 & 0x40) == 0 )
    goto LABEL_41;
  v21 = gpHandleManager;
  v22 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v19 & 0xFFFFFF);
  v23 = *((_QWORD *)v21 + 2);
  v24 = v22;
  v25 = *(_DWORD *)(v23 + 2056);
  if ( v22 >= v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    goto LABEL_36;
  v26 = ((v22 - v25) >> 16) + 1;
  if ( v22 < v25 )
    v26 = 0LL;
  v27 = *(_QWORD *)(v23 + 8 * v26 + 8);
  if ( (_DWORD)v26 )
    v24 = ((1 - (_DWORD)v26) << 16) - v25 + v22;
  if ( (unsigned int)v24 >= *(_DWORD *)(v27 + 20) )
LABEL_36:
    v28 = 0LL;
  else
    v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  if ( !*(_WORD *)(v28 + 12) || *(struct _KTHREAD **)(v28 + 16) != KeGetCurrentThread() )
  {
LABEL_39:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
    if ( !v49 )
      goto LABEL_81;
  }
  v19 = v48;
LABEL_41:
  if ( *((_BYTE *)v19 + 14) == v4 && v19[6] == HIWORD(a1) )
  {
    v29 = *(_DWORD *)v19 & 0xFFFFFF;
    if ( v29 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v19,
                                    1)
             + 13) == HIWORD(v29) )
          v29 = (unsigned __int16)v29;
      }
      else
      {
        v29 = *v19;
      }
    }
    v30 = *((_QWORD *)gpHandleManager + 2);
    v31 = *(_DWORD *)(v30 + 2056);
    if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
      goto LABEL_55;
    v32 = ((v29 - v31) >> 16) + 1;
    if ( v29 < v31 )
      v32 = 0LL;
    v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
    if ( (_DWORD)v32 )
      v29 += ((1 - (_DWORD)v32) << 16) - v31;
    if ( v29 >= *(_DWORD *)(v33 + 20) )
LABEL_55:
      v34 = 0LL;
    else
      v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                      + 16LL * (unsigned __int8)v29
                      + 8);
    CurrentThread = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v38 = PsGetCurrentProcess(v37, v36),
           ProcessSessionId = PsGetProcessSessionIdEx(v38),
           v40 = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(v40)))
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v42 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 72LL);
      if ( v42 && (_DWORD)v5 )
        v7 = 1;
    }
    else
    {
      v42 = 0LL;
    }
    if ( !*(_WORD *)(v34 + 12) || *(struct _KTHREAD **)(v34 + 16) == KeGetCurrentThread() || v7 )
    {
      v3 = 1;
      v43 = *((_DWORD *)v48 + 2) & 0xFFFFFFFE;
      if ( v7 )
        LODWORD(v5) = *(_DWORD *)(v42 + 8);
      if ( v43 != (_DWORD)v5 )
      {
        v3 = HmgIncProcessHandleCountEx((unsigned int)v5, 1LL, 0LL);
        if ( v3 )
        {
          HmgDecProcessHandleCount(v43);
          HANDLELOCK::Pid((HANDLELOCK *)&v48, v5);
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != -2147483630 && (*(_WORD *)(v34 + 12) || *(_DWORD *)(v34 + 8)) )
            {
              v44 = *(_WORD *)(v34 + 14);
              if ( (v44 & 0x4000) == 0 )
                *(_WORD *)(v34 + 14) = v44 | 0x4000;
            }
          }
        }
      }
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
  if ( v49 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
LABEL_81:
  GreReleaseHmgrSemaphore();
  return v3;
}
