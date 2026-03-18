/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0084160
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0014CE8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0014E70 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C007B390 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B770 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
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
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rdi
  struct _KTHREAD *v35; // rbp
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // r15
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v48; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // [rsp+50h] [rbp+8h]

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
  v54 = (_QWORD *)*v10;
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
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v42 = PsGetCurrentProcess(v20, v19),
        v43 = PsGetProcessSessionIdEx(v42),
        v45 = PsGetCurrentThreadProcess(v44),
        v43 == (unsigned int)PsGetProcessSessionIdEx(v45)) )
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
            if ( !(unsigned __int8)KeIsAttachedProcess(v27)
              || (CurrentProcess = PsGetCurrentProcess(v29, v28),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v48),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v30 = (__int64 *)PsGetThreadWin32Thread(v25);
              if ( v30 )
                v26 = *v30;
            }
            v24[2] = v23;
            v24[3] = CleanUpRegion;
            if ( v26 )
            {
              v31 = *(_QWORD *)(v26 + 88);
              v32 = (_QWORD *)(v26 + 88);
              if ( *(_QWORD *)(v31 + 8) != v26 + 88 )
                goto LABEL_40;
              *v24 = v31;
              v24[1] = v32;
              *(_QWORD *)(v31 + 8) = v24;
              *v32 = v24;
            }
            else
            {
              v24[1] = v24;
              *v24 = v24;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( v54 != v10 )
        {
          v33 = *(_QWORD **)a2;
          v34 = v33 + 6;
          if ( v33 != (_QWORD *)-48LL )
          {
            KeEnterCriticalRegion();
            v35 = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v36)
              || (v50 = PsGetCurrentProcess(v38, v37),
                  v51 = PsGetProcessSessionIdEx(v50),
                  v53 = PsGetCurrentThreadProcess(v52),
                  v51 == (unsigned int)PsGetProcessSessionIdEx(v53)) )
            {
              v39 = (__int64 *)PsGetThreadWin32Thread(v35);
              if ( v39 )
                v22 = *v39;
            }
            v33[8] = v33;
            v33[9] = CleanUpRegion;
            if ( !v22 )
            {
              v33[7] = v33 + 6;
              *v34 = v34;
              goto LABEL_30;
            }
            v40 = *(_QWORD *)(v22 + 88);
            v41 = (_QWORD *)(v22 + 88);
            if ( *(_QWORD **)(v40 + 8) == v41 )
            {
              *v34 = v40;
              v33[7] = v41;
              *(_QWORD *)(v40 + 8) = v34;
              *v41 = v34;
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
