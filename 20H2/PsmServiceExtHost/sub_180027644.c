/*
 * XREFs of sub_180027644 @ 0x180027644
 * Callers:
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 * Callees:
 *     sub_18003743C @ 0x18003743C (sub_18003743C.c)
 */

BOOLEAN __fastcall sub_180027644(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  BOOLEAN result; // al
  void *v6; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  RtlAcquireSRWLockExclusive(P + 3);
  v2 = (_QWORD *)*P;
  if ( (_QWORD *)*P != P )
  {
    v8 = (_QWORD *)P[1];
    v7 = v2;
    v2[1] = &v7;
    *v8 = &v7;
    P[1] = P;
    *P = P;
    while ( v7 != &v7 )
    {
      v6 = (void *)sub_18003743C(&v7);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
  }
  v3 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v3);
  v4 = *((_BYTE *)P + 32);
  result = RtlReleaseSRWLockExclusive(P + 3);
  if ( !v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
