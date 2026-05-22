/*
 * XREFs of ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x1800F5098
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F5180 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F52D0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall GetClientId(struct BamoInputObserverClientProxy *a1)
{
  unsigned int v1; // ebx

  v1 = *((_DWORD *)a1 + 10);
  return ((unsigned __int64)v1 << 32) | *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 4) + 16LL)
                                                                                            + 8LL))(*(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL))
                                                        + 36);
}
