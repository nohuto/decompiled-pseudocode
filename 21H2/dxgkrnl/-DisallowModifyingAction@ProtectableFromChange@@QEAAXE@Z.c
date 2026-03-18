/*
 * XREFs of ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C018A32C
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C001125C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C018AA10 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

void __fastcall ProtectableFromChange::DisallowModifyingAction(ProtectableFromChange *this, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax

  v2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
    WdLogSingleEntry0(1LL);
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( (_BYTE)v2 == 0xFF )
  {
    *((_WORD *)this + 11) = 0;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
    memset(*((void **)this + 11), 0, 8LL * *((_QWORD *)this + 10));
  }
  else
  {
    *((_WORD *)this + 11) &= ~(1 << v2);
    if ( v2 >= *((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    *(_BYTE *)(*((_QWORD *)this + 6) + v2) &= 0xF0u;
    if ( v2 >= *((_QWORD *)this + 10) )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) = 0LL;
  }
}
