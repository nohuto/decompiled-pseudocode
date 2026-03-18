/*
 * XREFs of _NtUserAttachThreadInput@12 @ 0xC4BFA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _DisassociateShellFrameAppThreads2@8 @ 0x141CCF (_DisassociateShellFrameAppThreads2@8.c)
 */

int __stdcall NtUserAttachThreadInput(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  NTSTATUS v8; // eax
  int v10; // edx
  int v11; // ecx
  struct _NT_TIB *v12; // ecx
  int v13; // [esp-4h] [ebp-10h]

  v3 = 0;
  EnterCrit(0, 1);
  v4 = PtiFromThreadId(a1);
  if ( !v4 || (v5 = PtiFromThreadId(a2), (v6 = v5) == 0) || !*(_DWORD *)(v4 + 248) || !*(_DWORD *)(v5 + 248) )
  {
LABEL_12:
    v13 = 87;
LABEL_16:
    v12 = (struct _NT_TIB *)v13;
LABEL_17:
    UserSetLastError(v12);
    goto LABEL_10;
  }
  v7 = *(_DWORD *)(v4 + 688) & 0x40000;
  if ( !a3 )
  {
    if ( !v7 )
    {
      if ( (*(_DWORD *)(v6 + 688) & 0x40000) == 0 )
        goto LABEL_8;
      v10 = v4;
      v11 = v6;
      goto LABEL_20;
    }
    if ( (*(_DWORD *)(v6 + 688) & 0x40000) == 0 )
    {
      v10 = v6;
      v11 = v4;
LABEL_20:
      DisassociateShellFrameAppThreads2(v11, v10);
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  if ( v7 || (*(_DWORD *)(v6 + 688) & 0x40000) != 0 )
  {
    v13 = 5;
    goto LABEL_16;
  }
LABEL_8:
  v8 = zzzAttachThreadInput(a3 != 0);
  if ( v8 < 0 )
  {
    v12 = (struct _NT_TIB *)RtlNtStatusToDosError(v8);
    goto LABEL_17;
  }
  v3 = 1;
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v3;
}
