/*
 * XREFs of _HT_InitSaneLimits @ 0xEA648
 * Callers:
 *     _EnableHalftone@0 @ 0xEA5EA (_EnableHalftone@0.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int HT_InitSaneLimits()
{
  PVOID SystemRoutineAddress; // eax
  int result; // eax
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-70h] BYREF
  int v3; // [esp+10h] [ebp-68h] BYREF
  int v4; // [esp+14h] [ebp-64h] BYREF
  int v5; // [esp+18h] [ebp-60h] BYREF
  int v6; // [esp+1Ch] [ebp-5Ch] BYREF
  _DWORD v7[21]; // [esp+20h] [ebp-58h] BYREF

  v7[1] = 288;
  v7[3] = &v6;
  v7[2] = L"DisableSaneLimits";
  v7[5] = &v4;
  v7[0] = 0;
  v7[10] = &v5;
  v7[4] = 67108868;
  v7[12] = &v3;
  v7[6] = 4;
  v7[7] = 0;
  v7[8] = 288;
  v7[9] = L"HTSurfaceSizeLimit";
  v7[11] = 67108868;
  v7[13] = 4;
  memset(&v7[14], 0, 28);
  v4 = 0;
  v6 = 0;
  v3 = 20000000;
  v5 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((int (__stdcall *)(int, const wchar_t *, _DWORD *, _DWORD, _DWORD))SystemRoutineAddress)(
             3,
             L"GRE_Initialize",
             v7,
             0,
             0);
  if ( !result )
  {
    gbCheckLimits = v6 == 0;
    result = v5;
    gdwMaxSurfaceSize = v5;
  }
  return result;
}
