/*
 * XREFs of _NtUserGetImeInfoEx@8 @ 0xA1772
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetImeInfoEx@12 @ 0xA1848 (_GetImeInfoEx@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserGetImeInfoEx(_BYTE *a1, int a2)
{
  int ImeInfo; // [esp+18h] [ebp-17Ch]
  _BYTE v4[348]; // [esp+1Ch] [ebp-178h] BYREF
  CPPEH_RECORD ms_exc; // [esp+17Ch] [ebp-18h]

  memset(v4, 0, sizeof(v4));
  EnterSharedCrit(0, 1);
  if ( (*_gpsi & 4) != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a1 = *a1;
    a1[347] = a1[347];
    qmemcpy(v4, a1, sizeof(v4));
    ms_exc.registration.TryLevel = -2;
    PsGetCurrentProcessWin32Process();
    ImeInfo = GetImeInfoEx(a2);
    qmemcpy(a1, v4, 0x15Cu);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit();
  return ImeInfo;
}
