/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C00B6D8C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009D510 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00228E4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C0049974 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     IcGetPossibleInput @ 0x1C0097288 (IcGetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0099900 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009BAFC (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcIsInputValid @ 0x1C009D3D8 (IcIsInputValid.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  ULONG v5; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  unsigned __int8 v11; // r11
  __int64 v12; // rdx
  ULONG Flags; // edi
  __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // rdx
  int v17; // r10d
  __int16 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  char result; // al
  __int64 v22; // rcx
  _BYTE v23[4]; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+54h] [rbp-15h] BYREF
  int v25; // [rsp+58h] [rbp-11h] BYREF
  int v26; // [rsp+5Ch] [rbp-Dh]
  __int128 v27; // [rsp+60h] [rbp-9h]
  __int128 v28; // [rsp+70h] [rbp+7h]

  v2 = *(_DWORD *)a2;
  v25 = 0;
  v5 = 0;
  v23[0] = 0;
  v27 = 0LL;
  v24 = 0;
  v28 = 0LL;
  if ( v2 > *(_DWORD *)(a2 + 8) )
    return 0;
  while ( 1 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &v24) )
    {
      v9 = byte_1C00803E4[8 * v24];
      if ( v9 != -1 )
      {
        if ( (v9 & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_13;
        }
        else if ( v6 )
        {
          goto LABEL_13;
        }
        goto LABEL_22;
      }
    }
    if ( !IcIsInterruptTypeSecondary(v7) )
      break;
    if ( (int)AcpiIrqTranslateSecondaryInterruptToNtResources() >= 0 )
      goto LABEL_13;
LABEL_22:
    if ( ++v2 > *(_DWORD *)(a2 + 8) )
      return 0;
  }
  ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v25);
LABEL_13:
  if ( (int)IcGetPossibleInput(v7, v8, v23) >= 0 && v10 != v23[0] || !IcIsInputValid(v7) )
    goto LABEL_22;
  v12 = *(_QWORD *)(a2 + 40);
  Flags = v5 | 1;
  v14 = *(_QWORD *)(a2 + 72);
  v15 = *(_DWORD *)(v12 + 36);
  v16 = *(_QWORD *)(v12 + 40);
  v17 = v15 & 1;
  v18 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL);
  if ( !v17 )
    Flags = v5;
  v26 = 0;
  v5 = Flags;
  v19 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v20 = v17 | 2;
  v26 = v18 & 1 | (v11 >> 2) & 2;
  if ( (v18 & 8) == 0 )
    v20 = v17;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
              v19,
              v16,
              v14,
              1LL,
              v7,
              v26,
              v20,
              1) < 0
    || RtlFindRange(*(PRTL_RANGE_LIST *)(a1 + 48), v2, v2, 1u, 1u, Flags, *(_BYTE *)(a2 + 67), 0LL, 0LL, (PULONGLONG)a2) < 0 )
  {
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(a2 + 40);
  result = 1;
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(v22 + 16) = 1LL;
  return result;
}
