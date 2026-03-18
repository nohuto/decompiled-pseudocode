/*
 * XREFs of ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0011484
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0010960 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ProtectableFromChange::IsModifyingActionAllowed(
        ProtectableFromChange *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = a2;
  if ( a2 >= *((_BYTE *)this + 20) )
    WdLogSingleEntry0(1LL);
  v4 = *((unsigned __int16 *)this + 11);
  return _bittest(&v4, v2);
}
