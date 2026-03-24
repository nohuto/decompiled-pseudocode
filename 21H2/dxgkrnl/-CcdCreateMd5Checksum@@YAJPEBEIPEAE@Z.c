/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C01310BC
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C0130F0C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C0131024 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C0131188 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C0131B7C (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3)
{
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  __int64 v13; // rax

  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = (char *)operator new[](0x68uLL, 0x63644356u, PagedPool);
  v11 = v6;
  if ( v6 )
  {
    memset(v6 + 24, 0, 0x50uLL);
    *(_OWORD *)a3 = 0LL;
    *((_DWORD *)v11 + 1) = 0;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 2) = 1732584193;
    *((_DWORD *)v11 + 3) = -271733879;
    *((_DWORD *)v11 + 4) = -1732584194;
    *((_DWORD *)v11 + 5) = 271733878;
    DX_MD5Update((struct MD5_CTX *)v11, a1, a2);
    DX_MD5Final((struct MD5_CTX *)v11);
    *(_OWORD *)a3 = *(_OWORD *)(v11 + 88);
    operator delete(v11);
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
