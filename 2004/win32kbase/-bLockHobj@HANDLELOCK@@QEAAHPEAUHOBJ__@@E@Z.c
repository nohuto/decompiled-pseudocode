/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0087120
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkLazyDelete @ 0x1C0026C30 (HmgMarkLazyDelete.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0087B70 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  char v3; // r12
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  GdiHandleManager *v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  char v22; // al
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-48h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+70h] [rbp+8h]
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v6 = 0LL;
  v39 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v39);
  if ( (!(unsigned __int8)KeIsAttachedProcess(v8)
     || (CurrentProcess = PsGetCurrentProcess(v10, v9),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v35 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v35 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v11 = gpHandleManager;
  v12 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == ((unsigned __int16)v4 | (v4 >> 8) & 0xFF0000) >> 16 )
        v12 = (unsigned __int16)v4;
    }
    else
    {
      v12 = (unsigned __int16)v4;
    }
  }
  v13 = *((_QWORD *)v11 + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v15 = ((v12 - v14) >> 16) + 1;
    if ( v12 < v14 )
      v15 = 0LL;
    v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
    if ( (_DWORD)v15 )
      v12 += ((1 - (_DWORD)v15) << 16) - v14;
    v17 = 0LL;
    if ( v12 < *(_DWORD *)(v16 + 20) )
    {
      v18 = 16LL * (unsigned __int8)v12;
      v36 = 8 * ((unsigned __int64)v12 >> 8);
      v37 = v18 + *(_QWORD *)(**(_QWORD **)(v16 + 24) + v36);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v37, 0LL);
      if ( v12 < *(_DWORD *)(v16 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + v36) + v18 + 8) )
      {
        *(_DWORD *)(*(_QWORD *)v16 + 24LL * v12 + 8) |= 1u;
        v17 = 24LL * v12 + *(_QWORD *)v16;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v37, 0LL);
        KeLeaveCriticalRegion();
      }
      v3 = a3;
    }
    *(_QWORD *)this = v17;
    if ( v17 )
    {
      _m_prefetchw((const void *)(v17 + 8));
      v19 = *(_DWORD *)(v17 + 8);
      v20 = v39;
      *((_DWORD *)this + 3) = v19;
      v21 = v19 & 0xFFFFFFFE;
      if ( v21 != (v20 & 0xFFFFFFFC) && v21 && (!v35 || v21 != *(_DWORD *)(v35 + 8)) )
        goto LABEL_51;
      v22 = *(_BYTE *)(v17 + 15);
      if ( (v22 & 0x20) != 0 )
        goto LABEL_51;
      if ( (v22 & 0x40) != 0 )
      {
        v28 = gpHandleManager;
        v29 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
        v30 = *((_QWORD *)v28 + 2);
        v31 = v29;
        v32 = *(_DWORD *)(v30 + 2056);
        if ( v29 < v32 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
        {
          v33 = ((v29 - v32) >> 16) + 1;
          if ( v29 < v32 )
            v33 = 0LL;
          v34 = *(_QWORD *)(v30 + 8 * v33 + 8);
          if ( (_DWORD)v33 )
            v31 = ((1 - (_DWORD)v33) << 16) - v32 + (unsigned int)v31;
          if ( (unsigned int)v31 < *(_DWORD *)(v34 + 20) )
            v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * (v31 >> 8)) + 16LL * (unsigned __int8)v31 + 8);
        }
        if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_51:
          HANDLELOCK::vUnlock(this);
      }
      goto LABEL_24;
    }
  }
  *((_DWORD *)this + 2) = 0;
  KeLeaveCriticalRegion();
LABEL_24:
  result = *((unsigned int *)this + 2);
  if ( (_DWORD)result && (*(_BYTE *)(*(_QWORD *)this + 14LL) != v3 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v4)) )
  {
    HANDLELOCK::vUnlock(this);
    return *((unsigned int *)this + 2);
  }
  return result;
}
