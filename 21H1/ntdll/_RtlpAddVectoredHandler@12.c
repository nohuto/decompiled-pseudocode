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

_RTL_SRWLOCK *__userpurge RtlpAddVectoredHandler@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<esi>, int a4)
{
  int v5; // eax
  PVOID ProcessHeap; // eax
  _RTL_SRWLOCK *Heap; // esi
  struct _PEB *v8; // eax
  _DWORD *v9; // eax
  PULONG v10; // eax
  PRTL_SRWLOCK *v11; // ebx
  _RTL_SRWLOCK **v12; // edi
  _RTL_SRWLOCK *v13; // eax
  int v15; // eax
  int v16; // eax
  _RTL_SRWLOCK **v17; // eax
  SIZE_T v18; // [esp-Ch] [ebp-1Ch]
  SIZE_T v19; // [esp-Ch] [ebp-1Ch]
  ULONG *ProcessInformation; // [esp+8h] [ebp-8h] BYREF
  unsigned __int64 PolicyValue; // [esp+Ch] [ebp-4h] BYREF

  if ( (int)LdrEnsureMrdataHeapExists() >= 0
    && (RtlQueryProtectedPolicy((PGUID)&PolicyGuid, &PolicyValue) < 0 || !(_DWORD)PolicyValue) )
  {
    LdrProtectMrdataHeap(0);
    LOBYTE(v5) = LdrControlFlowGuardEnforced();
    if ( v5 )
      ProcessHeap = LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    HIDWORD(v18) = a3;
    LODWORD(v18) = 20;
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(ProcessHeap, 0, v18);
    if ( !Heap )
      goto LABEL_14;
    v8 = NtCurrentPeb();
    LODWORD(v19) = 4;
    Heap[3].Value = 0;
    v9 = RtlAllocateHeap(v8->ProcessHeap, 0, v19);
    Heap[2].Value = (unsigned int)v9;
    if ( !v9 )
    {
      LOBYTE(v15) = LdrControlFlowGuardEnforced();
      if ( v15 )
        RtlFreeHeap(LdrpMrdataHeap, 0, Heap);
      else
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      Heap = 0;
      goto LABEL_14;
    }
    *v9 = 1;
    v10 = `RtlpGetCookieValue'::`2'::CookieValue;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v16 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
      if ( v16 < 0 )
        RtlRaiseStatus(v16);
      v10 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    Heap[4].Value = __ROR4__(a1 ^ (unsigned int)v10, (unsigned __int8)v10 & 0x1F);
    v11 = (PRTL_SRWLOCK *)(&LdrpVectorHandlerList + 3 * a4);
    v12 = v11 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*v11);
    if ( *v12 == (_RTL_SRWLOCK *)v12 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->40, a4 + 2);
    if ( a2 )
    {
      v13 = *v12;
      if ( (_RTL_SRWLOCK **)(*v12)[1].Value == v12 )
      {
        Heap->Value = (unsigned int)v13;
        Heap[1].Value = (unsigned int)v12;
        v13[1].Value = (unsigned int)Heap;
        *v12 = Heap;
LABEL_13:
        RtlReleaseSRWLockExclusive(*v11);
        LdrProtectMrdata(1);
LABEL_14:
        LdrProtectMrdataHeap(1);
        return Heap;
      }
    }
    else
    {
      v17 = (_RTL_SRWLOCK **)v11[2];
      if ( *v17 == (_RTL_SRWLOCK *)v12 )
      {
        Heap->Value = (unsigned int)v12;
        Heap[1].Value = (unsigned int)v17;
        *v17 = Heap;
        v11[2] = Heap;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  return 0;
}
