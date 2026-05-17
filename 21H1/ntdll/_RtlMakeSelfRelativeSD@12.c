/*
 * XREFs of _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30
 * Callers:
 *     _RtlAbsoluteToSelfRelativeSD@12 @ 0x4B2E6A00 (_RtlAbsoluteToSelfRelativeSD@12.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlMakeSelfRelativeSD(_DWORD *a1, char *a2, size_t *a3)
{
  size_t v3; // eax
  size_t v4; // eax
  int v5; // ebx
  char *v6; // esi
  int v7; // eax
  size_t v8; // ebx
  int v10; // eax
  void *v11[2]; // [esp+4h] [ebp-24h] BYREF
  size_t v12; // [esp+Ch] [ebp-1Ch]
  void *v13; // [esp+10h] [ebp-18h] BYREF
  void *Src; // [esp+14h] [ebp-14h] BYREF
  size_t v15; // [esp+18h] [ebp-10h] BYREF
  size_t v16; // [esp+1Ch] [ebp-Ch] BYREF
  size_t v17; // [esp+20h] [ebp-8h] BYREF
  size_t Size; // [esp+24h] [ebp-4h] BYREF

  RtlpQuerySecurityDescriptor(&v17, v11, &v16, &v13, &v15, &Src, &Size);
  v12 = v17;
  v3 = v15 + v16 + v17;
  v17 = v15;
  v4 = Size + 20 + v3;
  if ( v4 > *a3 )
  {
    *a3 = v4;
    return -1073741789;
  }
  else if ( a2 )
  {
    v5 = 0;
    memset(a2, 0, v4);
    *(_DWORD *)a2 = *a1;
    v6 = a2 + 20;
    if ( Size )
    {
      memcpy(a2 + 20, Src, Size);
      v6 += Size;
      v7 = 20;
    }
    else
    {
      v7 = 0;
    }
    *((_DWORD *)a2 + 3) = v7;
    if ( v17 )
    {
      memcpy(v6, v13, v17);
      v5 = v6 - a2;
      v6 += v17;
    }
    *((_DWORD *)a2 + 4) = v5;
    v8 = v12;
    if ( v12 )
    {
      memcpy(v6, v11[1], v12);
      v10 = v6 - a2;
      v6 += v8;
      *((_DWORD *)a2 + 1) = v10;
    }
    if ( v16 )
    {
      memcpy(v6, v11[0], v16);
      *((_DWORD *)a2 + 2) = v6 - a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
