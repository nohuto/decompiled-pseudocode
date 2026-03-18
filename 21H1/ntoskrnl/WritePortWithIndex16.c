/*
 * XREFs of WritePortWithIndex16 @ 0x1405C5E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WritePortWithIndex16(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C05338)(
           *(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a3);
}
