/*
 * XREFs of ?NtUserfnHkOPTINLPEVENTMSG@@YGJKIPAUtagEVENTMSG@@@Z @ 0x15F5CE
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkOPTINLPEVENTMSG@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        void *a3,
        unsigned int a4,
        struct tagEVENTMSG *a5)
{
  size_t result; // eax
  _DWORD v6[5]; // [esp+14h] [ebp-38h] BYREF
  bool v7[4]; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  *(_DWORD *)v7 = a2;
  memset(v6, 0, sizeof(v6));
  if ( a3 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a3 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    qmemcpy(a3, a3, 0x14u);
    qmemcpy(v6, a3, sizeof(v6));
    ms_exc.registration.TryLevel = -2;
  }
  result = xxxCallNextHookEx(*(int *)v7, a1, a3 != 0 ? v6 : 0);
  if ( a3 )
    qmemcpy(a3, v6, 0x14u);
  return result;
}
