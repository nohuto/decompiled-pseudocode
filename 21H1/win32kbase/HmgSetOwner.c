/*
 * XREFs of HmgSetOwner @ 0x1C007B240
 * Callers:
 *     GreSetPaletteOwner @ 0x1C0045950 (GreSetPaletteOwner.c)
 *     GreSetRegionOwner @ 0x1C007A5F0 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C007D8D0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetBitmapOwnerEx @ 0x1C0091070 (GreSetBitmapOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x1C00A8220 (CreateEmptyRgnPublic.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00A85C4 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C00AA6B0 (GreMakeBitmapNonStock.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014987C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C029ABA8 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C029B3F4 (bInitBMOBJ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     HmgDecProcessHandleCount @ 0x1C007F53C (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C007F8EC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CEF34 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned int v3; // edi
  char v4; // r13
  unsigned __int64 v5; // rbp
  unsigned int v6; // r12d
  int v7; // r15d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v15; // r14
  unsigned int v16; // ebx
  __int64 v17; // r14
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int16 *v21; // rsi
  char v22; // al
  GdiHandleManager *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // r10
  __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // r8
  unsigned int v32; // edx
  __int64 v33; // r9
  __int64 v34; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __int16 v45; // ax
  unsigned __int64 v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v49; // [rsp+40h] [rbp-58h] BYREF
  int v50; // [rsp+48h] [rbp-50h]
  int v51; // [rsp+4Ch] [rbp-4Ch]
  __int64 v52; // [rsp+A0h] [rbp+8h]
  __int64 v54; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  LODWORD(v5) = a2;
  v6 = a1;
  v7 = 0;
  if ( a2 == -2147483646 )
    v5 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v8 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  v54 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v54);
  if ( (unsigned __int8)KeIsAttachedProcess(v9) )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v13);
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v15 = gpHandleManager;
  v16 = (unsigned __int16)v6 | (v6 >> 8) & 0xFF0000;
  v50 = 1;
  if ( v16 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v6,
                                  1)
           + 13) == ((unsigned __int16)v6 | (v6 >> 8) & 0xFF0000) >> 16 )
        v16 = (unsigned __int16)v6;
    }
    else
    {
      v16 = (unsigned __int16)v6;
    }
  }
  v17 = *((_QWORD *)v15 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v16 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_80;
  v19 = ((v16 - v18) >> 16) + 1;
  if ( v16 < v18 )
    v19 = 0LL;
  v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
  if ( (_DWORD)v19 )
    v16 += ((1 - (_DWORD)v19) << 16) - v18;
  v21 = 0LL;
  if ( v16 < *(_DWORD *)(v20 + 20) )
  {
    v48 = 16LL * (unsigned __int8)v16;
    v47 = 8 * ((unsigned __int64)v16 >> 8);
    v52 = v48 + *(_QWORD *)(**(_QWORD **)(v20 + 24) + v47);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v52, 0LL);
    if ( v16 < *(_DWORD *)(v20 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + v47) + v48 + 8) )
    {
      v19 = 24LL * v16;
      *(_DWORD *)(*(_QWORD *)v20 + v19 + 8) |= 1u;
      v21 = (unsigned __int16 *)(v19 + *(_QWORD *)v20);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v52, 0LL);
      KeLeaveCriticalRegion();
    }
    v4 = a3;
  }
  v49 = v21;
  if ( !v21 )
  {
LABEL_80:
    KeLeaveCriticalRegion();
    goto LABEL_81;
  }
  _m_prefetchw(v21 + 4);
  v51 = *((_DWORD *)v21 + 2);
  v22 = *((_BYTE *)v21 + 15);
  if ( (v22 & 0x20) != 0 )
    goto LABEL_39;
  if ( (v22 & 0x40) == 0 )
    goto LABEL_41;
  v23 = gpHandleManager;
  v24 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v21 & 0xFFFFFF);
  v25 = *((_QWORD *)v23 + 2);
  v26 = v24;
  v27 = *(_DWORD *)(v25 + 2056);
  if ( v24 >= v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    goto LABEL_36;
  v19 = ((v24 - v27) >> 16) + 1;
  if ( v24 < v27 )
    v19 = 0LL;
  v28 = *(_QWORD *)(v25 + 8 * v19 + 8);
  if ( (_DWORD)v19 )
    v26 = ((1 - (_DWORD)v19) << 16) - v27 + v24;
  if ( (unsigned int)v26 >= *(_DWORD *)(v28 + 20) )
  {
LABEL_36:
    v29 = 0LL;
  }
  else
  {
    v19 = 2LL * (unsigned __int8)v26;
    v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8);
  }
  if ( !*(_WORD *)(v29 + 12) || *(struct _KTHREAD **)(v29 + 16) != KeGetCurrentThread() )
  {
LABEL_39:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
    if ( !v50 )
      goto LABEL_81;
  }
  v21 = v49;
LABEL_41:
  if ( *((_BYTE *)v21 + 14) == v4 && v21[6] == HIWORD(v6) )
  {
    v30 = *(_DWORD *)v21 & 0xFFFFFF;
    if ( v30 >= 0x10000 )
    {
      v19 = (__int64)gpHandleManager;
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v19 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                     *v21,
                                     1)
              + 13);
        if ( (_DWORD)v19 == HIWORD(v30) )
          v30 = (unsigned __int16)v30;
      }
      else
      {
        v30 = *v21;
      }
    }
    v31 = *((_QWORD *)gpHandleManager + 2);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( v30 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
      goto LABEL_55;
    v19 = ((v30 - v32) >> 16) + 1;
    if ( v30 < v32 )
      v19 = 0LL;
    v33 = *(_QWORD *)(v31 + 8 * v19 + 8);
    if ( (_DWORD)v19 )
      v30 += ((1 - (_DWORD)v19) << 16) - v32;
    if ( v30 >= *(_DWORD *)(v33 + 20) )
    {
LABEL_55:
      v34 = 0LL;
    }
    else
    {
      v19 = 2LL * (unsigned __int8)v30;
      v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                      + 16LL * (unsigned __int8)v30
                      + 8);
    }
    CurrentThread = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(v19)
       || (v38 = PsGetCurrentProcess(v37, v36),
           ProcessSessionId = PsGetProcessSessionIdEx(v38),
           v41 = PsGetCurrentThreadProcess(v40),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(v41)))
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v43 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 72LL);
      if ( v43 && (_DWORD)v5 )
        v7 = 1;
    }
    else
    {
      v43 = 0LL;
    }
    if ( !*(_WORD *)(v34 + 12) || *(struct _KTHREAD **)(v34 + 16) == KeGetCurrentThread() || v7 )
    {
      v3 = 1;
      v44 = *((_DWORD *)v49 + 2) & 0xFFFFFFFE;
      if ( v7 )
        LODWORD(v5) = *(_DWORD *)(v43 + 8);
      if ( v44 != (_DWORD)v5 )
      {
        v3 = HmgIncProcessHandleCountEx((unsigned int)v5, 1LL, 0LL);
        if ( v3 )
        {
          HmgDecProcessHandleCount(v44);
          HANDLELOCK::Pid((HANDLELOCK *)&v49, v5);
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != -2147483630 && (*(_WORD *)(v34 + 12) || *(_DWORD *)(v34 + 8)) )
            {
              v45 = *(_WORD *)(v34 + 14);
              if ( (v45 & 0x4000) == 0 )
                *(_WORD *)(v34 + 14) = v45 | 0x4000;
            }
          }
        }
      }
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
  if ( v50 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
LABEL_81:
  GreReleaseHmgrSemaphore();
  return v3;
}
