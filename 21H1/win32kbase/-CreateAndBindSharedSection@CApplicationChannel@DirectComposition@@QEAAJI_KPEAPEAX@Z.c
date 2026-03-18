/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C00363BC
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0036300 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0036464 (-InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C008E23C (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        void **a4)
{
  unsigned __int64 v5; // rcx
  DirectComposition::CDCompMappedSharedSectionMarshaler *v8; // rdi
  int v9; // ebx

  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v8 = *(DirectComposition::CDCompMappedSharedSectionMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8
    && ((*(unsigned int (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *))(*(_QWORD *)v8 + 8LL))(v8) == 169
     || (*(unsigned int (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *))(*(_QWORD *)v8 + 8LL))(v8) == 46) )
  {
    v9 = DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v9 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
