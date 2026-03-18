/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YGJKIPAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x15F3B1
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPMOUSEHOOKSTRUCTEX@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagMOUSEHOOKSTRUCTEX *a5)
{
  const void *v5; // esi
  int v7[6]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v5 = (const void *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v5 = (const void *)a3;
  qmemcpy(v7, v5, sizeof(v7));
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(a2, a1, v7);
}
