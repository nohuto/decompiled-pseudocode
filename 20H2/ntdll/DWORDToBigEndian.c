/*
 * XREFs of DWORDToBigEndian @ 0x1800404B4
 * Callers:
 *     A_SHAFinal @ 0x180040280 (A_SHAFinal.c)
 *     SHA256Final @ 0x18004038C (SHA256Final.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWORDToBigEndian(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (_DWORD)a3 )
  {
    v3 = a2 - (_QWORD)a1;
    a3 = (unsigned int)a3;
    do
    {
      result = _byteswap_ulong(*(_DWORD *)((char *)a1 + v3));
      *a1++ = result;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
