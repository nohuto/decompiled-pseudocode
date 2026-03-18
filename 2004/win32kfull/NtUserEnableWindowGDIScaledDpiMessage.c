/*
 * XREFs of NtUserEnableWindowGDIScaledDpiMessage @ 0x1C0152670
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableWindowGDIScaledDpiMessageX @ 0x1C0152734 (xxxEnableWindowGDIScaledDpiMessageX.c)
 */

__int64 __fastcall NtUserEnableWindowGDIScaledDpiMessage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    *((_QWORD *)&v14 + 1) = v4;
    HMLockObject(v4);
    v8 = xxxEnableWindowGDIScaledDpiMessageX(v9, a2);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
