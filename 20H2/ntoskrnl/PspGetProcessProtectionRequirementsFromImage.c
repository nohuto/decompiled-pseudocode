/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x1406D69C0
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1406B348C (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int8 v1; // r9
  unsigned __int8 *v2; // r11
  char v4; // r10
  char v5; // r9

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF0) == 0x50 )
  {
    v4 = -127;
    if ( v1 && v1 != 0x81 && RtlTestProtectedAccess(v1, 0x81u) )
      v4 = v5;
    v1 = v4;
  }
  *v2 = v1;
  return 0LL;
}
