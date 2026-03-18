/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0128E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // r9d

  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 176);
  v7 = 0;
  if ( !v6 || !*(_QWORD *)(v5 + 168) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 20;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v12 = 21;
LABEL_16:
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v2, v5, 2, v12, (__int64)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v4 + 288) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v12 = 22;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v4 + 272) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 23;
      goto LABEL_16;
    }
LABEL_17:
    UserSetLastError(5LL, v5, v3);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v4 + 280);
  *(_DWORD *)(v4 + 272) = 0;
  *(_QWORD *)(v4 + 288) = gptiCurrent;
  v7 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v7;
}
