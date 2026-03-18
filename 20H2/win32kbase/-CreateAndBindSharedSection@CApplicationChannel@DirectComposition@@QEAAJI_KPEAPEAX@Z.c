/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C00A6CAC
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C00A6BF0 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00585DC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C00A6D54 (-InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
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
