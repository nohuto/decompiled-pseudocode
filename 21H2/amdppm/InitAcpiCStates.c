/*
 * XREFs of InitAcpiCStates @ 0x1C0022B14
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_CST @ 0x1C0006884 (Display_CST.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1CStates @ 0x1C0022718 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x1C00229BC (InitAcpi2CStates.c)
 */

__int64 __fastcall InitAcpiCStates(_QWORD *a1)
{
  __int64 v2; // rax
  int inited; // edi
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v2 = a1[34];
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates((__int64)a1, a1 + 64);
    if ( inited >= 0 )
      goto LABEL_7;
    a1[34] &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = a1[34];
  }
  if ( (v2 & 7) != 0 )
  {
    inited = InitAcpi1CStates((__int64)a1);
    if ( inited < 0 )
    {
      a1[34] &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_8;
    }
LABEL_7:
    inited = 0;
    Display_CST((int *)a1[64], v4, v5, v6);
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
  return (unsigned int)inited;
}
