/*
 * XREFs of AcpiEvaluateMethod @ 0x1C0026EFC
 * Callers:
 *     AcpiEval_OSC @ 0x1C00056F8 (AcpiEval_OSC.c)
 *     AcpiEval_CPC @ 0x1C00249AC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C00250B0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00253C8 (AcpiEval_CST.c)
 *     AcpiEval_LPI @ 0x1C0025820 (AcpiEval_LPI.c)
 *     AcpiEval_PCCP @ 0x1C00258E0 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C0025AE8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PDC @ 0x1C0025CE4 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0025DEC (AcpiEval_PPC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0025F60 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00262C4 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C002668C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C00267EC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0026AFC (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 *v6; // r14
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp+7h]
  __int128 v21; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+80h] [rbp+1Fh]
  __int64 v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v23 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v6 = a3;
  v21 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v15 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 1114203457 )
    {
      switch ( v15 )
      {
        case 1130980673:
          v9 = *((_DWORD *)a3 + 2);
          break;
        case 1231643969:
          v9 = 12;
          break;
        case 1399416129:
          v9 = *((_DWORD *)a3 + 2) + 15;
          break;
        default:
          return (unsigned int)-1073741584;
      }
      goto LABEL_6;
    }
  }
  else
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v23) = 1114203457;
    v6 = &v23;
    HIDWORD(v23) = a2;
  }
  v9 = 8;
LABEL_6:
  v10 = 1024;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v13 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v21 = 1LL;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v21 + 1) = v6;
    v22 = v9;
    *((_QWORD *)&v19 + 1) = PoolWithTag;
    v20 = v10;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v13,
            0LL,
            3325956LL,
            &v21,
            &v19,
            0LL,
            &v18);
    v8 = v14;
    if ( v14 != -2147483643 )
      break;
    v10 = v12[1];
    ExFreePoolWithTag(v12, 0);
  }
  if ( v14 >= 0 && (v16 = v18, v18) )
  {
    *a4 = v12;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v12, 0);
    v16 = v18;
  }
  if ( a5 )
    *a5 = v16;
  return v8;
}
