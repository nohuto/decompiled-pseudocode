/*
 * XREFs of ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x1800051BC
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180005110 (-UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall ActivationControllerBamoProxy::GetCookie(ActivationControllerBamoProxy *this)
{
  return *((unsigned int *)this + 10)
       + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                              + 16LL)
                                                                                + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                  + 16LL))
                                            + 36) << 32);
}
