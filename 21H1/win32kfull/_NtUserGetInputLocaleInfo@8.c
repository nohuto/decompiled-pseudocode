/*
 * XREFs of _NtUserGetInputLocaleInfo@8 @ 0xA7F96
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _HKLtoPKLq@8 @ 0xA8054 (_HKLtoPKLq@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetInputLocaleInfo(int a1, ULONG a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  void *v5; // edi
  _DWORD *v6; // edx
  _DWORD v8[10]; // [esp+10h] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v2 = 0;
  v3 = EnterSharedCrit(0, 1);
  v8[8] = v3;
  if ( a1 )
    v4 = HKLtoPKLq(v3);
  else
    v4 = *(_DWORD *)(v3 + 240);
  if ( v4 )
  {
    ms_exc.registration.TryLevel = 0;
    v5 = (void *)a2;
    v6 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    if ( *v6 == 24 )
    {
      ms_exc.registration.TryLevel = -2;
      v8[0] = 24;
      v8[1] = *(_DWORD *)(v4 + 20);
      v8[2] = *(_DWORD *)(v4 + 64);
      v8[3] = *(unsigned __int16 *)(v4 + 40);
      v8[4] = *(_DWORD *)(v4 + 32);
      v8[5] = *(_DWORD *)(v4 + 36);
      ms_exc.registration.TryLevel = 1;
      if ( a2 >= _MmUserProbeAddress )
        v5 = (void *)_MmUserProbeAddress;
      qmemcpy(v5, v8, 0x18u);
      ms_exc.registration.TryLevel = -2;
      v2 = 1;
    }
    else
    {
      v8[9] = 0;
      UserSetLastError((struct _NT_TIB *)0x57);
      ms_exc.registration.TryLevel = -2;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)6);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
