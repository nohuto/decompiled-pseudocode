/*
 * XREFs of _NtUserSetWindowPlacement@8 @ 0xB2D14
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserSetWindowPlacement(int a1, ULONG a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  const void *v5; // esi
  _DWORD v7[11]; // [esp+10h] [ebp-5Ch] BYREF
  int v8; // [esp+3Ch] [ebp-30h] BYREF
  int v9; // [esp+40h] [ebp-2Ch]
  int v10; // [esp+44h] [ebp-28h]
  int v11; // [esp+50h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v2 = 0;
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v11 = v3;
  if ( v3 )
  {
    v4 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v3;
      HMLockObject(v3);
      ms_exc.registration.TryLevel = 0;
      v5 = (const void *)_MmUserProbeAddress;
      if ( a2 < _MmUserProbeAddress )
        v5 = (const void *)a2;
      qmemcpy(v7, v5, sizeof(v7));
      ms_exc.registration.TryLevel = -2;
      if ( v7[0] == 44 || *(_WORD *)(_gptiCurrent + 340) < 0x400u )
        v2 = xxxSetWindowPlacement(v11, v7);
      else
        UserSetLastError((struct _NT_TIB *)0x57);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
