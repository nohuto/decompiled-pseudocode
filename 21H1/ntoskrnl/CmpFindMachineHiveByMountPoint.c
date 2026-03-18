/*
 * XREFs of CmpFindMachineHiveByMountPoint @ 0x140788520
 * Callers:
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407882E0 (CmRegisterMachineHiveLoadedNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14078886C (CmpBuildMachineHiveMountPoint.c)
 */

__int64 __fastcall CmpFindMachineHiveByMountPoint(PCUNICODE_STRING String2, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  UNICODE_STRING String1; // [rsp+20h] [rbp-B8h] BYREF
  char v8; // [rsp+30h] [rbp-A8h] BYREF

  v2 = 0;
  v4 = 0;
  while ( 1 )
  {
    *(_QWORD *)&String1.Length = 0x800000LL;
    String1.Buffer = (wchar_t *)&v8;
    CmpBuildMachineHiveMountPoint(v4, &String1);
    if ( RtlEqualUnicodeString(&String1, String2, 1u) )
      break;
    if ( ++v4 >= 7 )
      return (unsigned int)-1073741766;
  }
  *a2 = v4;
  return v2;
}
