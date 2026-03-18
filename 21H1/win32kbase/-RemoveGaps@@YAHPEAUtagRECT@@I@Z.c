/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C01D3E44
 * Callers:
 *     AlignRects @ 0x1C00B05D8 (AlignRects.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C01D3B60 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C01D3D9C (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct tagRECT **v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r11d
  struct tagRECT **v9; // rsi
  struct tagRECT *v10; // rbx
  struct tagRECT **v11; // r9
  struct tagRECT *v12; // r10
  unsigned int v13; // ecx
  struct tagRECT **v14; // rax
  struct tagRECT *v15; // rcx
  struct tagRECT *v16; // r14
  struct tagRECT **v17; // rsi
  unsigned __int64 v18; // rbx
  struct tagRECT **ContiguousRectangle; // rax
  struct tagRECT *v20[16]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  memset(v20, 0, sizeof(v20));
  v4 = v20;
  if ( (unsigned int)v2 <= 0x10
    || (result = Win32AllocPool((unsigned int)(8 * v2), 0x74727355u), (v4 = (struct tagRECT **)result) != 0LL) )
  {
    CenterRectangles(a1, v2);
    v8 = -1;
    v9 = v4;
    v10 = &a1[v2];
    v11 = v4;
    v12 = a1;
    if ( a1 < v10 )
    {
      do
      {
        *v9 = v12;
        v7 = abs32((v12->right - v12->left) / 2 + v12->left);
        v6 = (unsigned int)(((v12->bottom - v12->top) / 2 + v12->top) >> 31);
        v13 = v7 + (v6 ^ ((v12->bottom - v12->top) / 2 + v12->top)) - v6;
        v14 = v9;
        if ( v13 >= v8 )
          v14 = v11;
        ++v9;
        ++v12;
        v11 = v14;
        if ( v13 >= v8 )
          v13 = v8;
        v8 = v13;
      }
      while ( v12 < v10 );
      if ( v14 != v4 )
      {
        v15 = *v14;
        *v14 = *v4;
        *v4 = v15;
      }
    }
    v16 = a1 + 1;
    v17 = v4 + 1;
    if ( v16 < v10 )
    {
      v18 = ((unsigned __int64)((char *)v10 - (char *)v16 - 1) >> 4) + 1;
      do
      {
        ContiguousRectangle = AddNextContiguousRectangle(v4, v17, v2);
        if ( ContiguousRectangle != v17 )
        {
          v6 = (__int64)*ContiguousRectangle;
          *ContiguousRectangle = *v17;
          *v17 = (struct tagRECT *)v6;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    if ( v4 != v20 )
      Win32FreePool((__int64)v4, v6, v7);
    return 1LL;
  }
  return result;
}
