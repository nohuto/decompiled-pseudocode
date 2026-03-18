/*
 * XREFs of ?CalcDpi@Win81@@YAIII@Z @ 0x1C02AACBC
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AAFEC (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win81::CalcDpi(Win81 *this, __int64 a2)
{
  __int64 v2; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v2 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v2 + 24) = 170LL;
  WdLogEvent5_WdAssertion(v2);
  return 0LL;
}
