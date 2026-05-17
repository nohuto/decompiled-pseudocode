/*
 * XREFs of _RtlLocateExtendedFeature2@16 @ 0x4B35BA70
 * Callers:
 *     _RtlLocateExtendedFeature@12 @ 0x4B35BBD0 (_RtlLocateExtendedFeature@12.c)
 * Callees:
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _RtlpLocateXStateChunk@4 @ 0x4B35C522 (_RtlpLocateXStateChunk@4.c)
 */

int __stdcall RtlLocateExtendedFeature2(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // kr00_8
  int XStateChunk; // edx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  __int64 v9; // rax
  _DWORD *v10; // eax
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]
  _DWORD *v18; // [esp+2Ch] [ebp-4h]

  if ( a2 - 2 > 0x3D )
    return 0;
  v4 = 1LL << a2;
  if ( ((1LL << a2) & (*(_QWORD *)a3 | *(_QWORD *)(a3 + 816))) == 0 )
    return 0;
  if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFFC) != 0 )
    return 0;
  XStateChunk = RtlpLocateXStateChunk(a1);
  v12 = XStateChunk;
  if ( !XStateChunk )
    return 0;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a3 + 20) & 2) != 0 )
      v6 = *(_DWORD *)(a3 + 4 * a2 + 556);
    else
      v6 = *(_DWORD *)(a3 + 8 * a2 + 28);
    *a4 = v6;
  }
  if ( (*(_BYTE *)(a3 + 20) & 2) == 0 )
    return XStateChunk + *(_DWORD *)(a3 + 8 * a2 + 24) - 512;
  v13 = *(_DWORD *)(XStateChunk + 12);
  v14 = *(_DWORD *)(XStateChunk + 8);
  if ( !(v13 & HIDWORD(v4) | v14 & (unsigned int)(1LL << a2)) )
    return 0;
  v7 = 576;
  LOBYTE(v8) = 2;
  v16 = *(_DWORD *)(a3 + 544);
  v15 = *(_DWORD *)(a3 + 548);
  v17 = 2;
  if ( a2 > 2 )
  {
    v18 = (_DWORD *)(a3 + 564);
    do
    {
      v9 = 1LL << v8;
      if ( v13 & HIDWORD(v9) | v14 & (unsigned int)v9 )
      {
        if ( v15 & HIDWORD(v9) | v16 & (unsigned int)v9 )
          v7 = (v7 + 63) & 0xFFFFFFC0;
        v10 = v18;
        v7 += *v18;
      }
      else
      {
        v10 = v18;
      }
      v8 = v17 + 1;
      v18 = v10 + 1;
      v17 = v8;
    }
    while ( v8 < a2 );
    XStateChunk = v12;
  }
  if ( v15 & HIDWORD(v4) | v16 & (unsigned int)v4 )
    v7 = (v7 + 63) & 0xFFFFFFC0;
  return v7 + XStateChunk - 512;
}
