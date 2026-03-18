/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x1C00CBC20
 * Callers:
 *     <none>
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00B4D20 (UserIsUserCritSecIn.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  struct tagGRAPHICS_DEVICE *v5; // rcx
  __int64 v7; // rax

  v4 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v1, v0, v2, v3);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( gProtocolType == -1 )
    return 1LL;
  v5 = gpRemoteGraphicsDeviceList;
  if ( !gProtocolType )
    v5 = gpLocalGraphicsDeviceList;
  if ( v5 && ((*((_DWORD *)v5 + 40) & 0x2000000) == 0 || *((_QWORD *)v5 + 16)) )
    return 1;
  return v4;
}
