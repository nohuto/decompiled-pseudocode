/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@UEAAPEAXI@Z @ 0x18004F440
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@WCA@EAAPEAXI@Z @ 0x180074F30 (--_ECPerStreamVolumeAudioStream@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800523DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180058CB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        void *a2)
{
  char v2; // si
  std::_Ref_count_base *v4; // rcx
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  void *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdi
  HANDLE v16; // rax
  void *v17; // rdi
  HANDLE v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v2 = (char)a2;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 59);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (void *)*((_QWORD *)this + 55);
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = (wil::details *)*((_QWORD *)this + 40);
  if ( v7 )
    wil::details::CloseHandle(v7, a2);
  v8 = (wil::details *)*((_QWORD *)this + 39);
  if ( v8 )
    wil::details::CloseHandle(v8, a2);
  v9 = (void *)*((_QWORD *)this + 34);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 35));
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 36) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v10 = *((_QWORD *)this + 27);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 26);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 25);
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 23);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 22);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v15 = (void *)*((_QWORD *)this + 15);
  if ( v15 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v15);
  }
  v17 = (void *)*((_QWORD *)this + 14);
  if ( v17 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v17);
  }
  v19 = *((_QWORD *)this + 10);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 8);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}
