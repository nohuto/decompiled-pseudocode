/*
 * XREFs of _FindBGRMapCache @ 0x1BE6CB
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _TrimBGRMapCache @ 0x1BEA53 (_TrimBGRMapCache.c)
 */

int __fastcall FindBGRMapCache(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edi
  int v10; // [esp+8h] [ebp-20h]
  int v11; // [esp+Ch] [ebp-1Ch]
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v17; // [esp+24h] [ebp-4h]

  v2 = 0;
  EngAcquireSemaphore(dword_27430C);
  if ( Src )
  {
    v3 = dword_27431C;
    v17 = dword_27431C;
    if ( dword_27431C )
    {
      v4 = (int *)((char *)Src + 12 * dword_27431C - 12);
      do
      {
        if ( v2 )
          break;
        if ( a1 == *v4 )
        {
          v5 = v4[1];
          v2 = a1;
          if ( v5 )
          {
            v6 = v5 - 1;
            v4[1] = v6;
            if ( !v6 )
              ++dword_274324;
          }
        }
        else if ( v4[2] == a2 )
        {
          v7 = v4[1];
          v2 = *v4;
          v13 = *v4;
          v4[1] = v7 + 1;
          if ( !v7 )
            --dword_274324;
          v14 = dword_27431C;
          if ( v3 < dword_27431C )
          {
            v10 = *v4;
            v11 = v4[1];
            v12 = v4[2];
            memcpy(v4, v4 + 3, 12 * (dword_27431C - v3));
            v3 = v17;
            v8 = (char *)Src + 12 * v14 - 12;
            *v8++ = v10;
            *v8 = v11;
            v8[1] = v12;
            v2 = v13;
          }
        }
        --v3;
        v4 -= 3;
        v17 = v3;
      }
      while ( v3 );
    }
  }
  if ( dword_27431C > 5 && dword_274324 )
    TrimBGRMapCache();
  EngReleaseSemaphore(dword_27430C);
  return v2;
}
