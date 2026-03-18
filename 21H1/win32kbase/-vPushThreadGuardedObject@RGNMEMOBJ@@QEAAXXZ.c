/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0075940
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0016C30 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0032EF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0074628 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C00747B0 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0075008 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00751E0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075C60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C43F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C52FC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  struct _KTHREAD *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v15 = PsGetCurrentProcess(v4, v3),
        v16 = PsGetProcessSessionIdEx(v15),
        v17 = PsGetCurrentThreadProcess(),
        v16 == (unsigned int)PsGetProcessSessionIdEx(v17)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v6 = *(_QWORD **)this;
        if ( v6 )
        {
          v7 = v6 + 6;
          if ( v6 != (_QWORD *)-48LL )
          {
            KeEnterCriticalRegion();
            v8 = KeGetCurrentThread();
            v9 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (CurrentProcess = PsGetCurrentProcess(v11, v10),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v12 = (__int64 *)PsGetThreadWin32Thread(v8);
              if ( v12 )
                v9 = *v12;
            }
            v6[9] = CleanUpRegion;
            v6[8] = v6;
            if ( v9 )
            {
              v13 = *(_QWORD *)(v9 + 88);
              v14 = (_QWORD *)(v9 + 88);
              if ( *(_QWORD *)(v13 + 8) != v9 + 88 )
                __fastfail(3u);
              *v7 = v13;
              v6[7] = v14;
              *(_QWORD *)(v13 + 8) = v7;
              *v14 = v7;
            }
            else
            {
              v6[7] = v6 + 6;
              *v7 = v7;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
}
