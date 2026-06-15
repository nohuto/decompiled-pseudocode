/*
 * XREFs of sub_18001A100 @ 0x18001A100
 * Callers:
 *     sub_18003C023 @ 0x18003C023 (sub_18003C023.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18001A100(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(4 * a3) >= 0x1000 )
  {
    v4 = *((_QWORD *)a2 - 1);
    if ( (unsigned __int64)a2 - v4 - 8 > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 4 * a3 + 39);
      __debugbreak();
      JUMPOUT(0x18001A148LL);
    }
    v3 = (void *)*((_QWORD *)a2 - 1);
  }
  return sub_180039D98(v3);
}
