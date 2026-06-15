/*
 * XREFs of ?AddKeyValue@JsonWriter@@QEAAJPEBGN@Z @ 0x18013D0BC
 * Callers:
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F69D0 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x18013D384 (-StringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013D400 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 *     ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18013D534 (-_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyValue(JsonWriter *this, const unsigned __int16 *a2, double a3)
{
  __int64 result; // rax
  char Buffer[16]; // [rsp+30h] [rbp-28h] BYREF

  result = StringCbPrintfA(Buffer, 0x10uLL, "%g", a3);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)this + 35)
      || (result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                     *(_QWORD *)this,
                     ", ",
                     2LL),
          (int)result >= 0) )
    {
      result = JsonWriter::_AppendString(this, L"duration");
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
