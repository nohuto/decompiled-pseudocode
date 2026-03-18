/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800E21F0
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800E21A0 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180222B34 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802237DC (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802219C4 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  void **v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rcx

  *a2 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( a3 )
  {
    v7 = (void **)CManipulationManager::s_InputQueue;
    v8 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) == &CManipulationManager::s_InputQueue
      && *(void **)(v8 + 8) == CManipulationManager::s_InputQueue )
    {
      CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
      *(_QWORD *)(v8 + 8) = &CManipulationManager::s_InputQueue;
      goto LABEL_5;
    }
LABEL_10:
    __fastfail(3u);
  }
  v7 = (void **)qword_1803484B8;
  v11 = *(_QWORD **)(qword_1803484B8 + 8);
  if ( *(void ***)qword_1803484B8 != &CManipulationManager::s_InputQueue || *v11 != qword_1803484B8 )
    goto LABEL_10;
  qword_1803484B8 = *(_QWORD *)(qword_1803484B8 + 8);
  *v11 = &CManipulationManager::s_InputQueue;
LABEL_5:
  if ( v7 == &CManipulationManager::s_InputQueue )
  {
    v9 = dword_1803484C0;
  }
  else
  {
    v12 = (__int64 *)(v7 + 2);
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        *v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      operator delete(v7);
    }
    v9 = --dword_1803484C0;
  }
  if ( a4 )
    *a4 = v9;
  LeaveCriticalSection(&CriticalSection);
  return a2;
}
