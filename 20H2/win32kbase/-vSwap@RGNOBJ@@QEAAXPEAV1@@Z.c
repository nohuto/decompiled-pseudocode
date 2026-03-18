/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003E1F0
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001CED8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C001D060 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037E20 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003CA50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C005C9E4 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rdi
  _QWORD *v10; // r12
  _QWORD *v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v22; // r15
  __int64 v23; // rbp
  _QWORD *v24; // rdi
  struct _KTHREAD *v25; // r13
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  _QWORD *v33; // rdi
  struct _KTHREAD *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // r15
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  _QWORD *v49; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)a2;
  v8 = v6 == -48;
  v9 = (_QWORD *)(v6 + 48);
  v10 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  v49 = (_QWORD *)*v10;
  v11 = (_QWORD *)*v9;
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    v12 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_40;
    v13 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v13 != v9 )
      goto LABEL_40;
    *v13 = v12;
    v12[1] = v13;
    v9[1] = v9;
    *v9 = v9;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v14 = (_QWORD *)(v7 + 48);
  if ( v7 != -48 )
  {
    KeEnterCriticalRegion();
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_40;
    v16 = (_QWORD *)v14[1];
    if ( (_QWORD *)*v16 != v14 )
      goto LABEL_40;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v14[1] = v14;
    *v14 = v14;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v17 = *(_QWORD *)this;
  *(_QWORD *)this = v7;
  *(_QWORD *)a2 = v17;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v20, v19),
        v41 = PsGetProcessSessionIdEx(v40),
        v42 = PsGetCurrentThreadProcess(),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v22 = 0LL;
        if ( v11 != v9 )
        {
          v23 = *(_QWORD *)this;
          v24 = (_QWORD *)(*(_QWORD *)this + 48LL);
          if ( *(_QWORD *)this != -48LL )
          {
            KeEnterCriticalRegion();
            v25 = KeGetCurrentThread();
            v26 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (CurrentProcess = PsGetCurrentProcess(v28, v27),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v29 = (__int64 *)PsGetThreadWin32Thread(v25);
              if ( v29 )
                v26 = *v29;
            }
            v24[2] = v23;
            v24[3] = CleanUpRegion;
            if ( v26 )
            {
              v30 = *(_QWORD *)(v26 + 88);
              v31 = (_QWORD *)(v26 + 88);
              if ( *(_QWORD *)(v30 + 8) != v26 + 88 )
                goto LABEL_40;
              *v24 = v30;
              v24[1] = v31;
              *(_QWORD *)(v30 + 8) = v24;
              *v31 = v24;
            }
            else
            {
              v24[1] = v24;
              *v24 = v24;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( v49 != v10 )
        {
          v32 = *(_QWORD **)a2;
          v33 = v32 + 6;
          if ( v32 != (_QWORD *)-48LL )
          {
            KeEnterCriticalRegion();
            v34 = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v46 = PsGetCurrentProcess(v36, v35),
                  v47 = PsGetProcessSessionIdEx(v46),
                  v48 = PsGetCurrentThreadProcess(),
                  v47 == (unsigned int)PsGetProcessSessionIdEx(v48)) )
            {
              v37 = (__int64 *)PsGetThreadWin32Thread(v34);
              if ( v37 )
                v22 = *v37;
            }
            v32[8] = v32;
            v32[9] = CleanUpRegion;
            if ( !v22 )
            {
              v32[7] = v32 + 6;
              *v33 = v33;
              goto LABEL_30;
            }
            v38 = *(_QWORD *)(v22 + 88);
            v39 = (_QWORD *)(v22 + 88);
            if ( *(_QWORD **)(v38 + 8) == v39 )
            {
              *v33 = v38;
              v32[7] = v39;
              *(_QWORD *)(v38 + 8) = v33;
              *v39 = v33;
LABEL_30:
              KeLeaveCriticalRegion();
              return;
            }
LABEL_40:
            __fastfail(3u);
          }
        }
      }
    }
  }
}
