/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C0034468
 * Callers:
 *     QueryPepCapabilites @ 0x1C0034670 (QueryPepCapabilites.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  bool v6; // zf
  __int64 v10; // rcx
  int v12; // esi
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-50h]

  v6 = *(_DWORD *)(a1 + 80) == 0;
  v16 = 0;
  v15 = 0LL;
  v10 = *(_QWORD *)(a1 + 1104);
  HIBYTE(v16) = !v6;
  v12 = PoFxProcessorNotification(v10, 1LL, &v15);
  if ( v12 >= 0 )
  {
    *a2 = HIDWORD(v15);
    *a4 = v15;
    *a5 = v16;
    *a6 = BYTE1(v16);
    *a3 = BYTE2(v16);
    v13 = *(_QWORD *)(a1 + 272);
    if ( (v13 & 0x300000300LL) == 0 )
    {
      *a2 = 0;
      v13 = *(_QWORD *)(a1 + 272);
    }
    if ( (v13 & 0x1000000000LL) == 0 )
    {
      *a4 = 0;
      *a5 = 0;
      *a3 = 0;
      v13 = *(_QWORD *)(a1 + 272);
    }
    *a6 &= -((v13 & 0x400) != 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x10u,
      (__int64)&WPP_26255293f6d13ac9c2d7d7a8bbb4918d_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
