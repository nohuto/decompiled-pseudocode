/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YGJKIPAUtagDEBUGHOOKINFO@@@Z @ 0x15F2AE
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 *     _GetDebugHookLParamSize@8 @ 0x18A274 (_GetDebugHookLParamSize@8.c)
 */

size_t __userpurge NtUserfnHkINLPDEBUGHOOKSTRUCT@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagDEBUGHOOKINFO *a5)
{
  const void *v6; // esi
  SIZE_T DebugHookLParamSize; // eax
  int v10[6]; // [esp+1Ch] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v10, 0, 20);
  ms_exc.registration.TryLevel = 0;
  v6 = (const void *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v6 = (const void *)a3;
  qmemcpy(v10, v6, 0x14u);
  DebugHookLParamSize = GetDebugHookLParamSize(a1, v10);
  ProbeForRead((volatile void *)v10[2], DebugHookLParamSize, 1u);
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(a2, a1, v10);
}
