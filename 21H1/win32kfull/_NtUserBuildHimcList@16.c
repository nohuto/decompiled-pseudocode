/*
 * XREFs of _NtUserBuildHimcList@16 @ 0xABC28
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __BuildHimcList@12 @ 0xABCF6 (__BuildHimcList@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __stdcall NtUserBuildHimcList(int a1, unsigned int a2, volatile void *Address, unsigned int *a4)
{
  unsigned int *v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  int v9; // ecx
  _BYTE v10[8]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
  if ( (*_gpsi & 4) != 0 )
  {
    if ( !a1 || a1 == -1 )
      goto LABEL_3;
    v8 = PtiFromThreadId(a1);
    if ( !v8 || (v9 = *(_DWORD *)(v8 + 248)) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_7;
    }
    if ( v9 == *(_DWORD *)(_gptiCurrent + 248) )
    {
LABEL_3:
      ms_exc.registration.TryLevel = 0;
      if ( a2 > 0x3FFFFFFF )
        ExRaiseAccessViolation();
      ProbeForWrite(Address, 4 * a2, 4u);
      v4 = a4;
      if ( (unsigned int)a4 >= _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      *v4 = *v4;
      ms_exc.registration.TryLevel = -2;
      v5 = _BuildHimcList(Address);
      v6 = a2 < v5 ? 0xC0000023 : 0;
      *a4 = v5;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v6 = -1073741790;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
    v6 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  UserSessionSwitchLeaveCrit();
  return v6;
}
