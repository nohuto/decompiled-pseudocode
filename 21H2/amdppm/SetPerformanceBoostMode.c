/*
 * XREFs of SetPerformanceBoostMode @ 0x1C00026D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetPerformanceBoostMode(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+8h]

  v2 = (unsigned int)(a2 - 1) > 1 ? 0x2000000 : 0;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1C00146F0)(
             *(unsigned int *)(*(_QWORD *)a1 + 84LL),
             3221291029LL,
             -33554433LL,
             v2);
  v4 = __readmsr(0xC0010015);
  HIDWORD(v5) = HIDWORD(v4);
  LODWORD(v5) = v2 | v4 & 0xFDFFFFFF;
  result = v5;
  __writemsr(0xC0010015, v5);
  return result;
}
