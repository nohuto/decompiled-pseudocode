/*
 * XREFs of ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YGJKIPAUtagKBDLLHOOKSTRUCT@@@Z @ 0x15F33E
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPKBDLLHOOKSTRUCT@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagKBDLLHOOKSTRUCT *a5)
{
  const void *v5; // esi
  int v7[6]; // [esp+14h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  memset(v7, 0, 20);
  ms_exc.registration.TryLevel = 0;
  v5 = (const void *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v5 = (const void *)a3;
  qmemcpy(v7, v5, 0x14u);
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(a2, a1, v7);
}
