/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C006A4C0
 * Callers:
 *     GreSetLayout @ 0x1C006A460 (GreSetLayout.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C00C5BF4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::dwSetLayout(DC *this, int a2, int a3)
{
  __int64 v3; // r9
  DC *v4; // r10
  unsigned int v5; // r11d
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+10h]
  __int64 v14; // [rsp+30h] [rbp+10h]
  __int64 v15; // [rsp+48h] [rbp+28h]

  v3 = *((_QWORD *)this + 122);
  v4 = this;
  v5 = *(_DWORD *)(v3 + 108);
  *(_DWORD *)(v3 + 108) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v5) & 7) != 0 )
  {
    v7 = *((_QWORD *)this + 122);
    v13 = *(_QWORD *)(v7 + 316);
    v15 = *(_QWORD *)(v7 + 324);
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 104) = 8;
      v7 = *((_QWORD *)v4 + 122);
    }
    LODWORD(v13) = -(int)v13;
    LODWORD(v15) = -(int)v15;
    *(_QWORD *)(v7 + 316) = v13;
    *(_QWORD *)(*((_QWORD *)v4 + 122) + 324LL) = v15;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v4);
    }
    else
    {
      v12 = *((_QWORD *)v4 + 122);
      HIDWORD(v14) = HIDWORD(*(_QWORD *)(v12 + 308));
      LODWORD(v14) = a2 - *(_QWORD *)(v12 + 308);
      *(_QWORD *)(v12 + 308) = v14;
    }
    v8 = *((_QWORD *)v4 + 122);
    if ( (*(_BYTE *)(v8 + 272) & 6) != 6 )
    {
      *(_DWORD *)(v8 + 272) ^= 2u;
      v8 = *((_QWORD *)v4 + 122);
    }
    v9 = *((_DWORD *)v4 + 62);
    v10 = v9 | 4;
    v11 = v9 & 0xFFFFFFFB;
    if ( (*((_DWORD *)v4 + 62) & 4) == 0 )
      v11 = v10;
    *((_DWORD *)v4 + 62) = v11;
    *(_DWORD *)(v8 + 340) |= 0x4090u;
  }
  return v5;
}
