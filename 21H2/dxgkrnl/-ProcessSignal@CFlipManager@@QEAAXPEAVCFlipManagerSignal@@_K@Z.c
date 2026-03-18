/*
 * XREFs of ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758
 * Callers:
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C00083B0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C000874C (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C00087A0 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C007BF68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007DDE4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007F350 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessSignal(CFlipManager *this, struct CFlipManagerSignal *a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v13; // rdx
  _QWORD **v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *i; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  CFlipManager::PresentHistory *v20; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v3 = (_QWORD *)((char *)a2 + 8);
  v7 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v8 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 )
    goto LABEL_21;
  v9 = *(_QWORD **)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8);
  if ( (_QWORD *)*v9 != v7 )
    goto LABEL_21;
  *v9 = v8;
  v10 = 0LL;
  *(_QWORD *)(v8 + 8) = v9;
  v7[1] = v7;
  for ( *v7 = v7; (unsigned int)v10 < *((_DWORD *)a2 + 8); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = *((_QWORD *)a2 + 3);
    CPoolBufferResource::RemoveUsageReference(*(CPoolBufferResource **)(v11 + 8 * v10));
    CFlipResource::Release(*(CFlipResource **)(v11 + 8 * v10));
    *(_QWORD *)(v11 + 8 * v10) = 0LL;
  }
  if ( !*((_QWORD *)this + 38) )
  {
    (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
    return;
  }
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 168LL))(
    *((unsigned int *)this + 82),
    *((_QWORD *)a2 + 6));
  v13 = *((_QWORD *)a2 + 6);
  v14 = (_QWORD **)((char *)this + 208);
  if ( v13 == *((_QWORD *)this + 33) )
  {
    CFlipManager::IssueAndFreeSignal(this, a2, a3);
    v15 = *v14;
    if ( *v14 != v14 )
    {
      do
      {
        v16 = (_QWORD *)*v15;
        if ( v15[5] != *((_QWORD *)this + 33) )
          break;
        CFlipManager::IssueAndFreeSignal(this, (struct CFlipManagerSignal *)(v15 - 1), a3);
        v15 = v16;
      }
      while ( v16 != v14 );
    }
    return;
  }
  for ( i = *v14; i != v14; i = (_QWORD *)*i )
  {
    v18 = (__int64)(i + 5);
    if ( !i )
      v18 = 48LL;
    if ( v13 < *(_QWORD *)v18 )
      break;
  }
  v19 = (_QWORD *)i[1];
  if ( (_QWORD *)*v19 != i )
LABEL_21:
    __fastfail(3u);
  *v3 = i;
  v3[1] = v19;
  *v19 = v3;
  i[1] = v3;
  v20 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v20 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v20);
    *(_QWORD *)NextEntry = a3;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 6);
    *((_DWORD *)NextEntry + 10) = 14;
  }
}
