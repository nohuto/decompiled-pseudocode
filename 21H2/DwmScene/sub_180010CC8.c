/*
 * XREFs of sub_180010CC8 @ 0x180010CC8
 * Callers:
 *     sub_1801257E7 @ 0x1801257E7 (sub_1801257E7.c)
 *     sub_1801258FA @ 0x1801258FA (sub_1801258FA.c)
 *     sub_1801259B7 @ 0x1801259B7 (sub_1801259B7.c)
 *     sub_180126836 @ 0x180126836 (sub_180126836.c)
 *     sub_18012A98E @ 0x18012A98E (sub_18012A98E.c)
 *     sub_18012F805 @ 0x18012F805 (sub_18012F805.c)
 *     sub_1801309E8 @ 0x1801309E8 (sub_1801309E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010CC8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(16 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180010D09LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
