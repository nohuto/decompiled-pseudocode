/*
 * XREFs of sub_180037340 @ 0x180037340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003743C @ 0x18003743C (sub_18003743C.c)
 */

BOOLEAN __fastcall sub_180037340(__int64 a1, _BYTE *a2)
{
  char *v3; // rsi
  __int64 v4; // rbx
  char v5; // bl
  BOOLEAN result; // al
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2 + 24;
LABEL_2:
  RtlAcquireSRWLockExclusive(v3);
  if ( *(_BYTE **)a2 != a2 )
  {
    v4 = sub_18003743C(a2);
    RtlReleaseSRWLockExclusive(v3);
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)RtlWaitForWnfMetaNotification(*(_QWORD *)(v4 + 16), 8LL, 15000LL, 1000LL, &v7) != 258 )
      {
        RtlPublishWnfStateData(*(_QWORD *)(v4 + 16), 0LL, v4 + 28, *(unsigned int *)(v4 + 24), 0LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
        goto LABEL_2;
      }
      RtlAcquireSRWLockExclusive(v3);
      if ( a2[33] )
        break;
      RtlReleaseSRWLockExclusive(v3);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
  }
  v5 = a2[33];
  a2[32] = 0;
  result = RtlReleaseSRWLockExclusive(v3);
  if ( v5 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  return result;
}
