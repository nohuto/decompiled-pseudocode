/*
 * XREFs of ?HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180244040
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5380 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::HrFindInterface(CDDisplaySwapChain *this, const struct _GUID *a2, void **a3)
{
  char *v3; // rax
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = 0LL;
  v5 = -2147024809;
  if ( a3 )
  {
    v5 = 0;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v6 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
        if ( v9 )
        {
          v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
            v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
          if ( v10 )
            return (unsigned int)CMILCOMBase::HrFindInterface(this, a2, a3);
        }
        v3 = (char *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        goto LABEL_20;
      }
      if ( this )
      {
        v7 = *(int *)(*((_QWORD *)this + 3) + 8LL);
        goto LABEL_12;
      }
    }
    else if ( this )
    {
      v7 = *(int *)(*((_QWORD *)this + 3) + 12LL);
LABEL_12:
      v3 = (char *)this + v7 + 24;
    }
LABEL_20:
    *a3 = v3;
  }
  return v5;
}
