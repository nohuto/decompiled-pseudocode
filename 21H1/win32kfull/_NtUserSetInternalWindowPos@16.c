/*
 * XREFs of _NtUserSetInternalWindowPos@16 @ 0x169647
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 */

int __stdcall NtUserSetInternalWindowPos(int a1, int a2, ULONG a3, ULONG a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int *v8; // ecx
  _DWORD *v9; // eax
  int v11; // [esp+14h] [ebp-40h] BYREF
  int v12; // [esp+18h] [ebp-3Ch]
  int v13; // [esp+1Ch] [ebp-38h]
  int v14; // [esp+20h] [ebp-34h] BYREF
  ULONG v15; // [esp+24h] [ebp-30h]
  _DWORD v16[5]; // [esp+28h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v15 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v11 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v11;
      v12 = v5;
      HMLockObject(v5);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError((struct _NT_TIB *)0x3EC);
      }
      else
      {
        ms_exc.registration.TryLevel = 0;
        v8 = (int *)_MmUserProbeAddress;
        v9 = (_DWORD *)v15;
        if ( v15 >= _MmUserProbeAddress )
          v9 = (_DWORD *)_MmUserProbeAddress;
        v16[0] = *v9;
        v16[1] = v9[1];
        v16[2] = v9[2];
        v16[3] = v9[3];
        if ( a4 < _MmUserProbeAddress )
          v8 = (int *)a4;
        v14 = *v8;
        v15 = v8[1];
        ms_exc.registration.TryLevel = -2;
        v4 = xxxSetInternalWindowPos(v6, v16, &v14);
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
