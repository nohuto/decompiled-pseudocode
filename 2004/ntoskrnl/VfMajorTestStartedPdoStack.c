/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x1409D4BE4
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x14036BB18 (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D3AF8 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 (__fastcall *__fastcall VfMajorTestStartedPdoStack(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  unsigned int i; // ebx
  void (__fastcall *v4)(__int64); // rax

  result = (__int64 (__fastcall *)(_QWORD))IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && VfVerifyMode > 2 )
  {
    for ( i = 0; i <= 0x1B; ++i )
    {
      v4 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140D4A110 + 12 * i);
      if ( v4 )
        v4(a1);
    }
    result = qword_140D4AB90;
    if ( qword_140D4AB90 )
      return (__int64 (__fastcall *)(_QWORD))qword_140D4AB90(a1);
  }
  return result;
}
