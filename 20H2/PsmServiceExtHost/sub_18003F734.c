/*
 * XREFs of sub_18003F734 @ 0x18003F734
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18003F884 @ 0x18003F884 (sub_18003F884.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180062244 @ 0x180062244 (sub_180062244.c)
 */

__int64 sub_18003F734()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  RPC_IF_HANDLE **v4; // rdi
  int v5; // ebx
  void **v6; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-38h] BYREF
  void *v9[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]

  v0 = 0;
  *(_OWORD *)v9 = 0LL;
  v1 = 0LL;
  v10 = 0LL;
  v2 = 4LL;
  do
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(off_18008E5D0[v1], 1u, &SecurityDescriptor, 0LL) )
    {
      v9[v1] = 0LL;
      goto LABEL_15;
    }
    ++v0;
    v9[v1++] = SecurityDescriptor;
  }
  while ( v0 < 4 );
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v9[0]) )
  {
LABEL_15:
    v5 = -1073741823;
    goto LABEL_8;
  }
  v3 = 0;
  v4 = (RPC_IF_HANDLE **)&off_1800B3290;
  while ( 1 )
  {
    v5 = sub_18003F884(**v4);
    if ( v5 < 0 )
      break;
    ++v3;
    v4 += 3;
    if ( v3 >= 0xD )
      goto LABEL_8;
  }
  sub_180062244();
LABEL_8:
  v6 = v9;
  do
  {
    if ( *v6 )
      LocalFree(*v6);
    ++v6;
    --v2;
  }
  while ( v2 );
  return (unsigned int)v5;
}
