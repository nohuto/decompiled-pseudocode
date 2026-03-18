/*
 * XREFs of ?ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@@Z @ 0x1C005B704
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C005B670 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 */

void __fastcall ProtectableFromChange::ImposeModifyingActionConstraints(
        ProtectableFromChange *this,
        __int64 a2,
        const union ProtectableFromChange::ModifyingActionConstraints *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 24, v3) = *(_BYTE *)a3;
}
