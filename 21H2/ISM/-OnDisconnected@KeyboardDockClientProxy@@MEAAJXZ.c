/*
 * XREFs of ?OnDisconnected@KeyboardDockClientProxy@@MEAAJXZ @ 0x180128CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterKeyboardDockClient@KeyboardDockServer@@QEAAJPEAVBamoKeyboardDockClientProxy@@@Z @ 0x180128320 (-UnregisterKeyboardDockClient@KeyboardDockServer@@QEAAJPEAVBamoKeyboardDockClientProxy@@@Z.c)
 */

__int64 __fastcall KeyboardDockClientProxy::OnDisconnected(
        KeyboardDockServer **this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  KeyboardDockServer *v5; // rcx

  KeyboardDockServer::UnregisterKeyboardDockClient(this[6], (struct BamoKeyboardDockClientProxy *)this, a3, a4);
  v5 = this[6];
  this[6] = 0LL;
  if ( v5 )
    (**((void (__fastcall ***)(__int64))v5 + 2))((__int64)v5 + 16);
  return 0LL;
}
