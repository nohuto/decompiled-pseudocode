/*
 * XREFs of _NtUserChangeWindowMessageFilterEx@16 @ 0x7FC14
 * Callers:
 *     <none>
 * Callees:
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserChangeWindowMessageFilterEx(int a1, int a2, unsigned int a3, int *a4)
{
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v8; // ecx
  int *v9; // esi
  int v10; // eax
  int v11; // [esp-4h] [ebp-48h]
  int v12; // [esp+10h] [ebp-34h] BYREF
  int v13; // [esp+14h] [ebp-30h]
  int v14; // [esp+18h] [ebp-2Ch]
  int v15; // [esp+1Ch] [ebp-28h] BYREF
  int v16; // [esp+20h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v15 = 0;
  v16 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( !v4 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v12;
  v13 = v4;
  HMLockObject(v4);
  if ( *(_DWORD *)(_gptiCurrent + 232) != *(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) )
  {
    v11 = 5;
    goto LABEL_16;
  }
  v5 = *(_DWORD *)(v4 + 20);
  if ( *(char *)(v5 + 12) < 0 || *(char *)(v5 + 11) < 0 )
  {
    v8 = 1400;
    goto LABEL_17;
  }
  if ( a3 > 2 )
    goto LABEL_15;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_15;
  }
  if ( !a2 )
  {
LABEL_15:
    v11 = 87;
LABEL_16:
    v8 = v11;
LABEL_17:
    v6 = 0;
    UserSetLastError(v8);
    goto LABEL_13;
  }
LABEL_8:
  if ( !a4 )
  {
    v15 = 8;
LABEL_10:
    v6 = _ChangeWindowMessageFilterEx(v4, a3, (int)&v15);
    ms_exc.registration.TryLevel = 1;
    if ( v6 && a4 )
    {
      if ( a4 + 2 < a4 || (unsigned int)(a4 + 2) > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *a4 = v15;
      a4[1] = v16;
    }
    ms_exc.registration.TryLevel = -2;
    goto LABEL_13;
  }
  ms_exc.registration.TryLevel = 0;
  v9 = a4;
  if ( a4 + 2 < a4 || (unsigned int)(a4 + 2) > _MmUserProbeAddress )
    v9 = (int *)_MmUserProbeAddress;
  v10 = v9[1];
  v15 = *v9;
  v16 = v10;
  ms_exc.registration.TryLevel = -2;
  if ( v15 == 8 )
    goto LABEL_10;
  UserSetLastError(87);
  v6 = 0;
LABEL_13:
  ThreadUnlock1();
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v6;
}
