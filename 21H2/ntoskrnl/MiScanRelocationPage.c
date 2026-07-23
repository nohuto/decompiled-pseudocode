/*
 * XREFs of MiScanRelocationPage @ 0x1406ACF90
 * Callers:
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiCreateFixupRecord @ 0x14061AAC8 (MiCreateFixupRecord.c)
 */

__int64 __fastcall MiScanRelocationPage(__int64 a1, unsigned int a2, int a3, _WORD *a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  __int64 v8; // r14
  int v9; // r15d
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // r9d
  int v13; // esi
  __int64 v14; // r11
  unsigned int i; // ebp
  __int16 v16; // ax
  unsigned __int16 v17; // bx
  unsigned int v18; // r8d
  __int64 result; // rax
  int v20; // ecx

  v6 = a5;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = a3;
  v14 = a1;
  for ( i = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL); v13; ++a4 )
  {
    --v13;
    v16 = *a4 >> 12;
    v17 = *a4 & 0xFFF;
    if ( v16 )
    {
      if ( v16 == 3 )
      {
        if ( v17 > 0xFFCu )
        {
          v11 = 1;
          v9 = 2;
          v10 = 4;
        }
      }
      else
      {
        if ( v16 != 10 )
          return 3221226089LL;
        if ( v17 > 0xFF8u )
        {
          v11 = 1;
          v10 = 8;
        }
        v20 = 0;
        if ( v17 <= 0xFF8u )
          v20 = v9;
        v9 = v20;
      }
    }
    if ( v16 )
    {
      if ( (v8 & 0xFFF) != 0 && v17 + (unsigned int)(v8 & 0xFFF) > 0xFFE )
        return 3221226089LL;
      v18 = v17 + (_DWORD)v8;
      if ( v18 < i )
        return 3221226089LL;
    }
    else
    {
      v18 = v8 + v17;
    }
    if ( v11 == 1 )
    {
      if ( v12 == 1 )
        return 3221225595LL;
      result = MiCreateFixupRecord(v6, v14, v18, v9, v10, a4, a6);
      if ( (int)result < 0 )
        return result;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 )
      {
        a5 = 0LL;
        if ( (MiOffsetToProtos(v6, v8 + v17 + (unsigned __int64)v10, (unsigned __int64 *)&a5)[8] & 4) != 0 )
          return 3221225595LL;
      }
      v14 = a1;
      v11 = 0;
      v12 = 1;
    }
  }
  return 0LL;
}
