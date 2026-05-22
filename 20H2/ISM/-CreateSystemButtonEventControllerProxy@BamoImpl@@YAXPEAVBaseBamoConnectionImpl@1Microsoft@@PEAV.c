/*
 * XREFs of ?CreateSystemButtonEventControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E4424
 * Callers:
 *     ?Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E7FB0 (-Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAA.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateSystemButtonEventControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rdi
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+18h]

  v7 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    this);
  v5 = operator new(0x58uLL);
  v8 = v5;
  memset_0(v5, 0, 0x58uLL);
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[2] = &BamoImpl::BamoSystemButtonEventControllerProxyImpl::`vftable';
  *v5 = &SystemButtonEventController::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &SystemButtonEventController::`vftable'{for `ISystemButtonEventControllerProxy'};
  v5[6] = 0LL;
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  v5[10] = 0LL;
  v6 = v7;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 128));
    *((_DWORD *)v6 + 42) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v5;
}
