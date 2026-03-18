/*
 * XREFs of ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180251350
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEF40 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDDASwapChain::HrFindInterface(CDDASwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = (char *)(*(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1);
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = (char *)(*(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4);
    if ( !v4 )
    {
      if ( this )
        v4 = (char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24;
      goto LABEL_14;
    }
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v5 )
      goto LABEL_13;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_929900b3_03d9_46ba_bb99_5238ea008614.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_929900b3_03d9_46ba_bb99_5238ea008614.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_929900b3_03d9_46ba_bb99_5238ea008614.Data4;
    if ( !v6 )
    {
LABEL_13:
      v4 = (char *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
LABEL_14:
      *a3 = v4;
      return 0LL;
    }
    return CMILCOMBase::HrFindInterface(this, a2, a3);
  }
  return result;
}
