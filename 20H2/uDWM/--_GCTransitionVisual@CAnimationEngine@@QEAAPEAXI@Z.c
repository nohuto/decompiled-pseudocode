/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800351C0
 * Callers:
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180035138 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800353E4 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003523C (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rbx
  __int64 v4; // rsi

  v3 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v4 = 7LL;
  do
  {
    if ( *v3 )
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
