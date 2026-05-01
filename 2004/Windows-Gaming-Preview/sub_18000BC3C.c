/*
 * XREFs of sub_18000BC3C @ 0x18000BC3C
 * Callers:
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000BC3C(__int64 *a1, _QWORD *a2, HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rbx
  const WCHAR *v12; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*a3, 0LL);
      v10 = WindowsGetStringRawBuffer((HSTRING)v8[4], 0LL);
      if ( CompareStringOrdinal(v10, -1, StringRawBuffer, -1, 1) == 1 )
      {
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v3 = v8;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = (__int64 *)*a1;
  }
  if ( v3 == v7
    || (v11 = WindowsGetStringRawBuffer((HSTRING)v3[4], 0LL),
        v12 = WindowsGetStringRawBuffer(*a3, 0LL),
        CompareStringOrdinal(v12, -1, v11, -1, 1) == 1) )
  {
    v3 = (__int64 *)*a1;
  }
  result = a2;
  *a2 = v3;
  return result;
}
