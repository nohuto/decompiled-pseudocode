/*
 * XREFs of ?QueryInterface@VirtualDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180064D90
 * Callers:
 *     ?QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDCB0 (-QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDCC0 (-QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDCD0 (-QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDCE0 (-QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktop::QueryInterface(VirtualDesktop *this, struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  void *v5; // r11
  _DWORD *v6; // rcx
  int CanCastTo; // edi
  const struct _GUID *v9; // r9
  __int64 v10; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || a2->Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    (*(void (__fastcall **)(VirtualDesktop *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      a2);
    return v3;
  }
  if ( a2->Data1 == -433443105
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_e62a2edf_0a35_45ae_8951_2893ec19cd86.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_e62a2edf_0a35_45ae_8951_2893ec19cd86.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_e62a2edf_0a35_45ae_8951_2893ec19cd86.Data4[4] )
  {
    *a3 = this;
LABEL_24:
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( a2->Data1 == 56
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (char *)this + 8;
    goto LABEL_24;
  }
  if ( InlineIsEqualGUID(a2, &GUID_1ba7cf30_3591_43fa_abfa_4aaf7abeedb7)
    || InlineIsEqualGUID(v4, &GUID_c179334c_4295_40d3_bea1_c654d965605a) )
  {
    *a3 = v5;
LABEL_8:
    CanCastTo = 0;
    goto LABEL_9;
  }
  if ( InlineIsEqualGUID(v6, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2) )
  {
    *a3 = (void *)v10;
    goto LABEL_8;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v9, a3);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_9:
  if ( CanCastTo >= 0 )
LABEL_10:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
