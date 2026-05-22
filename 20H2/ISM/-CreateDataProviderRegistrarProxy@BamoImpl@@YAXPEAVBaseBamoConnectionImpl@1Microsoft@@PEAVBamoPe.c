/*
 * XREFs of ?CreateDataProviderRegistrarProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180038DF0
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180038D60 (-Thunk_Materialize_BamoDataProviderRegistrarProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@V.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateDataProviderRegistrarProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _OWORD *v5; // rdi
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // [rsp+38h] [rbp+10h] BYREF
  _OWORD *v8; // [rsp+40h] [rbp+18h]

  v7 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    this);
  v5 = operator new(0x30uLL);
  v8 = v5;
  *v5 = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  *((_DWORD *)v5 + 6) = 0;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  *((_QWORD *)v5 + 2) = &BamoImpl::BamoDataProviderRegistrarProxyImpl::`vftable';
  *(_QWORD *)v5 = &DataProviderRegistrarProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v5 + 1) = &DataProviderRegistrarProxy::`vftable'{for `IDataProviderRegistrarProxy'};
  v6 = v7;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 128));
    *((_DWORD *)v6 + 42) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v5;
}
