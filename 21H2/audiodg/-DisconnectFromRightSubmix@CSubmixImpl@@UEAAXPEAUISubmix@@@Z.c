/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x1400100E0
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400101D0 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F1E0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSubmixImpl::DisconnectFromRightSubmix(
        CSubmixImpl *this,
        void (__fastcall ***a2)(struct ISubmix *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  void (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *a2;
  v7 = 0LL;
  (*v5)((struct ISubmix *)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v7);
  if ( v7 )
  {
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 152LL))(this);
    (*(void (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v7 + 88LL))(v7, this);
  }
  v6 = *((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  PublishDeviceGraphWnfState();
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v2 )
    LeaveCriticalSection(v2);
}
