/*
 * XREFs of ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1410
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077300 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::HrFindInterface(
        CLegacyRemotingSwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data4;
        if ( v6 )
          return CMILCOMBase::HrFindInterface(this, a2, a3);
      }
      v7 = (char *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
    }
    else if ( this )
    {
      v7 = (char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24;
    }
    else
    {
      v7 = 0LL;
    }
    *a3 = v7;
    return 0LL;
  }
  return result;
}
