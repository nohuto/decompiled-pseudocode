/*
 * XREFs of _RtlNewSecurityGrantedAccess@24 @ 0x4B336330
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlNewSecurityGrantedAccess(int a1, _DWORD *a2, _DWORD *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // esi
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // eax
  bool v10; // sf
  char v11; // al
  _BYTE v13[4]; // [esp+Ch] [ebp-60h] BYREF
  _DWORD *v14; // [esp+10h] [ebp-5Ch]
  _DWORD *v15; // [esp+14h] [ebp-58h]
  char v16; // [esp+1Bh] [ebp-51h] BYREF
  _BYTE v17[56]; // [esp+1Ch] [ebp-50h] BYREF
  _DWORD v18[5]; // [esp+54h] [ebp-18h] BYREF

  v6 = a2;
  v7 = 0;
  v8 = a4;
  v14 = a3;
  v15 = a6;
  v16 = 0;
  if ( !a4 )
    v8 = -5;
  ZwQueryInformationToken(v8, 10, (int)v17, 56, (int)v13);
  RtlMapGenericMask(&a1, a5);
  v9 = a1;
  *v15 = a1;
  if ( (v9 & 0x1000000) != 0 )
  {
    v18[0] = 1;
    v18[1] = 1;
    v18[2] = 8;
    v18[3] = 0;
    v18[4] = 0;
    v10 = ZwPrivilegeCheck(v8, (int)v18, (int)&v16) < 0;
    v11 = v16;
    if ( (v10 || !v16) && !v16 )
      return -1073741727;
    *v15 &= ~0x1000000u;
  }
  else
  {
    v11 = v16;
  }
  if ( *v14 >= 0x14u )
  {
    v6[1] = 0;
    if ( v11 )
    {
      *v6 = 1;
      v6[3] = 0;
      v7 = 0x80000000;
      v6[2] = 8;
    }
    else
    {
      *v6 = 0;
      v6[2] = 0;
      v6[3] = 0;
    }
    v6[4] = v7;
    return 0;
  }
  else
  {
    *v14 = 20;
    return -1073741789;
  }
}
