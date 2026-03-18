/*
 * XREFs of ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802565A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800A6058 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v9; // rbp
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int RectangleCount; // eax
  __int64 v14; // r11
  __int64 v15; // r10
  struct tagRECT *v16; // rbp
  LONG *p_bottom; // r14
  LONG *v18; // rcx
  LONG v19; // eax
  FastRegion::Internal::CRgnData *v20; // rcx
  __int64 v21; // rdx
  char v22; // cl
  _BYTE v23[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]
  LONG *v25; // [rsp+30h] [rbp-28h]
  FastRegion::Internal::CRgnData *v26; // [rsp+38h] [rbp-20h]
  int v27; // [rsp+40h] [rbp-18h]

  v6 = this + 40;
  v7 = a3;
  v9 = a2;
  AcquireSRWLockShared(this + 40);
  if ( (unsigned int)v9 >= HIDWORD(this[19].Ptr) || (unsigned int)v7 >= LODWORD(this[20].Ptr) )
    goto LABEL_11;
  if ( v7 >= 2 )
  {
    std::_Xout_of_range("invalid array<T, N> subscript");
    __debugbreak();
LABEL_11:
    *a4 = 0;
    v22 = 1;
    goto LABEL_12;
  }
  v11 = (__int64)this[(unsigned int)v7 + 15].Ptr + 16;
  v12 = 96 * v9;
  RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(96 * v9 + v11));
  if ( RectangleCount <= *a4 )
  {
    *a4 = RectangleCount;
    _mm_lfence();
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)((char *)this[v14 + 15].Ptr + v12 + 16),
      (struct FastRegion::CRegion::Iterator *)v23);
    v16 = &a5[v15];
    if ( a5 < v16 )
    {
      p_bottom = &a5->bottom;
      do
      {
        v18 = v25;
        if ( (unsigned __int64)v25 >= v24 )
          break;
        *(p_bottom - 2) = *v25;
        v19 = v18[2];
        v20 = v26;
        *p_bottom = v19;
        v21 = 2 * v27;
        *(p_bottom - 3) = *((_DWORD *)v20 + v21);
        *(p_bottom - 1) = *((_DWORD *)v20 + v21 + 1);
        p_bottom += 4;
        FastRegion::Internal::CRgnData::StepIterator(v20, (struct FastRegion::CRegion::Iterator *)v23);
      }
      while ( p_bottom - 3 < (LONG *)v16 );
    }
  }
  _mm_lfence();
  v22 = *((_BYTE *)this[v14 + 15].Ptr + v12 + 88);
LABEL_12:
  *a6 = v22;
  ReleaseSRWLockShared(v6);
}
