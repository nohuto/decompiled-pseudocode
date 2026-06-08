/*
 * XREFs of RegisterVmIdleStates @ 0x1C00250F0
 * Callers:
 *     RegisterGuestIdleStates @ 0x1C0023C00 (RegisterGuestIdleStates.c)
 *     RegisterHvPepIdleStatesV2 @ 0x1C0024B5C (RegisterHvPepIdleStatesV2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     RegisterHvPepContext @ 0x1C0024ABC (RegisterHvPepContext.c)
 *     RegisterIdleComplete @ 0x1C00301C0 (RegisterIdleComplete.c)
 */

__int64 __fastcall RegisterVmIdleStates(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  _DWORD *v5; // rdx
  NTSTATUS v6; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00143F8,
    0LL);
  v2 = *(unsigned int **)(a1 + 1136);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = 0;
    v5 = v2 + 1;
    do
    {
      if ( (*v5 & 0x200) == 0 )
      {
        v6 = -1073741637;
        goto LABEL_12;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < v3 );
    v6 = RegisterHvPepContext(a1);
    if ( v6 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 704) )
      {
        *(_BYTE *)(a1 + 704) = 1;
        RegisterIdleComplete(a1);
      }
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741823;
  }
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00143F8);
  return (unsigned int)v6;
}
