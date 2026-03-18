/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C02E8734
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0110048 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C005C438 (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C005C6F0 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(ProtectableFromChange *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(a2) = v3;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 24LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( (_BYTE)v3 == 0xFF )
  {
    if ( a3 != 255 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v9);
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    *((_WORD *)this + 11) |= 1 << v3;
    v10 = (_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 24, v3);
    *v10 &= 0xF0u;
    *(_QWORD *)Vector<unsigned __int64>::operator[]((__int64)this + 64, v3) = a3;
  }
}
