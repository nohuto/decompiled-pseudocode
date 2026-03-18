/*
 * XREFs of PopPowerRequestCreateInfo @ 0x1406FF504
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14033DF4C (PoCaptureReasonContext.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406FF5FC (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // si
  __int64 v5; // rdx
  int UserPowerRequest; // edi
  _QWORD *v7; // rbx
  PADAPTER_OBJECT v8; // rsi
  PADAPTER_OBJECT DmaAdapter[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  DmaAdapter[0] = 0LL;
  v4 = a2;
  P = 0LL;
  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, &P);
    if ( UserPowerRequest < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = P;
      LOBYTE(v5) = v4;
      UserPowerRequest = PopCreateUserPowerRequest(DmaAdapter, v5, P);
      if ( UserPowerRequest >= 0 )
      {
        v8 = DmaAdapter[0];
        v7 = 0LL;
        UserPowerRequest = ObInsertObjectEx(DmaAdapter[0], 0LL, 0, 0, 0, 0LL, &v12);
        if ( UserPowerRequest >= 0 )
          PopNotifySessionUserPowerRequestCreated(*(unsigned int *)&v8[1].Version, HIDWORD(v8[1].DmaOperations), v12);
      }
    }
  }
  else
  {
    v7 = P;
    UserPowerRequest = -1073741637;
  }
  if ( a3 )
    *a3 = v12;
  if ( v7 )
    PoDestroyReasonContext(v7);
  return (unsigned int)UserPowerRequest;
}
