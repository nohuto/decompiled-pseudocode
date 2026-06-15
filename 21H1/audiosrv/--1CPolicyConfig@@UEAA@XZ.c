/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x1800B8730
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800B8D20 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rcx

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
  *((_DWORD *)this + 5) = -1073741823;
}
