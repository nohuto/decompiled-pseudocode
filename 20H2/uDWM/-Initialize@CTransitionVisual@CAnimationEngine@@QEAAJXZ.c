/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x180035528
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800353E4 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003523C (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(CAnimationEngine::CTransitionVisual *this)
{
  unsigned int v1; // r14d
  CAnimationEngine::CTransitionVariable **v2; // rbx
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rax

  v1 = 0;
  v2 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 8);
  v5 = 7LL;
  while ( 1 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     24LL);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    *v4 = v6;
    if ( !v6 )
      break;
    ++v3;
    ++v4;
    if ( v3 >= 7 )
      return v1;
  }
  v1 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5FBu);
  do
  {
    if ( *v2 )
    {
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v2);
      *v2 = 0LL;
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  return v1;
}
