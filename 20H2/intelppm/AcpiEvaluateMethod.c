/*
 * XREFs of AcpiEvaluateMethod @ 0x1C0021480
 * Callers:
 *     AcpiEval_OSC @ 0x1C0003864 (AcpiEval_OSC.c)
 *     AcpiEval_PPC @ 0x1C00213A0 (AcpiEval_PPC.c)
 *     InitAcpiLpiStates @ 0x1C0022B4C (InitAcpiLpiStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C002398C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C0023BF0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0023D60 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0024228 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0024514 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C00248D4 (AcpiEval_TSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C0024A28 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PCCP @ 0x1C0032C5C (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C0032E64 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C0032F6C (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C00330CC (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, unsigned int **a4, _DWORD *a5)
{
  __int64 *v6; // rsi
  int v8; // ebx
  SIZE_T v9; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-9h] BYREF
  int v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+74h] [rbp+Bh]
  _QWORD v22[2]; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  __int64 v25; // [rsp+D8h] [rbp+6Fh] BYREF

  v25 = 0LL;
  v6 = a3;
  HIDWORD(v22[0]) = 0;
  v24 = 0;
  HIDWORD(v19[0]) = 0;
  v21 = 0;
  v18 = 0LL;
  if ( !a3 )
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v25) = 1114203457;
    v6 = &v25;
    HIDWORD(v25) = a2;
LABEL_4:
    v8 = 8;
    goto LABEL_5;
  }
  v17 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 1130980673 )
  {
    if ( v17 != 1114203457 )
    {
      if ( v17 == 1231643969 )
      {
        v8 = 12;
      }
      else
      {
        if ( v17 != 1399416129 )
          return (unsigned int)-1073741584;
        v8 = *((_DWORD *)a3 + 2) + 15;
      }
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v8 = *((_DWORD *)a3 + 2);
LABEL_5:
  v9 = 1024LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x72637250u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v12 = *(_QWORD *)(a1 + 16);
    v19[1] = PoolWithTag;
    v22[0] = 1LL;
    v24 = 0;
    v22[1] = v6;
    v23 = v8;
    v19[0] = 1LL;
    v21 = 0;
    v20 = v9;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            v22,
            v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, 0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, 0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
