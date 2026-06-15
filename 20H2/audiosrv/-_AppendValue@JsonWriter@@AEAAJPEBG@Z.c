/*
 * XREFs of ?_AppendValue@JsonWriter@@AEAAJPEBG@Z @ 0x18013C494
 * Callers:
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013C420 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_EncodeJsonString@JsonWriter@@AEAAXPEBGPEADPEAK2@Z @ 0x18013C588 (-_EncodeJsonString@JsonWriter@@AEAAXPEBGPEADPEAK2@Z.c)
 */

__int64 __fastcall JsonWriter::_AppendValue(JsonWriter *this, const unsigned __int16 *a2)
{
  int v2; // edi
  JsonWriter *v5; // rcx
  unsigned int v7; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v8[3]; // [rsp+34h] [rbp-64h] BYREF
  char v9[64]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  memset_0(v9, 0, sizeof(v9));
  while ( 1 )
  {
    v7 = 64;
    JsonWriter::_EncodeJsonString(v5, a2, v9, &v7, v8);
    if ( !v7 )
      break;
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)this + 32LL))(
           *(_QWORD *)this,
           v9,
           v7,
           0LL);
    if ( v2 < 0 )
      break;
    v5 = (JsonWriter *)v8[0];
    a2 += v8[0];
  }
  return (unsigned int)v2;
}
