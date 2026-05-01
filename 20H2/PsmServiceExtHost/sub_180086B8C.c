/*
 * XREFs of sub_180086B8C @ 0x180086B8C
 * Callers:
 *     sub_180086D30 @ 0x180086D30 (sub_180086D30.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 sub_180086B8C()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-28h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&unk_1800A3970, 1LL, 0LL, &v3, 4) >= 0 && v3 )
    v1 = (int)ZwUpdateWnfStateData(&unk_1800A3970, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  v4 = 0LL;
  if ( !(unsigned int)EtwEventWriteNoRegistration(&unk_1800A5AC8, &v4, 0LL, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
