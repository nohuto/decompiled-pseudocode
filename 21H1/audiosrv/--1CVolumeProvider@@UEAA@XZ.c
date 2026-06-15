/*
 * XREFs of ??1CVolumeProvider@@UEAA@XZ @ 0x1800C4B8C
 * Callers:
 *     ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x1800C4C30 (--_ECVolumeProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x1800C4C7C (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 */

void __fastcall CVolumeProvider::~CVolumeProvider(CVolumeProvider *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rsi

  *(_QWORD *)this = &CVolumeProvider::`vftable';
  CVolumeProvider::Cleanup(this);
  v2 = (__int64 *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 8);
    v4 = (__int64 *)*((_QWORD *)this + 7);
    if ( v2 != v3 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4++);
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
