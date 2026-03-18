/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00EF1D0
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00EF4E4 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0151D40 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029432C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  UMPDOBJ *v16; // rcx
  int v17; // eax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  struct _UMPDHEAP *v31; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v34; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = CurrentProcessWin32Process;
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v34),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v6 || !v7 )
    return 0LL;
  v14 = PsGetCurrentProcessWin32Process(v13);
  v16 = (UMPDOBJ *)v14;
  if ( v14 )
    v17 = *(_DWORD *)(v14 + 264) | *(_DWORD *)(v14 + 12) & 0x80;
  else
    v17 = 0;
  *((_DWORD *)this + 106) = v17;
  if ( v17 )
  {
    v29 = v7[8];
    if ( v29 )
    {
      *((_QWORD *)this + 49) = v29;
      *(_DWORD *)(v29 + 56) = 0;
    }
    else
    {
      PROXYPORT::PROXYPORT((PROXYPORT *)&v40, v15);
      v30 = v40;
      if ( !v40 )
        return 0LL;
      *((_QWORD *)this + 49) = v40;
      v7[8] = v30;
    }
    *((_QWORD *)this + 3) = v7;
    goto LABEL_14;
  }
  if ( (_QWORD *)v7[5] != v7 + 5 )
  {
    UMPDHeap = UMPDOBJ::CreateUMPDHeap(v16);
    goto LABEL_12;
  }
  UMPDHeap = (struct _UMPDHEAP *)v7[7];
  if ( UMPDHeap )
  {
    *((_DWORD *)UMPDHeap + 6) = 0;
LABEL_12:
    *((_QWORD *)this + 7) = UMPDHeap;
    goto LABEL_13;
  }
  v31 = UMPDOBJ::CreateUMPDHeap(v16);
  *((_QWORD *)this + 7) = v31;
  v7[7] = v31;
LABEL_13:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_14:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 106) )
    {
      v20 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v19)
        || (v36 = PsGetCurrentProcess(v22, v21, v23),
            v37 = PsGetProcessSessionIdEx(v36),
            v39 = PsGetCurrentThreadProcess(v38),
            v37 == (unsigned int)PsGetProcessSessionIdEx(v39)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v24 )
          v5 = *v24;
      }
      v25 = (__int64 *)(v5 + 40);
      v26 = (_QWORD *)((char *)this + 40);
      v27 = *v25;
      if ( *(__int64 **)(*v25 + 8) != v25 )
        __fastfail(3u);
      *v26 = v27;
      *((_QWORD *)this + 6) = v25;
      *(_QWORD *)(v27 + 8) = v26;
      *v25 = (__int64)v26;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    LODWORD(v5) = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return (unsigned int)v5;
}
