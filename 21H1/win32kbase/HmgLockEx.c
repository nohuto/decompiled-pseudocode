/*
 * XREFs of HmgLockEx @ 0x1C0083AE0
 * Callers:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009BDDC (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00A9CB8 (-vCleanupRegions@@YAXK@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C00AA6B0 (GreMakeBitmapNonStock.c)
 *     EngDeleteDriverObj @ 0x1C0155EA0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0155FC0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0155FF0 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  __int64 v4; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  int v21; // ecx
  unsigned int v22; // ecx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r9
  __int16 v29; // ax
  unsigned int v30; // ebx
  GdiHandleManager *v31; // rsi
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // r9
  _DWORD *v36; // rdx
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rdx
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v46; // rcx
  __int64 CurrentThreadProcess; // rax
  int v48; // edx
  GdiHandleManager *v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // r10
  __int64 v56; // rdx
  __int64 v57; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-60h]
  __int64 v59; // [rsp+30h] [rbp-58h]
  _DWORD *v60; // [rsp+38h] [rbp-50h] BYREF
  int v61; // [rsp+40h] [rbp-48h]
  int v62; // [rsp+44h] [rbp-44h]
  __int64 v63; // [rsp+90h] [rbp+8h]

  v57 = 0LL;
  v4 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v57);
  if ( (!(unsigned __int8)KeIsAttachedProcess(v8)
     || (CurrentProcess = PsGetCurrentProcess(v10, v9),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v46),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v11 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = gpHandleManager;
  v61 = 1;
  v13 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v14 = *((_QWORD *)v12 + 2);
  v15 = v13;
  v16 = *(_DWORD *)(v14 + 2056);
  if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    goto LABEL_53;
  v17 = ((v13 - v16) >> 16) + 1;
  if ( v13 < v16 )
    v17 = 0LL;
  v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    v15 = ((1 - (_DWORD)v17) << 16) - v16 + v13;
  v19 = 0LL;
  if ( v15 < *(_DWORD *)(v18 + 20) )
  {
    v59 = 16LL * (unsigned __int8)v15;
    v20 = *(_QWORD **)(v18 + 24);
    v58 = 8 * ((unsigned __int64)v15 >> 8);
    v63 = v59 + *(_QWORD *)(*v20 + v58);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v63, 0LL);
    if ( v15 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + v58) + v59 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v15 + 8) |= 1u;
      v19 = 24LL * v15 + *(_QWORD *)v18;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v63, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v60 = (_DWORD *)v19;
  if ( !v19 )
    goto LABEL_53;
  _m_prefetchw((const void *)(v19 + 8));
  v21 = *(_DWORD *)(v19 + 8);
  v62 = v21;
  if ( !a3 )
  {
    v22 = v21 & 0xFFFFFFFE;
    if ( v22 != (v57 & 0xFFFFFFFC) && v22 && (!v11 || v22 != *(_DWORD *)(v11 + 8)) )
      goto LABEL_54;
    if ( (*(_BYTE *)(v19 + 15) & 0x20) != 0 )
      goto LABEL_54;
  }
  if ( (*(_BYTE *)(v19 + 15) & 0x40) == 0 )
    goto LABEL_19;
  v48 = *(_DWORD *)v19;
  v49 = gpHandleManager;
  v50 = GdiHandleManager::DecodeIndex(gpHandleManager, v48 & 0xFFFFFF);
  v51 = *((_QWORD *)v49 + 2);
  v52 = v50;
  v53 = *(_DWORD *)(v51 + 2056);
  if ( v50 >= v53 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
    goto LABEL_74;
  v54 = ((v50 - v53) >> 16) + 1;
  if ( v50 < v53 )
    v54 = 0LL;
  v55 = *(_QWORD *)(v51 + 8 * v54 + 8);
  if ( (_DWORD)v54 )
    v52 = ((1 - (_DWORD)v54) << 16) - v53 + v50;
  if ( (unsigned int)v52 >= *(_DWORD *)(v55 + 20) )
LABEL_74:
    v56 = 0LL;
  else
    v56 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v52 >> 8)) + 16LL * (unsigned __int8)v52 + 8);
  if ( !*(_WORD *)(v56 + 12) || *(struct _KTHREAD **)(v56 + 16) != KeGetCurrentThread() )
  {
LABEL_54:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
    if ( !v61 )
      return v4;
  }
  v19 = (__int64)v60;
LABEL_19:
  if ( *(_BYTE *)(v19 + 14) == a2 && *(_WORD *)(v19 + 12) == HIWORD(a1) && (!a3 || (*(_BYTE *)(v19 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = (__int64)v60;
    v24 = *v60 & 0xFFFFFF;
    if ( v24 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v60,
                                    1)
             + 13) == HIWORD(v24) )
          v24 = (unsigned __int16)v24;
      }
      else
      {
        v24 = *(unsigned __int16 *)v60;
      }
    }
    v25 = *((_QWORD *)gpHandleManager + 2);
    v26 = *(_DWORD *)(v25 + 2056);
    if ( v24 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
      goto LABEL_83;
    v27 = ((v24 - v26) >> 16) + 1;
    if ( v24 < v26 )
      v27 = 0LL;
    v28 = *(_QWORD *)(v25 + 8 * v27 + 8);
    if ( (_DWORD)v27 )
      v24 += ((1 - (_DWORD)v27) << 16) - v26;
    if ( v24 >= *(_DWORD *)(v28 + 20) )
LABEL_83:
      v4 = 0LL;
    else
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                     + 16LL * (unsigned __int8)v24
                     + 8);
    v29 = *(_WORD *)(v4 + 12);
    if ( !v29 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
    {
      *(_QWORD *)(v4 + 16) = CurrentThread;
      *(_WORD *)(v4 + 12) = v29 + 1;
    }
    else
    {
      v4 = 0LL;
    }
  }
  v30 = *(_DWORD *)v19 & 0xFFFFFF;
  if ( v30 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v30,
                                  1)
           + 13) == HIWORD(v30) )
        v30 = (unsigned __int16)v30;
    }
    else
    {
      v30 = (unsigned __int16)v30;
    }
  }
  v31 = gpHandleManager;
  v32 = *((_QWORD *)gpHandleManager + 2);
  v33 = *(_DWORD *)(v32 + 2056);
  if ( v30 >= v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16) )
    goto LABEL_87;
  v34 = ((v30 - v33) >> 16) + 1;
  if ( v30 < v33 )
    v34 = 0LL;
  v35 = *(_QWORD *)(v32 + 8 * v34 + 8);
  if ( (_DWORD)v34 )
    v30 += ((1 - (_DWORD)v34) << 16) - v33;
  if ( v30 >= *(_DWORD *)(v35 + 20) )
LABEL_87:
    v36 = 0LL;
  else
    v36 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                     + 16LL * (unsigned __int8)v30
                     + 8);
  v37 = (unsigned __int16)*v36;
  v38 = v37 | (*v36 >> 8) & 0xFF0000;
  if ( v38 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v37,
                                  1)
           + 13) == HIWORD(v38) )
        v38 = (unsigned __int16)v38;
    }
    else
    {
      v38 = (unsigned __int16)v37;
    }
  }
  v39 = *((_QWORD *)v31 + 2);
  v40 = *(_DWORD *)(v39 + 2056);
  if ( v38 < v40 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
  {
    v41 = ((v38 - v40) >> 16) + 1;
    if ( v38 < v40 )
      v41 = 0LL;
    v42 = *(_QWORD *)(v39 + 8 * v41 + 8);
    if ( (_DWORD)v41 )
      v38 += ((1 - (_DWORD)v41) << 16) - v40;
    *(_DWORD *)(*(_QWORD *)v42 + 24LL * v38 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v38 >> 8)) + 16LL * (unsigned __int8)v38,
      0LL);
    KeLeaveCriticalRegion();
  }
LABEL_53:
  KeLeaveCriticalRegion();
  return v4;
}
