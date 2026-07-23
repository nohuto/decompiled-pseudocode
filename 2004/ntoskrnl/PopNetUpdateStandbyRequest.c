/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1408EEC1C
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  NTSTATUS v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  if ( PopNetBIServiceSid )
  {
    v2 = RtlCheckTokenMembership(0LL, PopNetBIServiceSid, &IsMember);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !IsMember )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock(v3);
    if ( PopNetBIRequestActive )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      PopNetBIRequestActive = a1;
LABEL_9:
      PopReleasePolicyLock(v5, v4);
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
