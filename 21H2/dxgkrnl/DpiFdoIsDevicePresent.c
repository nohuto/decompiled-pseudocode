/*
 * XREFs of DpiFdoIsDevicePresent @ 0x1C02CB3E4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01771F0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02CAA20 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C02CBE84 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _WORD *v10; // rcx
  _WORD v12[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1120);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 2 && !*(_BYTE *)(a1 + 1158) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v12,
         0LL,
         64) == 64 )
  {
    v10 = *(_WORD **)(a1 + 1112);
    if ( v12[0] != *v10 || v12[1] != v10[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v9 = WdLogNewEntry5_WdError(v8, v7);
  v4 = -1073741823;
  *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 616);
  *(_QWORD *)(v9 + 32) = -1073741823LL;
  WdLogEvent5_WdError(v9);
  return v4;
}
