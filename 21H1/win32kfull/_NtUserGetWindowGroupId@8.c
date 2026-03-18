/*
 * XREFs of _NtUserGetWindowGroupId@8 @ 0xC5542
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetWindowGroupId(int a1, ULONG a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // edx
  _BYTE v7[8]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
    v4 = *(_DWORD *)(v3 + 180);
    ms_exc.registration.TryLevel = 0;
    v5 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v5 = (_DWORD *)_MmUserProbeAddress;
    *v5 = v4;
    ms_exc.registration.TryLevel = -2;
    v2 = 1;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
