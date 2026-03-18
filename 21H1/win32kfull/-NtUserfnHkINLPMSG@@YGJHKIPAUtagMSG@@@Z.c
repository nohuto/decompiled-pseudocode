/*
 * XREFs of ?NtUserfnHkINLPMSG@@YGJHKIPAUtagMSG@@@Z @ 0x15F41A
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPMSG@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagHOOK *a3,
        int *a4,
        unsigned int a5,
        struct tagMSG *a6)
{
  const void *v7; // esi
  int v8; // ecx
  size_t result; // eax
  int v10[7]; // [esp+10h] [ebp-40h] BYREF
  bool v11[4]; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  *(_DWORD *)v11 = a1;
  memset(v10, 0, sizeof(v10));
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( (unsigned int)a4 < _MmUserProbeAddress )
    v7 = a4;
  qmemcpy(v10, v7, sizeof(v10));
  ms_exc.registration.TryLevel = -2;
  if ( a2 == 3 && (IsTouchInputMessage((void *)v10[1]) || v8 == 281) )
  {
    v10[3] = *(_DWORD *)(_gptiCurrent + 384);
    v10[2] = *(_DWORD *)(_gptiCurrent + 388);
  }
  result = xxxCallNextHookEx(*(int *)v11, a3, v10);
  if ( a2 == 3 )
    qmemcpy(a4, v10, 0x1Cu);
  return result;
}
