/*
 * XREFs of ?NtUserfnHkINLPRECT@@YGJKIPAUtagRECT@@@Z @ 0x15F561
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPRECT@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  int *v5; // esi
  int *v6; // esi
  int v8; // [esp+14h] [ebp-30h] BYREF
  int v9; // [esp+18h] [ebp-2Ch]
  int v10; // [esp+1Ch] [ebp-28h]
  int v11; // [esp+20h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  v5 = (int *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v5 = (int *)a3;
  v8 = *v5;
  v6 = v5 + 1;
  v9 = *v6++;
  v10 = *v6;
  v11 = v6[1];
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(a2, a1, &v8);
}
