/*
 * XREFs of Fatal @ 0x1C0069C60
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Fatal(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "III");
  if ( !(_DWORD)result )
  {
    if ( ghFatal )
      ghFatal(
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 16LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 96LL),
        a1,
        qword_1C0082838);
    return 3222536198LL;
  }
  return result;
}
