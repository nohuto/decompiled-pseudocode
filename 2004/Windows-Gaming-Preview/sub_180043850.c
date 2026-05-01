/*
 * XREFs of sub_180043850 @ 0x180043850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall sub_180043850(__int64 a1, __int64 a2)
{
  IStream *v4; // rcx
  HRESULT result; // eax

  v4 = *(IStream **)(a1 + 80);
  result = v4 == 0LL ? 0x8000FFFF : 0;
  if ( v4 )
  {
    result = IStream_Reset(v4);
    if ( result >= 0 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 56LL))(
               *(_QWORD *)(a1 + 80),
               a2,
               *(unsigned int *)(a1 + 32),
               0LL,
               0LL);
  }
  return result;
}
