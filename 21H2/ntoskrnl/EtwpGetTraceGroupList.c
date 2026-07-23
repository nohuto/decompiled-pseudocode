/*
 * XREFs of EtwpGetTraceGroupList @ 0x140934B98
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1406B82EC (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupList(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  signed __int64 *v8; // rdx
  __int64 i; // r15
  signed __int64 *NextGuidEntry; // rax

  v3 = 0;
  v4 = *a3 >> 4;
  v5 = 0;
  v8 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v8, 2);
    if ( !NextGuidEntry )
      break;
    if ( ++v5 > 0xFFFFFFF )
    {
      v3 = -2147483643;
      break;
    }
    if ( v5 <= v4 )
      *a2++ = *(_OWORD *)(NextGuidEntry + 5);
    v8 = NextGuidEntry;
  }
  *a3 = 16 * v5;
  if ( v3 >= 0 && v5 > v4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v3;
}
