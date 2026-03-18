/*
 * XREFs of ?OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x180180110
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL));
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 16) + 64LL))(v2 - 16, (char *)this - 16);
  v4 = v7;
  v5 = v3;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 128));
    *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
  }
  return v5;
}
