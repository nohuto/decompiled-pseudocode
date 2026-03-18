/*
 * XREFs of _NtUserIsTouchWindow@8 @ 0x165BA0
 * Callers:
 *     <none>
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserIsTouchWindow(int a1, unsigned int *a2)
{
  int v2; // esi
  int v3; // eax
  int Prop; // eax
  unsigned int *v5; // edx

  v2 = 1;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 && (Prop = _GetProp(v3, (unsigned __int16)gatomTouchFlags, 1), (Prop & 0x10000) != 0) )
  {
    if ( a2 )
    {
      v5 = a2;
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        v5 = (unsigned int *)_MmUserProbeAddress;
      *v5 = *v5;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v2 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
