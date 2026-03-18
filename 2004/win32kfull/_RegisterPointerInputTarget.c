/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01F2FA4
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C0201780 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C008CFD8 (UpdatePointerRedirIsAlive.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  int v6; // esi
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v11 = 87LL;
    goto LABEL_14;
  }
  UpdatePointerRedirIsAlive(v8);
  a2 = 216LL;
  if ( v6 != 2 )
    a2 = 224LL;
  v9 = (__int64 *)(a2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  v10 = *v9;
  if ( !a4 )
  {
    if ( v10 == a1 )
      HMAssignmentUnlock(v9);
    return 1LL;
  }
  if ( !v10 )
  {
    v13[0] = a2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    v13[1] = a1;
    HMAssignmentLock(v13);
    return 1LL;
  }
  if ( v10 == a1 )
    return 1LL;
  v11 = 5LL;
LABEL_14:
  UserSetLastError(v11, a2, a3);
  return 0LL;
}
