/*
 * XREFs of NtUserSetSystemCursor @ 0x1C02034D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D490C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall NtUserSetSystemCursor(unsigned __int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct tagCURSOR *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3u);
  v8 = 0LL;
  v9 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v15[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v15;
    v15[1] = v9;
    HMLockObject(v9);
    v8 = (unsigned __int8)zzzSetSystemCursor(v9, a2);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
