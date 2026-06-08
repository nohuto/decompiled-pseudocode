/*
 * XREFs of AcquirePccInterface @ 0x1C00229B0
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C0034A74 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     ValidatePccHeader @ 0x1C002AAD8 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  if ( qword_1C00138E0 )
  {
    v3 = 0;
  }
  else
  {
    dword_1C00138B8 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_1C0013898,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_1C00138E0);
      if ( v3 < 0 )
        goto LABEL_7;
      if ( dword_1C001382C == 1 )
      {
        dword_1C0013858 = -1;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
        LOWORD(v7) = 1;
        LOWORD(v6) = 88;
        v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, int, int, _QWORD))(WdfFunctions_01015 + 1048))(
               WdfDriverGlobals,
               v4,
               &GUID_PCC_INTERFACE_INTERNAL,
               &unk_1C0013838,
               v6,
               v7,
               0LL);
      }
      if ( v3 < 0 )
      {
LABEL_7:
        ((void (__fastcall *)(__int64))qword_1C00138B0)(qword_1C00138A0);
        memset(&unk_1C0013898, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  return (unsigned int)v3;
}
