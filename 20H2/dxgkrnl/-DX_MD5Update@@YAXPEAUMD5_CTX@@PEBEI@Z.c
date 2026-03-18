/*
 * XREFs of ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C012D32C
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C012C86C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C012C938 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C012CA4C (TransformMD5.c)
 */

void __fastcall DX_MD5Update(struct MD5_CTX *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v10; // r8d
  int *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // edx
  int v15[16]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)a1;
  v6 = a3;
  v7 = (*(_DWORD *)a1 >> 3) & 0x3F;
  v8 = v3 + 8 * a3;
  v9 = *((_DWORD *)a1 + 1);
  if ( v8 < v3 )
    ++v9;
  *(_DWORD *)a1 = v8;
  *((_DWORD *)a1 + 1) = v9 + (v6 >> 29);
  while ( v6 )
  {
    --v6;
    *((_BYTE *)a1 + v7 + 24) = *a2++;
    if ( ++v7 == 64 )
    {
      v10 = 2;
      v11 = v15;
      v12 = 16LL;
      do
      {
        v13 = v10 - 2;
        v14 = (*((unsigned __int8 *)a1 + v10 + 23) | ((*((unsigned __int8 *)a1 + v10 + 24) | (*((unsigned __int8 *)a1
                                                                                              + v10
                                                                                              + 25) << 8)) << 8)) << 8;
        v10 += 4;
        *v11++ = *((unsigned __int8 *)a1 + v13 + 24) | v14;
        --v12;
      }
      while ( v12 );
      TransformMD5((int *)a1 + 2, v15);
      v7 = 0LL;
    }
  }
}
