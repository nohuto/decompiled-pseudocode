/*
 * XREFs of sub_180119F84 @ 0x180119F84
 * Callers:
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_180119E38 @ 0x180119E38 (sub_180119E38.c)
 */

__int64 __fastcall sub_180119F84(__int64 a1, unsigned __int16 *a2)
{
  int v3; // eax
  void *v4; // rbx
  unsigned int v5; // edi
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  pv = 0LL;
  v3 = sub_180048714(a2, &pv);
  v4 = pv;
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( (unsigned int)sub_180119E38(a1 + 32, &pv) )
      v4 = 0LL;
    else
      v5 = -2147024882;
  }
  CoTaskMemFree(v4);
  return v5;
}
