/*
 * XREFs of _NtUserSetScrollInfo@16 @ 0x8DC38
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserSetScrollInfo(int a1, unsigned int a2, ULONG a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  const void *v8; // esi
  int v10; // [esp+14h] [ebp-4Ch] BYREF
  int v11; // [esp+18h] [ebp-48h]
  int v12; // [esp+1Ch] [ebp-44h]
  ULONG v13; // [esp+24h] [ebp-3Ch]
  _BYTE v14[32]; // [esp+28h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v13 = a3;
  memset(v14, 0, 0x1Cu);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v10 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v10;
      v11 = v5;
      HMLockObject(v5);
      if ( a2 > 3 )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      else
      {
        ms_exc.registration.TryLevel = 0;
        v8 = (const void *)_MmUserProbeAddress;
        if ( v13 < _MmUserProbeAddress )
          v8 = (const void *)v13;
        qmemcpy(v14, v8, 0x1Cu);
        ms_exc.registration.TryLevel = -2;
        v4 = xxxSetScrollBar(v6, v14, a4);
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
