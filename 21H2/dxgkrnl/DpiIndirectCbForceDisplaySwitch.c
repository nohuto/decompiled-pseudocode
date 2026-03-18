/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1C0392870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C030D550 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall DpiIndirectCbForceDisplaySwitch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  _QWORD v4[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1159) )
    return 3221225485LL;
  memset(v4, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v4[1]);
  v4[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v4[3]) = 56;
  LOBYTE(v4[6]) = -1;
  return DxgkRequestAsyncDisplaySwitchCallout(
           0LL,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v4,
           *(_QWORD *)(v1 + 5728),
           v2);
}
