/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x1C00CC4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00A5D80 (UserIsUserCritSecIn.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  struct tagGRAPHICS_DEVICE *v4; // rcx
  __int64 v6; // rax

  v3 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v1, v0, v2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( gProtocolType == -1 )
    return 1LL;
  v4 = gpRemoteGraphicsDeviceList;
  if ( !gProtocolType )
    v4 = gpLocalGraphicsDeviceList;
  if ( v4 && ((*((_DWORD *)v4 + 40) & 0x2000000) == 0 || *((_QWORD *)v4 + 16)) )
    return 1;
  return v3;
}
