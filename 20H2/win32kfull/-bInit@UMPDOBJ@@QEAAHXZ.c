/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0072524
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0115F38 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0154670 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0292EDC (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  UMPDOBJ *v20; // rcx
  int v21; // eax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  struct _UMPDHEAP *v35; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v38; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2, v4);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = CurrentProcessWin32Process;
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v38),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v8 || !v9 )
    return 0LL;
  v18 = PsGetCurrentProcessWin32Process(v16, v15, v17);
  v20 = (UMPDOBJ *)v18;
  if ( v18 )
    v21 = *(_DWORD *)(v18 + 264) | *(_DWORD *)(v18 + 12) & 0x80;
  else
    v21 = 0;
  *((_DWORD *)this + 106) = v21;
  if ( v21 )
  {
    v33 = v9[8];
    if ( v33 )
    {
      *((_QWORD *)this + 49) = v33;
      *(_DWORD *)(v33 + 48) = 0;
    }
    else
    {
      PROXYPORT::PROXYPORT((PROXYPORT *)&v44, v19);
      v34 = v44;
      if ( !v44 )
        return 0LL;
      *((_QWORD *)this + 49) = v44;
      v9[8] = v34;
    }
    *((_QWORD *)this + 3) = v9;
    goto LABEL_14;
  }
  if ( (_QWORD *)v9[5] != v9 + 5 )
  {
    UMPDHeap = UMPDOBJ::CreateUMPDHeap(v20);
    goto LABEL_12;
  }
  UMPDHeap = (struct _UMPDHEAP *)v9[7];
  if ( UMPDHeap )
  {
    *((_DWORD *)UMPDHeap + 6) = 0;
LABEL_12:
    *((_QWORD *)this + 7) = UMPDHeap;
    goto LABEL_13;
  }
  v35 = UMPDOBJ::CreateUMPDHeap(v20);
  *((_QWORD *)this + 7) = v35;
  v9[7] = v35;
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
      v24 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v23)
        || (v40 = PsGetCurrentProcess(v26, v25, v27),
            v41 = PsGetProcessSessionIdEx(v40),
            v43 = PsGetCurrentThreadProcess(v42),
            v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
      {
        v28 = (__int64 *)PsGetThreadWin32Thread(v24);
        if ( v28 )
          v7 = *v28;
      }
      v29 = (__int64 *)(v7 + 40);
      v30 = (_QWORD *)((char *)this + 40);
      v31 = *v29;
      if ( *(__int64 **)(*v29 + 8) != v29 )
        __fastfail(3u);
      *v30 = v31;
      *((_QWORD *)this + 6) = v29;
      *(_QWORD *)(v31 + 8) = v30;
      *v29 = (__int64)v30;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    LODWORD(v7) = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return (unsigned int)v7;
}
