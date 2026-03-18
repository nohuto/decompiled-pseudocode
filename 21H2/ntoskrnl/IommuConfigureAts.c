/*
 * XREFs of IommuConfigureAts @ 0x140525150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuConfigureAts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( HalpHvIommu )
  {
    if ( qword_140C4C5C0 )
      return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_140C4C5C0)(
               *(unsigned int *)(a1 + 40),
               a2,
               qword_140C4C5C0,
               v3);
  }
  else
  {
    LOBYTE(a3) = a2;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v3 + 368))(
             *(_QWORD *)(v3 + 16),
             *(_QWORD *)(a1 + 40),
             a3);
  }
  return result;
}
