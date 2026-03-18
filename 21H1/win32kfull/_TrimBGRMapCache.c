/*
 * XREFs of _TrimBGRMapCache @ 0x1BEA53
 * Callers:
 *     _AddBGRMapCache @ 0x1BCA75 (_AddBGRMapCache.c)
 *     _FindBGRMapCache @ 0x1BE6CB (_FindBGRMapCache.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int TrimBGRMapCache()
{
  int v0; // ebx
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edx
  int v4; // edi
  _DWORD *v5; // ebx
  int v7; // [esp+8h] [ebp-10h]
  _DWORD *v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v0 = 0;
  EngAcquireSemaphore(dword_27430C);
  v1 = dword_27431C;
  v9 = dword_27431C;
  if ( dword_27431C > 5 && dword_274324 )
  {
    v2 = Src;
    v0 = dword_27431C;
    v7 = dword_27431C;
    v3 = Src;
    v8 = Src;
    v4 = dword_27431C;
    if ( dword_27431C )
    {
      v5 = Src;
      do
      {
        --v4;
        if ( v1 <= 5 )
          break;
        if ( v5[1] )
        {
          if ( v3 != v5 )
          {
            *v3 = *v5;
            v3[1] = v5[1];
            v3[2] = v5[2];
            v1 = v9;
          }
          v3 += 3;
          v8 = v3;
        }
        else
        {
          EngFreeMem((PVOID)*v5);
          v3 = v8;
          v1 = dword_27431C - 1;
          --dword_274324;
          v9 = --dword_27431C;
        }
        v5 += 3;
      }
      while ( v4 );
      v10 = v5;
      v0 = v7;
      v2 = v10;
    }
    if ( v0 != v1 )
    {
      if ( v2 > v3 && (int)Src + 12 * v0 - (int)v2 > 0 )
        memcpy(v3, v2, (size_t)Src + 12 * v0 - (_DWORD)v2);
      v0 -= v1;
    }
  }
  EngReleaseSemaphore(dword_27430C);
  return v0;
}
