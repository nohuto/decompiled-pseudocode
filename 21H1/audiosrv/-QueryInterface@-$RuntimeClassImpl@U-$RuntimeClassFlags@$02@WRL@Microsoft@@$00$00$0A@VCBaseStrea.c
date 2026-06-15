/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800282C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075120 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180075120.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180075130.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180075140.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180028390 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int Data1; // edx
  const struct _GUID *v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // r10
  const struct _GUID *v9; // rcx
  __int64 v10; // r10
  const struct _GUID *v11; // rcx
  int v13; // eax
  __int64 v14; // r10

  v3 = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&a2->Data2, Data1) == __PAIR64__(
                                                     *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                     0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
    goto LABEL_8;
  }
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    goto LABEL_6;
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_e969a7df_0ef8_4763_9e1a_d1296f5f5adf) )
  {
    *v7 = v10;
    v13 = 0;
    goto LABEL_15;
  }
  if ( !(unsigned int)InlineIsEqualGUID(v9, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v7 = v14 + 8;
      v13 = 0;
    }
    else
    {
      v13 = -2147467262;
    }
LABEL_15:
    v3 = v13;
    if ( v13 < 0 )
      return v3;
    goto LABEL_7;
  }
LABEL_6:
  *v7 = v8;
LABEL_7:
  a1 = *v7;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
