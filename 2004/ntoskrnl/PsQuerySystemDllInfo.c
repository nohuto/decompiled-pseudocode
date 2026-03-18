/*
 * XREFs of PsQuerySystemDllInfo @ 0x1406B5B0C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14035BCE8 (PspWow64PickBestNtdll.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x1406B5AC0 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     MmInitSystemDll @ 0x140A42ACC (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x140A66CAC (PspInitializeSystemDlls.c)
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
