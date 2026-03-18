/*
 * XREFs of PsQuerySystemDllInfo @ 0x14064CB2C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14031E1E4 (PspWow64PickBestNtdll.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x14064CAE0 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140A672CC (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140A6FEC8 (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rax

  v1 = (__int64)*(&PspSystemDlls + a1);
  if ( v1 && *(_QWORD *)(v1 + 40) )
    return v1 + 16;
  else
    return 0LL;
}
