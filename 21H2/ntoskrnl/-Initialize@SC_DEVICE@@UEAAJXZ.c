/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1405C91A0
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1405C6FE0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  __int64 v2; // rax
  int v3; // ebx
  PVOID v4; // rcx
  PVOID Buffer; // [rsp+20h] [rbp-38h] BYREF
  _GUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  unsigned int pid; // [rsp+38h] [rbp-20h]

  Buffer = 0LL;
  pid = DEVPKEY_Device_ClassGuid.pid;
  v2 = *(_QWORD *)this;
  fmtid = DEVPKEY_Device_ClassGuid.fmtid;
  v3 = (*(__int64 (__fastcall **)(SC_DEVICE *, _GUID *, PVOID *))(v2 + 24))(this, &fmtid, &Buffer);
  if ( v3 < 0 )
  {
    return 0;
  }
  else
  {
    v4 = Buffer;
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)Buffer;
    SC_ENV::Free(v4);
  }
  return (unsigned int)v3;
}
