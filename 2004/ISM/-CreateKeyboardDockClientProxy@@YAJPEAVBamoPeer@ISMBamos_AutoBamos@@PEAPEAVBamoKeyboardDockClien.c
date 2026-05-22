/*
 * XREFs of ?CreateKeyboardDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoKeyboardDockClientProxy@@@Z @ 0x1801287CC
 * Callers:
 *     ?CreateKeyboardDockClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E3E2C (-CreateKeyboardDockClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateKeyboardDockClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoKeyboardDockClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rax

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 184) + 8LL) + 152LL))(*(_QWORD *)(v4 + 184) + 8LL);
  v6 = operator new(0x38uLL);
  v6[6] = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  v6[10] = 0;
  v6[11] = 0;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`vftable';
  *(_QWORD *)v6 = &KeyboardDockClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &KeyboardDockClientProxy::`vftable'{for `IKeyboardDockClientProxy'};
  *((_QWORD *)v6 + 6) = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
  *a2 = (struct BamoKeyboardDockClientProxy *)v6;
  return 0LL;
}
