/*
 * XREFs of ??1CConnection@@MEAA@XZ @ 0x18014F264
 * Callers:
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x18014EFB8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 *     ??_GCConnection@@MEAAPEAXI@Z @ 0x18014F2E0 (--_GCConnection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18014F32C (-Disconnect@CConnection@@QEAAXXZ.c)
 */

void __fastcall CConnection::~CConnection(CConnection *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &CConnection::`vftable';
  CConnection::Disconnect(this);
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 6);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
}
