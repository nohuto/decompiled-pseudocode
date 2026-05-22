/*
 * XREFs of ?OnKeyboardDockInput@BamoKeyboardDockClientProxy@@UEAAJIAEBUKeyboardDockInput@@@Z @ 0x180129010
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnKeyboardDockInput@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIAEBUKeyboardDockInput@@@Z @ 0x18012907C (-OnKeyboardDockInput@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIAEBUKeyboardDockInput@@@Z.c)
 */

__int64 __fastcall BamoKeyboardDockClientProxy::OnKeyboardDockInput(
        BamoKeyboardDockClientProxy *this,
        unsigned int a2,
        const struct KeyboardDockInput *a3)
{
  BamoKeyboardDockClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoKeyboardDockClientProxyImpl::OnKeyboardDockInput(
                  (BamoKeyboardDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
