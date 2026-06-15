/*
 * XREFs of ?AddKeyValue@JsonWriter@@QEAAJPEBGH@Z @ 0x18013C000
 * Callers:
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F5E00 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x18013C3A4 (-StringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013C420 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 *     ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18013C554 (-_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyValue(JsonWriter *this, const unsigned __int16 *a2, int a3)
{
  __int64 result; // rax
  char Buffer[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  *(_QWORD *)Buffer = 0LL;
  v7 = 0;
  result = StringCbPrintfA(Buffer, 0xCuLL, "%d", a3);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)this + 35)
      || (result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                     *(_QWORD *)this,
                     ", ",
                     2LL),
          (int)result >= 0) )
    {
      result = JsonWriter::_AppendString(this, a2);
      if ( (int)result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                   *(_QWORD *)this,
                   " : ",
                   3LL);
        if ( (int)result >= 0 )
        {
          result = JsonWriter::_AppendValueNoEscape(this, Buffer);
          if ( (int)result >= 0 )
            *((_DWORD *)this + 35) = 1;
        }
      }
    }
  }
  return result;
}
