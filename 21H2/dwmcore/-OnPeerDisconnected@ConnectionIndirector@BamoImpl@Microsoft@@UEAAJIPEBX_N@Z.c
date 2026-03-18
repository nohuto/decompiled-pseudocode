/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180197750
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18019762C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        char *a3,
        char a4)
{
  Microsoft::BamoImpl::ConnectionIndirector *v4; // rbx
  __int64 v7; // rdx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v9,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  LODWORD(v4) = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(*((char ***)v4 + 2), v7, a3, a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
  return (unsigned int)v4;
}
