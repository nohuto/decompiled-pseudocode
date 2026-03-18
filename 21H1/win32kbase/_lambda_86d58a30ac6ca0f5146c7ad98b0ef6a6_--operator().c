/*
 * XREFs of _lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator() @ 0x1C01230F8
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0123338 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 * Callees:
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0123248 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

int __fastcall lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator()(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  _OWORD *v3; // r8
  __int128 v4; // xmm0
  _OWORD *v5; // r8
  const struct _UNICODE_STRING *v6; // r8
  int result; // eax

  v2 = a2 + 72;
  *(_DWORD *)(a2 + 68) = **(_BYTE **)a1 != 0;
  *(_DWORD *)(a2 + 64) = **(_DWORD **)(a1 + 8);
  v3 = **(_OWORD ***)(a1 + 16);
  if ( v3 )
  {
    *(_OWORD *)v2 = *v3;
    a2 += 200LL;
    *(_OWORD *)(v2 + 16) = v3[1];
    *(_OWORD *)(v2 + 32) = v3[2];
    *(_OWORD *)(v2 + 48) = v3[3];
    *(_OWORD *)(v2 + 64) = v3[4];
    *(_OWORD *)(v2 + 80) = v3[5];
    *(_OWORD *)(v2 + 96) = v3[6];
    v4 = v3[7];
    v5 = v3 + 8;
    *(_OWORD *)(v2 + 112) = v4;
    *(_OWORD *)(v2 + 128) = *v5;
    *(_OWORD *)(v2 + 144) = v5[1];
    *(_OWORD *)(v2 + 160) = v5[2];
    *(_OWORD *)(v2 + 176) = v5[3];
    *(_OWORD *)(v2 + 192) = v5[4];
    *(_QWORD *)(v2 + 208) = *((_QWORD *)v5 + 10);
    *(_DWORD *)(v2 + 216) = *((_DWORD *)v5 + 22);
  }
  v6 = **(const struct _UNICODE_STRING ***)(a1 + 24);
  if ( !v6 )
    return 0;
  result = RtlStringCchCopyUnicodeString((unsigned __int16 *)v2, a2, v6);
  if ( result >= 0 )
    return 0;
  return result;
}
