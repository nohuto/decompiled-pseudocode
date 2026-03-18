/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C006C5AC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C006C208 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0148B94 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0040A70 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((_QWORD *)this + 2, (__int64)this, (__int64)AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
