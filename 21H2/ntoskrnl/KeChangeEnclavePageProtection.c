/*
 * XREFs of KeChangeEnclavePageProtection @ 0x140515424
 * Callers:
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiEncls @ 0x1403FF240 (KiEncls.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiEnclsStatus @ 0x1405156B8 (KiEnclsStatus.c)
 */

__int64 __fastcall KeChangeEnclavePageProtection(__int64 a1, char a2)
{
  int *v2; // rbp
  unsigned int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  _BYTE v10[80]; // [rsp+B0h] [rbp+B0h] BYREF

  v2 = (int *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (KeFeatureBits & 0x80000000000LL) == 0 )
    return 3221225659LL;
  memset((void *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
  if ( (a2 & 8) != 0 )
  {
    v4 = 15;
    *v2 = 256;
  }
  else if ( a2 >= 0 )
  {
    v4 = 14;
    v5 = a2 & 1;
    v6 = *v2;
    if ( (a2 & 1) != 0 )
      v6 = 1;
    *v2 = v6;
    if ( (a2 & 2) != 0 )
      *v2 = v5 | 2;
    v7 = v5 | 2;
    if ( (a2 & 2) == 0 )
      v7 = a2 & 1;
    if ( (a2 & 4) != 0 )
      *v2 = v7 | 4;
  }
  else
  {
    v4 = 15;
    *v2 = 1024;
  }
  do
    v8 = KiEncls(v4);
  while ( v8 == 15 );
  return KiEnclsStatus(v8);
}
