/*
 * XREFs of ?Thunk_SetBooleanValue_13@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180193940
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D279C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetBooleanValue_13(
        __int64 a1,
        unsigned int **a2)
{
  char v3; // si
  unsigned int v4; // edi
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL));
  LOBYTE(v5) = v3;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16, v4, v5);
  v7 = v10;
  v8 = v6;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 128));
    *(_DWORD *)(v7 + 168) = GetCurrentThreadId();
  }
  return v8;
}
