/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180037394
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180037290 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B7E40 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180037740 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800377F4 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x1800A9CA0 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rax
  int started; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  CDesktopManager *v16; // rcx
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v22; // [rsp+60h] [rbp+8h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_WORD *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)v11 = &CAnimationEngine::CTransitionVisualSet::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 16) = v10;
    *(_DWORD *)(v11 + 28) = a2;
  }
  v22 = (CBaseObject *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v20 = 128;
    goto LABEL_19;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
  v13 = started;
  if ( started >= 0 )
  {
    v14 = *((_DWORD *)this + 16);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v15 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v14) = v22;
        *((_DWORD *)this + 16) = v15;
LABEL_10:
        v16 = CDesktopManager::s_pDesktopManagerInstance;
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(v16);
        v13 = started;
        if ( started >= 0 )
          goto LABEL_11;
        v20 = 135;
        goto LABEL_22;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v22);
      v13 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
      if ( v13 >= 0 )
        goto LABEL_10;
    }
    v20 = 131;
LABEL_19:
    v19 = v13;
    goto LABEL_23;
  }
  v20 = 130;
LABEL_22:
  v19 = started;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
  if ( v22 )
    CBaseObject::Release(v22);
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v13;
}
