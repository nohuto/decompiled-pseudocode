/*
 * XREFs of NtUserAttachThreadInput @ 0x1C00396C0
 * Callers:
 *     <none>
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D34F4 (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ecx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_19;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 448) || !*(_QWORD *)(v9 + 448) )
    goto LABEL_19;
  v11 = *(_DWORD *)(v8 + 1224) & 0x40000;
  if ( !a3 )
  {
    if ( !v11 )
    {
      if ( (*(_DWORD *)(v9 + 1224) & 0x40000) == 0 )
        goto LABEL_8;
      v18 = v8;
      v19 = v9;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v9 + 1224) & 0x40000) == 0 )
    {
      v18 = v9;
      v19 = v8;
LABEL_17:
      DisassociateShellFrameAppThreads2(v19, v18);
      goto LABEL_8;
    }
LABEL_19:
    v17 = 87LL;
    goto LABEL_20;
  }
  if ( v11 || (*(_DWORD *)(v9 + 1224) & 0x40000) != 0 )
  {
    v17 = 5LL;
LABEL_20:
    UserSetLastError(v17);
    goto LABEL_10;
  }
LABEL_8:
  v12 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v12 < 0 )
  {
    v17 = RtlNtStatusToDosError(v12);
    goto LABEL_20;
  }
  v7 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v14, v13, v15);
  return v7;
}
