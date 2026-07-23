/*
 * XREFs of _PssNtValidateDescriptor@8 @ 0x4B386E10
 * Callers:
 *     _PssNtDuplicateSnapshot@20 @ 0x4B3868E0 (_PssNtDuplicateSnapshot@20.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     PsspFilterReadFaultsFilter @ 0x4B386F8E (PsspFilterReadFaultsFilter.c)
 */

int __stdcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v2; // esi
  size_t v4; // [esp-4h] [ebp-94h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+20h] [ebp-70h] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  if ( !a1 )
    return -1073741816;
  ms_exc.registration.TryLevel = 0;
  v2 = *a1;
  ms_exc.registration.TryLevel = -2;
  if ( v2 != 1146311504 )
  {
    LODWORD(v4) = 80;
    memset(&ExceptionRecord, 0, v4);
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned int)a1;
    ExceptionRecord.ExceptionInformation[1] = 0;
    ExceptionRecord.ExceptionInformation[2] = v2;
    ExceptionRecord.ExceptionInformation[3] = 1146311504;
    RtlRaiseException(&ExceptionRecord);
  }
  return 0;
}
