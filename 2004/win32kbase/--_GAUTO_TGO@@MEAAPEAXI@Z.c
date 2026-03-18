/*
 * XREFs of ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C0146750
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00B29E8 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::`scalar deleting destructor'(AUTO_TGO *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  AUTO_TGO::~AUTO_TGO(this);
  if ( (a2 & 1) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  return this;
}
