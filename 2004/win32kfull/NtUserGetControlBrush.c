/*
 * XREFs of NtUserGetControlBrush @ 0x1C0143D40
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x1C0143E24 (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 ControlBrush; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    if ( a2 && (unsigned int)(a3 - 306) <= 6 )
      ControlBrush = xxxGetControlBrush(v11);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return ControlBrush;
}
