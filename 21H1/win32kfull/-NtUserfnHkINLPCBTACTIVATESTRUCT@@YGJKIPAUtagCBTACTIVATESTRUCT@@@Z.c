/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YGJKIPAUtagCBTACTIVATESTRUCT@@@Z @ 0x15F091
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPCBTACTIVATESTRUCT@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagCBTACTIVATESTRUCT *a5)
{
  int *v6; // ecx
  int v8; // [esp+10h] [ebp-24h] BYREF
  int v9; // [esp+14h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v8 = 0;
  v9 = 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v6 = (int *)a3;
  v8 = *v6;
  v9 = v6[1];
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(a2, a1, &v8);
}
