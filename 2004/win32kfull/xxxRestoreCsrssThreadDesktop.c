/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00BD330
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00BC518 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00BD1B0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C00BE5B0 (SendMsgCleanup.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  void *v4; // rcx
  void *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edi
  void *v8; // rcx
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (void *)*a1;
  memset(v10, 0, sizeof(v10));
  v5 = *(void **)(gptiCurrent + 448LL);
  if ( v4 == v5 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
        xxxDispatchMessage((__int64)v10);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v6 = xxxSetThreadDesktop(0LL, *a1);
    v4 = (void *)*a1;
    v7 = v6;
  }
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *a1 = 0LL;
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    CloseProtectedHandle(v8);
    a1[1] = 0LL;
  }
  return v7;
}
