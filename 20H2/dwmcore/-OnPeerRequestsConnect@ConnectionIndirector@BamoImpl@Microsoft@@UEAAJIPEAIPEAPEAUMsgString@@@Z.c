/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800D2310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D279C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D27D0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800D2804 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // edi
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)v13,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 24));
  v8 = (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)*((_QWORD *)this + 1);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v14, v8);
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v8 + 24LL))(
         v8,
         a2,
         a3,
         a4);
  v10 = v14;
  v11 = v9;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 128));
    *(_DWORD *)(v10 + 168) = GetCurrentThreadId();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)v13);
  return v11;
}
