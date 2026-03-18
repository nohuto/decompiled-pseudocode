/*
 * XREFs of _EditionInitializeWppLogging@8 @ 0xE7B64
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCopyWorkerA @ 0xE7C2A (RtlStringCopyWorkerA.c)
 *     _WPP_INIT_CONTROL_ARRAY@4 @ 0xE7C74 (_WPP_INIT_CONTROL_ARRAY@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _WppInitKm@8 @ 0x27A7A6 (_WppInitKm@8.c)
 *     _WppLoadTracingSupport@0 @ 0x27A812 (_WppLoadTracingSupport@0.c)
 */

int __stdcall EditionInitializeWppLogging(int a1, int a2)
{
  int result; // eax
  NTSTRSAFE_PSTR v3; // [esp-Ch] [ebp-50h]
  size_t v4; // [esp-8h] [ebp-4Ch]
  size_t *v5; // [esp-4h] [ebp-48h]
  const char *v6; // [esp+0h] [ebp-44h]
  size_t v7; // [esp+4h] [ebp-40h]
  _DWORD v8[2]; // [esp+Ch] [ebp-38h] BYREF
  char pszDest[44]; // [esp+14h] [ebp-30h] BYREF

  WPP_INIT_CONTROL_ARRAY();
  WppLoadTracingSupport();
  WPP_MAIN_CB.Timer = 0;
  WppInitKm(a1, a2);
  v8[1] = 0;
  v8[0] = 8;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, v8);
  memset(pszDest, 0, sizeof(pszDest));
  *(_DWORD *)pszDest = 44;
  *(_DWORD *)&pszDest[8] = 1024;
  *(_DWORD *)&pszDest[12] = 200;
  pszDest[28] = 0;
  *(_DWORD *)&pszDest[24] = 16;
  *(_DWORD *)&pszDest[16] = 0;
  pszDest[20] = 0;
  *(_DWORD *)&pszDest[4] = 0;
  RtlStringCopyWorkerA(v3, v4, v5, v6, v7);
  *(_DWORD *)&pszDest[8] = 512;
  result = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, pszDest, &gFullLog);
  if ( result < 0 )
    gFullLog = 0;
  return result;
}
