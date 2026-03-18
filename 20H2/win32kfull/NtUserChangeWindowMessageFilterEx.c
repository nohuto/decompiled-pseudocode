/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C0019CE0
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilterEx @ 0x1C0019E78 (_ChangeWindowMessageFilterEx.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h]

  HIDWORD(v18) = 0;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( !v9 )
  {
    v13 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v19;
  *((_QWORD *)&v19 + 1) = v9;
  HMLockObject(v9);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) )
  {
    v16 = 5LL;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(v9 + 40);
  if ( *(char *)(v10 + 20) < 0 || *(char *)(v10 + 19) < 0 )
  {
    v16 = 1400LL;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v16 = 87LL;
LABEL_19:
    v13 = 0;
    UserSetLastError(v16);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v18) = 8;
LABEL_10:
    v13 = ChangeWindowMessageFilterEx((struct tagWND *)v9, a2);
    if ( v13 && a4 )
    {
      v12 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v12 > MmUserProbeAddress )
      {
        v12 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v18;
    }
    goto LABEL_16;
  }
  v17 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    v17 = (__int64 *)MmUserProbeAddress;
  v18 = *v17;
  if ( (unsigned int)*v17 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v13 = 0;
LABEL_16:
  ThreadUnlock1(v12, v11, v14);
LABEL_17:
  UserSessionSwitchLeaveCrit(v8);
  return v13;
}
