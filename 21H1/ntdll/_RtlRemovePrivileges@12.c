/*
 * XREFs of _RtlRemovePrivileges@12 @ 0x4B346D90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

int __stdcall RtlRemovePrivileges(int a1, int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  _BYTE *v9; // ecx
  __int64 v10; // rax
  _DWORD *v11; // ecx
  _BYTE v12[4]; // [esp+Ch] [ebp-1C0h] BYREF
  int v13; // [esp+10h] [ebp-1BCh]
  unsigned int v14; // [esp+14h] [ebp-1B8h]
  _DWORD *v15; // [esp+18h] [ebp-1B4h]
  _DWORD v16[3]; // [esp+1Ch] [ebp-1B0h] BYREF
  _BYTE v17[416]; // [esp+28h] [ebp-1A4h] BYREF

  v3 = a1;
  v4 = 0;
  v13 = a1;
  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 4 * v6);
      if ( (unsigned int)(v7 - 2) > 0x22 )
        return -1073741811;
      v5 |= 1LL << v7;
      v4 |= (unsigned __int64)(1LL << v7) >> 32;
      if ( ++v6 >= a3 )
      {
        v3 = v13;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    result = ZwQueryInformationToken(v3, 3, (int)v16, 428, (int)v12);
    if ( result >= 0 )
    {
      v14 = 0;
      if ( v16[0] )
      {
        v9 = v17;
        v15 = v17;
        do
        {
          v10 = 1LL << *((_DWORD *)v9 - 2);
          v11 = v15;
          if ( v4 & HIDWORD(v10) | v5 & (unsigned int)v10 )
          {
            v5 &= ~(_DWORD)v10;
            v4 &= ~HIDWORD(v10);
          }
          else
          {
            *v15 = 4;
          }
          v9 = v11 + 3;
          v15 = v9;
          ++v14;
        }
        while ( v14 < v16[0] );
      }
      if ( v4 | v5 )
        return 262;
      else
        return ZwAdjustPrivilegesToken(v13, 0, (int)v16, 428, 0, 0);
    }
  }
  return result;
}
