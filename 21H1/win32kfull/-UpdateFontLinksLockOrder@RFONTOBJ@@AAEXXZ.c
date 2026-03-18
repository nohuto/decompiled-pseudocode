/*
 * XREFs of ?UpdateFontLinksLockOrder@RFONTOBJ@@AAEXXZ @ 0x208EF6
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __thiscall RFONTOBJ::UpdateFontLinksLockOrder(RFONTOBJ *this)
{
  _DWORD *v1; // edx
  unsigned int v2; // eax
  unsigned __int8 v3; // bl
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // esi
  RFONTOBJ *v10; // ebx
  char *v11; // edi
  int v12; // edx
  char v13; // al
  _DWORD v14[2]; // [esp+0h] [ebp-120h] BYREF
  RFONTOBJ *v15; // [esp+8h] [ebp-118h]
  int Base; // [esp+Ch] [ebp-114h] BYREF
  _BYTE v17[268]; // [esp+10h] [ebp-110h] BYREF

  v15 = this;
  v1 = *(_DWORD **)this;
  v2 = *(_DWORD *)(*(_DWORD *)this + 780);
  if ( v2 <= 0x20 )
  {
    v3 = 0;
    if ( v2 )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)(*(_DWORD *)(v1[182] + 4 * v4) + 80);
        v17[8 * v4] = v3++;
        *(_DWORD *)&v17[8 * v4 - 4] = v5;
        v4 = v3;
      }
      while ( (unsigned int)v3 < v1[195] );
    }
    v14[0] = v1[181];
    v14[1] = v1[180];
    v6 = v14;
    v7 = 2;
    do
    {
      if ( *v6 )
        v8 = *(_DWORD *)(*v6 + 80);
      else
        v8 = 0;
      *(_DWORD *)&v17[8 * v3 - 4] = v8;
      ++v6;
      v17[8 * v3] = v3;
      ++v3;
      --v7;
    }
    while ( v7 );
    v9 = v3;
    _qsort(&Base, v3, 8u, (int (__cdecl *)(const void *, const void *))RFONTOBJ::AddressMap::Compare);
    if ( v3 )
    {
      v10 = v15;
      v11 = v17;
      v12 = 0;
      do
      {
        v13 = *v11;
        v11 += 8;
        *(_BYTE *)(v12 + *(_DWORD *)v10 + 792) = v13;
        ++v12;
        --v9;
      }
      while ( v9 );
    }
  }
}
