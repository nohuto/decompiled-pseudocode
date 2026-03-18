/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x1408E686C
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     PopNetIsDisconnectStandbyActive @ 0x1408F467C (PopNetIsDisconnectStandbyActive.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopS0LowPowerIdleInfo(__int64 a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  char IsDisconnectStandbyActive; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = PopPlatformAoAc == 0;
  v8 = 0;
  *(_QWORD *)a1 = 0LL;
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    PopAcquirePolicyLock(a1);
    IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&v8);
    LOBYTE(v6) = *(_BYTE *)(a1 + 4);
    v5 = v8;
    *(_DWORD *)a1 = v8;
    LOBYTE(v6) = (PopCsDeviceCompliance[0] == 1) | v6 & 0xFE;
    *(_BYTE *)(a1 + 4) = v6;
    LOBYTE(v6) = (dword_140CF9E6C != 1 ? 0 : 2) | v6 & 0xFD;
    *(_BYTE *)(a1 + 4) = v6;
    LOBYTE(v6) = (dword_140CF9E70 != 1 ? 0 : 4) | v6 & 0xFB;
    *(_BYTE *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 4) = (dword_140CF9E78 != 1 ? 0 : 8) | v6 & 0xF7;
    LOBYTE(v6) = (IsDisconnectStandbyActive != 0) | *(_BYTE *)(a1 + 5) & 0xFE;
    *(_BYTE *)(a1 + 5) = v6;
    if ( (unsigned int)(v5 - 3) <= 1 )
      LOBYTE(v6) = v6 | 2;
    else
      LOBYTE(v6) = v6 & 0xFD;
    *(_BYTE *)(a1 + 5) = v6;
    PopReleasePolicyLock(v6, v5);
  }
  return v1;
}
