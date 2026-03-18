/*
 * XREFs of PsQuerySystemDllInfo @ 0x14069282C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14032C834 (PspWow64PickBestNtdll.c)
 *     PsWow64IsMachineSupported @ 0x1406927E0 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     MmInitSystemDll @ 0x140A48D6C (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x140A6DF7C (PspInitializeSystemDlls.c)
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
