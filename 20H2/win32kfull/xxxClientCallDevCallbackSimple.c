/*
 * XREFs of xxxClientCallDevCallbackSimple @ 0x1C023172C
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C01F07A0 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxClientCallDevCallbackSimple(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // xmm0_8
  int v9; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-110h] BYREF
  _OWORD v11[13]; // [rsp+60h] [rbp-E8h] BYREF

  v10[0] = 0LL;
  v9 = 0;
  memset(v11, 0, sizeof(v11));
  *((_QWORD *)&v11[2] + 1) = a1;
  v11[3] = *(_OWORD *)a2;
  v11[4] = *(_OWORD *)(a2 + 16);
  v11[5] = *(_OWORD *)(a2 + 32);
  v11[6] = *(_OWORD *)(a2 + 48);
  v11[7] = *(_OWORD *)(a2 + 64);
  v11[8] = *(_OWORD *)(a2 + 80);
  v11[9] = *(_OWORD *)(a2 + 96);
  v11[10] = *(_OWORD *)(a2 + 112);
  v11[11] = *(_OWORD *)(a2 + 128);
  v11[12] = *(_OWORD *)(a2 + 144);
  EtwTraceBeginCallback(122LL);
  LODWORD(a1) = KeUserModeCallback(122LL, v11, 208LL, v10, &v9);
  EtwTraceEndCallback(122LL);
  if ( (int)a1 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || v10[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  v5 = *v4;
  v10[1] = *v4;
  if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    v6 = *(_QWORD *)(v10[0] + 16LL);
    if ( v6 + 24 < v6 || v6 + 24 > MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v7 = *(_QWORD *)(v6 + 16);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)v6;
    *(_QWORD *)(a2 + 72) = v7;
  }
  return (unsigned int)v5;
}
