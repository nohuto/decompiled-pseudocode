/*
 * XREFs of ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x18013CE3C
 * Callers:
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F6A90 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x18013D034 (-StringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013D0B0 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 *     ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18013D1E4 (-_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyValue(JsonWriter *this, const unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  char Buffer[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  __int16 v9; // [rsp+4Ch] [rbp-1Ch]

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  *(_OWORD *)Buffer = 0LL;
  result = StringCbPrintfA(Buffer, 0x1EuLL, "%I64u", a3);
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
