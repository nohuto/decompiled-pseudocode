/*
 * XREFs of ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E73B8
 * Callers:
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800E7950 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069E00 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  `eh vector destructor iterator'(
    (char *)this + 88,
    24LL,
    4LL,
    (void (*)(void *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v2 = (__int64 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 9);
    v4 = (__int64 *)*((_QWORD *)this + 8);
    if ( v2 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
    CoTaskMemFree(v6);
  *((_DWORD *)this + 3) = -1073741823;
}
