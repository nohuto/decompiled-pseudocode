/*
 * XREFs of _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290
 * Callers:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 * Callees:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _SendMsgCleanup@4 @ 0x9A52C (_SendMsgCleanup@4.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 */

NTSTATUS __stdcall xxxRestoreCsrssThreadDesktop(int *a1, char a2)
{
  int v2; // eax
  void *v3; // ecx
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  void *v6; // ecx
  unsigned int v8[7]; // [esp+Ch] [ebp-1Ch] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_DWORD *)(_gptiCurrent + 248);
  v3 = (void *)*a1;
  if ( *a1 == v2 )
  {
    v5 = 0;
  }
  else
  {
    if ( v2 )
    {
      while ( xxxInternalGetMessage(v8, 0, 0, 3u, 0) )
        xxxDispatchMessage(v8);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(_gptiCurrent);
    }
    v4 = xxxSetThreadDesktop(0, *a1);
    v3 = (void *)*a1;
    v5 = v4;
  }
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *a1 = 0;
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    CloseProtectedHandle(v6, 0);
    a1[1] = 0;
  }
  return v5;
}
