/*
 * XREFs of HalpReadExtendedMcaRegistersAMD @ 0x1404BD74C
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x1404BA8BC (HalpMcaPopulateErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall HalpReadExtendedMcaRegistersAMD(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  int v7; // ebp

  v4 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v7 = 16 * a2;
    a4[9] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
              a3,
              (unsigned int)(16 * a2 - 1073733627),
              0LL);
    a4[10] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733626),
               0LL);
    a4[11] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733628),
               0LL);
    a4[12] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733624),
               0LL);
    a4[13] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733623),
               0LL);
    a4[14] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733622),
               0LL);
    a4[15] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733621),
               0LL);
    a4[16] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733620),
               0LL);
    a4[17] = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
               a3,
               (unsigned int)(v7 - 1073733619),
               0LL);
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000007 )
    {
      _RAX = 2147483655LL;
      __asm { cpuid }
      v4 = _RBX;
    }
    a4[18] = v4;
  }
}
