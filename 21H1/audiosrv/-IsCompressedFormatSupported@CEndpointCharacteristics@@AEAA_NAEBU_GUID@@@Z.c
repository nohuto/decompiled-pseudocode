/*
 * XREFs of ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18004C2F4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18004BB70 (std--_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180065F70 (std--_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATE_ea_180065F70.c)
 *     _lambda_edd11abfd7fb8004be40d25e4712f682_::operator() @ 0x180066A74 (_lambda_edd11abfd7fb8004be40d25e4712f682_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x1801209F0 (std--_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATE_ea_1801209F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEndpointCharacteristics::IsCompressedFormatSupported(
        CEndpointCharacteristics *this,
        const struct _GUID *a2)
{
  __int64 v2; // rcx
  char v4; // bl
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_Endpoint_EncodedFormatSupport,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) >= 0xC )
  {
    v6 = *(_DWORD *)(v11 + 8);
    if ( LODWORD(pvar[1]) == 16LL * v6 + 12 )
    {
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = 16LL * v7;
          v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v8 + v11 + 12);
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v8 + v11 + 12) )
            v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v8 + v11 + 20);
          if ( !v9 )
            break;
          if ( ++v7 >= v6 )
            goto LABEL_3;
        }
        v4 = 1;
      }
    }
  }
LABEL_3:
  PropVariantClear(pvar);
  return v4;
}
