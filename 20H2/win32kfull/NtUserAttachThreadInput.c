/*
 * XREFs of NtUserAttachThreadInput @ 0x1C011C3D0
 * Callers:
 *     <none>
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D26E4 (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // ecx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v9 = 0LL;
  v10 = v6;
  if ( !v6 )
    goto LABEL_19;
  v11 = PtiFromThreadId(a2);
  v12 = v11;
  if ( !v11 || !*(_QWORD *)(v10 + 456) || !*(_QWORD *)(v11 + 456) )
    goto LABEL_19;
  v7 = 0x40000LL;
  v13 = *(_DWORD *)(v10 + 1232) & 0x40000;
  if ( !a3 )
  {
    if ( !v13 )
    {
      if ( (*(_DWORD *)(v11 + 1232) & 0x40000) == 0 )
        goto LABEL_8;
      v18 = v10;
      v19 = v11;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v11 + 1232) & 0x40000) == 0 )
    {
      v18 = v11;
      v19 = v10;
LABEL_17:
      DisassociateShellFrameAppThreads2(v19, v18);
      goto LABEL_8;
    }
LABEL_19:
    v17 = 87LL;
    goto LABEL_20;
  }
  if ( v13 || (*(_DWORD *)(v11 + 1232) & 0x40000) != 0 )
  {
    v17 = 5LL;
LABEL_20:
    UserSetLastError(v17, v7, v8);
    goto LABEL_10;
  }
LABEL_8:
  v14 = zzzAttachThreadInput(v10, v12, a3 != 0);
  if ( v14 < 0 )
  {
    v17 = RtlNtStatusToDosError(v14);
    goto LABEL_20;
  }
  v9 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v15);
  return v9;
}
