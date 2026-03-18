/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C01ACB70
 * Callers:
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C01ACAD8 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C01AEC2C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01D4550 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C01ACC2C (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C01AD620 (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( !a1 || !a3 )
    return 3221225485LL;
  v7 = operator new[](0x68uLL, 0x63644356u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 8) = 1732584193;
    *(_DWORD *)(v7 + 12) = -271733879;
    *(_DWORD *)(v7 + 16) = -1732584194;
    *(_DWORD *)(v7 + 20) = 271733878;
    DX_MD5Update((struct MD5_CTX *)v7, a1, a2);
    DX_MD5Final((struct MD5_CTX *)v8);
    *(_OWORD *)a3 = *(_OWORD *)(v8 + 88);
    operator delete((void *)v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    return 3221225495LL;
  }
}
