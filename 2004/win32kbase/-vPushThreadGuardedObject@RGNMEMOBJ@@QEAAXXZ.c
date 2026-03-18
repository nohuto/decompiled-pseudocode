/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0014CE8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0014E70 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00266F0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B770 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C4BF0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C5AFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
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
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(this)
    || (v16 = PsGetCurrentProcess(v4, v3),
        v17 = PsGetProcessSessionIdEx(v16),
        v19 = PsGetCurrentThreadProcess(v18),
        v17 == (unsigned int)PsGetProcessSessionIdEx(v19)) )
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
            if ( !(unsigned __int8)KeIsAttachedProcess(v10)
              || (CurrentProcess = PsGetCurrentProcess(v12, v11),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v13 = (__int64 *)PsGetThreadWin32Thread(v8);
              if ( v13 )
                v9 = *v13;
            }
            v6[9] = CleanUpRegion;
            v6[8] = v6;
            if ( v9 )
            {
              v14 = *(_QWORD *)(v9 + 88);
              v15 = (_QWORD *)(v9 + 88);
              if ( *(_QWORD *)(v14 + 8) != v9 + 88 )
                __fastfail(3u);
              *v7 = v14;
              v6[7] = v15;
              *(_QWORD *)(v14 + 8) = v7;
              *v15 = v7;
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
