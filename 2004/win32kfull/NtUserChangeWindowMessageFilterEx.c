/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C0037270
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilterEx @ 0x1C0037408 (_ChangeWindowMessageFilterEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]

  HIDWORD(v20) = 0;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( !v11 )
  {
    v15 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v21;
  *((_QWORD *)&v21 + 1) = v11;
  HMLockObject(v11);
  if ( *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) )
  {
    v18 = 5LL;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v11 + 40);
  if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
  {
    v18 = 1400LL;
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
    v18 = 87LL;
LABEL_19:
    v15 = 0;
    UserSetLastError(v18);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v20) = 8;
LABEL_10:
    v15 = ChangeWindowMessageFilterEx((struct tagWND *)v11, a2);
    if ( v15 && a4 )
    {
      v14 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v14 > MmUserProbeAddress )
      {
        v14 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v20;
    }
    goto LABEL_16;
  }
  v19 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    v19 = (__int64 *)MmUserProbeAddress;
  v20 = *v19;
  if ( (unsigned int)*v19 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v15 = 0;
LABEL_16:
  ThreadUnlock1(v14, v13, v16);
LABEL_17:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v15;
}
