/*
 * XREFs of sub_18003F088 @ 0x18003F088
 * Callers:
 *     sub_18003F02C @ 0x18003F02C (sub_18003F02C.c)
 * Callees:
 *     sub_18003F290 @ 0x18003F290 (sub_18003F290.c)
 */

__int64 __fastcall sub_18003F088(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  __int64 v4; // rdx
  int v5; // edi
  __int64 result; // rax

  v1 = a1[54];
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = 8LL * v2;
      if ( (a1[v4 + 10] & 1) != 0 )
      {
        result = RtlQueryWnfStateData(&a1[v4 + 11], *(_QWORD *)&a1[v4 + 6], sub_18003F2E0, a1, 0LL);
        if ( (int)result < 0 )
          break;
      }
      v1 = a1[54];
      if ( ++v2 >= v1 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        result = RtlSubscribeWnfStateChangeNotification(
                   &a1[8 * v5 + 12],
                   *(_QWORD *)&a1[8 * v5 + 6],
                   (unsigned int)a1[8 * v5 + 11],
                   sub_18003F1A0,
                   a1,
                   0LL,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        if ( (unsigned int)++v5 >= a1[54] )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      RtlAcquireSRWLockExclusive(a1);
      a1[2] = GetCurrentThreadId();
      a1[5] |= 1u;
      a1[4] = 1;
      sub_18003F290(a1);
      a1[2] = 0;
      RtlReleaseSRWLockExclusive(a1);
      return 0LL;
    }
  }
  return result;
}
