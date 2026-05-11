/*
 * XREFs of PinMatchChannelConfigToFormat @ 0x1C00240C0
 * Callers:
 *     PinValidateDataFormat @ 0x1C0024190 (PinValidateDataFormat.c)
 *     IntersectConvertDatarangeToFormat @ 0x1C0025894 (IntersectConvertDatarangeToFormat.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 */

__int64 __fastcall PinMatchChannelConfigToFormat(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int i; // r10d
  __int64 v5; // r10
  int *j; // rax
  unsigned int v7; // ecx
  int v9; // [rsp+0h] [rbp-28h] BYREF
  _DWORD v10[5]; // [rsp+4h] [rbp-24h]

  v2 = 0LL;
  v3 = a2;
  for ( i = 0; v3; v3 &= v3 - 1 )
    ++i;
  if ( i < a1 )
  {
    if ( !i )
    {
      v7 = a1 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          return 3;
      }
      else
      {
        return 4;
      }
    }
  }
  else
  {
    v9 = 63;
    v10[0] = 1551;
    v10[1] = 255;
    v10[2] = 1599;
    v10[3] = 1;
    v10[4] = 4;
    if ( a1 )
    {
      v5 = a1;
      do
      {
        v3 |= a2 - (a2 & (a2 - 1));
        a2 &= a2 - 1;
        --v5;
      }
      while ( v5 );
    }
    for ( j = &v9; v3 != *j; j += 2 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 3 )
        return v3;
    }
    return (unsigned int)v10[2 * v2];
  }
  return v3;
}
