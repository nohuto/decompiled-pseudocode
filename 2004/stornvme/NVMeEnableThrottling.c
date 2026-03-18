/*
 * XREFs of NVMeEnableThrottling @ 0x1C000D38C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 * Callees:
 *     IsDumpMode @ 0x1C000911C (IsDumpMode.c)
 *     NVMeRegisterThrottling @ 0x1C0013C38 (NVMeRegisterThrottling.c)
 */

char __fastcall NVMeEnableThrottling(_DWORD *a1)
{
  int v2; // eax
  __int64 v3; // rcx

  LOBYTE(v2) = IsDumpMode((__int64)a1);
  if ( !(_BYTE)v2 )
  {
    NVMeRegisterThrottling(v3, 0LL, *(unsigned int *)(v3 + 132));
    NVMeRegisterThrottling(a1, 1LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 2LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 3LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 4LL, (unsigned int)a1[33]);
    v2 = a1[6];
    if ( (v2 & 0x80u) == 0 )
      LOBYTE(v2) = NVMeRegisterThrottling(a1, 5LL, (unsigned int)a1[34]);
  }
  return v2;
}
