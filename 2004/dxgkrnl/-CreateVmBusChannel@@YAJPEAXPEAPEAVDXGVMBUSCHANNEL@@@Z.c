/*
 * XREFs of ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B46F0
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C02B5140 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02B52E4 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C02B27FC (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateVmBusChannel(void *a1, struct _GUID *a2, const struct _GUID *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-18h]

  v12 = *(_DWORD *)L"l";
  v10.Buffer = (wchar_t *)&v11;
  v11 = *(_OWORD *)L"DXGK_Vail";
  *(_QWORD *)&v10.Length = 1310738LL;
  v3 = DXGVMBUSCHANNEL::Create(a1, a2, a3, &v10, a1 != 0LL, (struct DXGVMBUSCHANNEL **)a2);
  v7 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
