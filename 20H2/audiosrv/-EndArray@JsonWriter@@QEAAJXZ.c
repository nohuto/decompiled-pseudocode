/*
 * XREFs of ?EndArray@JsonWriter@@QEAAJXZ @ 0x18013C2EC
 * Callers:
 *     _lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator() @ 0x1800F59FC (_lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F5E00 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x18013C6F0 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::EndArray(JsonWriter *this)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  if ( !(unsigned int)JsonWriter::_InsideArray(this) )
    return 2147758081LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, "]", 1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
