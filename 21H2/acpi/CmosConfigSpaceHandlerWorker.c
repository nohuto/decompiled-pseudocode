/*
 * XREFs of CmosConfigSpaceHandlerWorker @ 0x1C004E244
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C004E110 (CmosConfigSpaceHandler.c)
 *     CmosTranslatePNPIDToEnum @ 0x1C004E370 (CmosTranslatePNPIDToEnum.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CmosConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // edi

  v5 = 259;
  if ( *a4 )
  {
    if ( *a4 == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiWriteCmosRoutine)(
        (unsigned int)CmosDeviceType,
        a4[4],
        *((_QWORD *)a4 + 3),
        a4[5]);
    else
      v5 = -1073741822;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiReadCmosRoutine)(
      (unsigned int)CmosDeviceType,
      a4[4],
      *((_QWORD *)a4 + 3),
      a4[5]);
  }
  (*((void (__fastcall **)(_QWORD))a4 + 5))(*((_QWORD *)a4 + 6));
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)a4 + 1));
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)a4 + 7));
  ExFreePoolWithTag(a4, 0);
  return v5;
}
