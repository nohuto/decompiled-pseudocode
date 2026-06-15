/*
 * XREFs of sub_180009230 @ 0x180009230
 * Callers:
 *     sub_18003B786 @ 0x18003B786 (sub_18003B786.c)
 *     sub_18003BFF9 @ 0x18003BFF9 (sub_18003BFF9.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180009230(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v4 = *((_QWORD *)a2 - 1);
    if ( (unsigned __int64)a2 - v4 - 8 > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 8 * a3 + 39);
      __debugbreak();
      JUMPOUT(0x180009278LL);
    }
    v3 = (void *)*((_QWORD *)a2 - 1);
  }
  return sub_180039D98(v3);
}
