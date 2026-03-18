/*
 * XREFs of PopPowerRequestCreateInfo @ 0x14064E220
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x140276B88 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027759C (PoCaptureReasonContext.c)
 *     PopCreateUserPowerRequest @ 0x14064E058 (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14064E318 (PopNotifySessionUserPowerRequestCreated.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // si
  int UserPowerRequest; // edi
  _QWORD *v6; // rbx
  PADAPTER_OBJECT v7; // rsi
  PADAPTER_OBJECT DmaAdapter[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  DmaAdapter[0] = 0LL;
  v4 = a2;
  P = 0LL;
  v11 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, &P);
    if ( UserPowerRequest < 0 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = P;
      UserPowerRequest = PopCreateUserPowerRequest((__int64 *)DmaAdapter, v4, (__int64)P);
      if ( UserPowerRequest >= 0 )
      {
        v7 = DmaAdapter[0];
        v6 = 0LL;
        UserPowerRequest = ObInsertObjectEx(DmaAdapter[0], 0LL, 0, 0LL, (__int64)&v11);
        if ( UserPowerRequest >= 0 )
          PopNotifySessionUserPowerRequestCreated(*(unsigned int *)&v7[1].Version, HIDWORD(v7[1].DmaOperations), v11);
      }
    }
  }
  else
  {
    v6 = P;
    UserPowerRequest = -1073741637;
  }
  if ( a3 )
    *a3 = v11;
  if ( v6 )
    PoDestroyReasonContext(v6);
  return (unsigned int)UserPowerRequest;
}
