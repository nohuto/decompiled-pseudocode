/*
 * XREFs of ?CreateAsyncResult_string_Proxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180072004
 * Callers:
 *     ?Materialize_BamoAsyncResult_string_Proxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180072E04 (-Materialize_BamoAsyncResult_string_Proxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateAsyncResult_string_Proxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rdi
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+18h]

  v7 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    this);
  v5 = operator new(0x30uLL);
  v8 = v5;
  *v5 = &BamoAsyncResult_string_Proxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &BamoAsyncResult_string_Proxy::`vftable'{for `IAsyncResult_string_Proxy'};
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  v5[2] = &BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`vftable';
  v6 = v7;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 128));
    *((_DWORD *)v6 + 42) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v5;
}
