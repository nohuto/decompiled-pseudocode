/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0040E60
 * Callers:
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  GdiHandleManager *v4; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // r11d
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  struct _KTHREAD *v23; // rcx
  struct HOBJ__ *v24; // rbx
  GdiHandleManager *v25; // rdi
  __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r9
  struct HOBJ__ *result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  signed __int32 v34[18]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v35; // [rsp+58h] [rbp+10h]

  v4 = gpHandleManager;
  v7 = a4;
  v8 = a3;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, a4);
  v10 = *((_QWORD *)v4 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    v15 = 0LL;
  }
  else
  {
    v13 = ((v9 - v12) >> 16) + 1;
    if ( v9 < v12 )
      v13 = 0LL;
    v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
    if ( (_DWORD)v13 )
      v11 = ((1 - (_DWORD)v13) << 16) - v12 + v9;
    v15 = 0LL;
    if ( v11 < *(_DWORD *)(v14 + 20)
      || GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v10 + 8 * v13 + 8), v11) )
    {
      v15 = *(_QWORD *)v14 + 24LL * v11;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v18, v17),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v20 = *ThreadWin32Thread) != 0
    && (v8 & 0x10) == 0 )
  {
    v21 = *(_QWORD *)(v20 + 72);
  }
  else
  {
    v21 = 0LL;
  }
  v22 = *(_DWORD *)(v15 + 8) & 1;
  *(_BYTE *)(v15 + 14) = a2;
  *(_BYTE *)(v15 + 15) = 0;
  *(_QWORD *)(v15 + 16) = 0LL;
  if ( (v8 & 8) == 0 )
  {
    if ( v21 )
      v22 |= *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
    else
      v22 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( v21 )
      v23 = *(struct _KTHREAD **)v21;
    else
      v23 = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = v23;
  }
  *((_WORD *)a1 + 6) = v8 & 1;
  *((_DWORD *)a1 + 2) = (v8 >> 1) & 1;
  *(_DWORD *)(v15 + 8) = v22;
  LOBYTE(v35) = a2;
  HIBYTE(v35) = BYTE2(v7);
  *(_WORD *)(v15 + 12) = v35;
  *(_QWORD *)(v15 + 16) = 0LL;
  if ( (v8 & 0x40) != 0 )
    *(_WORD *)(v15 + 12) = v35 | 0x80;
  if ( (v8 & 0x80u) != 0 )
    *(_BYTE *)(v15 + 15) |= 1u;
  *(_QWORD *)v15 = v7 | 0xFFFFFFFFFF000000uLL;
  v24 = (struct HOBJ__ *)((unsigned __int16)v7 | (unsigned __int64)(*(unsigned __int16 *)(v15 + 12) << 16));
  *(_QWORD *)a1 = v24;
  _InterlockedOr(v34, 0);
  v25 = gpHandleManager;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = (unsigned __int16)v7;
    }
    else
    {
      v7 = (unsigned __int16)v7;
    }
  }
  v26 = *((_QWORD *)v25 + 2);
  v27 = *(_DWORD *)(v26 + 2056);
  if ( v7 >= v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
    return v24;
  v28 = ((v7 - v27) >> 16) + 1;
  if ( v7 < v27 )
    v28 = 0LL;
  v29 = *(_QWORD *)(v26 + 8 * v28 + 8);
  if ( (_DWORD)v28 )
    v7 += ((1 - (_DWORD)v28) << 16) - v27;
  result = v24;
  if ( v7 < *(_DWORD *)(v29 + 20) )
    *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) = a1;
  return result;
}
