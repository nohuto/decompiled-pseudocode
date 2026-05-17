/*
 * XREFs of _RtlFindMessage@20 @ 0x4B2DFF20
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 *     _RtlpFindMessageInTable@16 @ 0x4B2DFF9D (_RtlpFindMessageInTable@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlFindMessage(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  int *v8; // [esp+14h] [ebp-18h] BYREF
  _DWORD v9[4]; // [esp+18h] [ebp-14h] BYREF

  v9[0] = a2;
  v9[2] = a3;
  v9[1] = 1;
  v9[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (int)v9, 4u, 64, &v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(a1, (unsigned int)v8, (int)&v6, (int)&v7);
    if ( result >= 0 )
      return RtlpFindMessageInTable(a4, a5);
  }
  return result;
}
