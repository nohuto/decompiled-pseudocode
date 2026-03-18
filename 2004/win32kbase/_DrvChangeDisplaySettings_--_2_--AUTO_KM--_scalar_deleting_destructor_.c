/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C0146700
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00B29E8 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  AUTO_TGO::~AUTO_TGO(a1);
  if ( (a2 & 1) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  return a1;
}
