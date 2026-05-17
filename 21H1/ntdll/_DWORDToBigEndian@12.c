/*
 * XREFs of _DWORDToBigEndian@12 @ 0x4B2E7B8D
 * Callers:
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _SHA256Final@8 @ 0x4B2EE630 (_SHA256Final@8.c)
 * Callees:
 *     <none>
 */

unsigned __int32 __fastcall DWORDToBigEndian(unsigned __int32 *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edx
  unsigned __int32 result; // eax

  v3 = a3;
  if ( a3 )
  {
    v4 = a2 - (_DWORD)a1;
    do
    {
      result = _byteswap_ulong(*(unsigned __int32 *)((char *)a1 + v4));
      *a1++ = result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
