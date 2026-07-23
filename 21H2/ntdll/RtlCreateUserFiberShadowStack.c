/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x1800E18E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D980 (NtSetInformationProcess.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1800E182C (RtlCalculateUserShadowStackSizes.c)
 */

int __fastcall RtlCreateUserFiberShadowStack(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  int result; // eax
  __int128 ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v4 = HIBYTE(a2);
  if ( HIBYTE(a2) > 0x40u )
    return -1073741811;
  ProcessInformation = 0LL;
  v7 = 0LL;
  result = RtlCalculateUserShadowStackSizes(a1, (unsigned __int64 *)&ProcessInformation);
  if ( result >= 0 )
  {
    LODWORD(v7) = v4;
    result = NtSetInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessFiberShadowStackAllocation,
               &ProcessInformation,
               0x20u);
    if ( result >= 0 )
      *a3 = *((_QWORD *)&v7 + 1);
  }
  return result;
}
