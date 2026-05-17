/*
 * XREFs of _RtlpAddVectoredHandler@12 @ 0x4B2AB096
 * Callers:
 *     _RtlAddVectoredExceptionHandler@8 @ 0x4B2AB080 (_RtlAddVectoredExceptionHandler@8.c)
 *     _RtlAddVectoredContinueHandler@8 @ 0x4B3383D0 (_RtlAddVectoredContinueHandler@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 *     _RtlQueryProtectedPolicy@8 @ 0x4B2ED030 (_RtlQueryProtectedPolicy@8.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

_DWORD *__fastcall RtlpAddVectoredHandler(int a1, int a2, int a3)
{
  void *ProcessHeap; // eax
  _DWORD *Heap; // esi
  struct _PEB *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v16; // [esp+8h] [ebp-8h] BYREF
  int v17; // [esp+Ch] [ebp-4h] BYREF

  if ( (int)LdrEnsureMrdataHeapExists() >= 0 && (RtlQueryProtectedPolicy(dword_4B284F0C, (int)&v17) < 0 || !v17) )
  {
    LdrProtectMrdataHeap(0);
    if ( LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (_DWORD *)RtlAllocateHeap(ProcessHeap, 0, 20);
    if ( !Heap )
      goto LABEL_14;
    v6 = NtCurrentPeb();
    Heap[3] = 0;
    v7 = (_DWORD *)RtlAllocateHeap(v6->ProcessHeap, 0, 4);
    Heap[2] = v7;
    if ( !v7 )
    {
      if ( LdrControlFlowGuardEnforced() )
        RtlFreeHeap(LdrpMrdataHeap, 0, Heap);
      else
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      Heap = 0;
      goto LABEL_14;
    }
    *v7 = 1;
    v8 = `RtlpGetCookieValue'::`2'::CookieValue;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v13 = ZwQueryInformationProcess(-1, 36, &v16, 4, 0);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
      v8 = v16;
      `RtlpGetCookieValue'::`2'::CookieValue = v16;
    }
    Heap[4] = __ROR4__(a2 ^ v8, v8 & 0x1F);
    v9 = &LdrpVectorHandlerList + 3 * a3;
    v10 = v9 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*v9);
    if ( (_DWORD *)*v10 == v10 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->40, a3 + 2);
    if ( a1 )
    {
      v11 = (_DWORD *)*v10;
      if ( *(_DWORD **)(*v10 + 4) == v10 )
      {
        *Heap = v11;
        Heap[1] = v10;
        v11[1] = Heap;
        *v10 = Heap;
LABEL_13:
        RtlReleaseSRWLockExclusive(*v9);
        LdrProtectMrdata(1);
LABEL_14:
        LdrProtectMrdataHeap(1);
        return Heap;
      }
    }
    else
    {
      v14 = (_DWORD *)v9[2];
      if ( (_DWORD *)*v14 == v10 )
      {
        *Heap = v10;
        Heap[1] = v14;
        *v14 = Heap;
        v9[2] = Heap;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  return 0;
}
