/*
 * XREFs of SmpWow64IsWowGuestMachineSupported @ 0x14000851C
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140007950 (SmpInitializeKnownDlls.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpWow64IsWowGuestMachineSupported(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)RtlWow64IsWowGuestMachineSupported(a1, &v3) >= 0 )
    return v3;
  return v1;
}
