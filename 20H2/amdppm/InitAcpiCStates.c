/*
 * XREFs of InitAcpiCStates @ 0x1C003255C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_CST @ 0x1C0006094 (Display_CST.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1CStates @ 0x1C0032160 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x1C0032404 (InitAcpi2CStates.c)
 */

__int64 __fastcall InitAcpiCStates(__int64 a1)
{
  __int64 v2; // rax
  int inited; // edi
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 272);
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates(a1, (unsigned int **)(a1 + 512));
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = *(_QWORD *)(a1 + 272);
  }
  if ( (v2 & 7) != 0 )
  {
    inited = InitAcpi1CStates(a1);
    if ( inited < 0 )
    {
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_8;
    }
LABEL_7:
    inited = 0;
    Display_CST(*(int **)(a1 + 512), v4, v5, v6);
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
