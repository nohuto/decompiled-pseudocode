/*
 * XREFs of RtlTraceDatabaseValidate @ 0x180102D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(unsigned int *)(a1 + 88);
    do
    {
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  RtlLeaveCriticalSection(a1 + 48, v2, v3);
  return 1;
}
