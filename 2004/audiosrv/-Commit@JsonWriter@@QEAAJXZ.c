/*
 * XREFs of ?Commit@JsonWriter@@QEAAJXZ @ 0x18013CF28
 * Callers:
 *     _lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator() @ 0x1800F668C (_lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x18013D380 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::Commit(JsonWriter *this)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 (__fastcall *v4)(__int64, const char *, __int64); // r11
  const char *v5; // rdx
  __int64 result; // rax

  v2 = JsonWriter::_InsideArray(this);
  v5 = "]";
  if ( !v2 )
    v5 = "}";
  result = v4(v3, v5, 1LL);
  if ( (int)result >= 0 )
    --*((_DWORD *)this + 34);
  return result;
}
