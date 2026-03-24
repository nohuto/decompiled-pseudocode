/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C007B144
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C007AD3C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C00750F0 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v2 )
        {
          v3 = v2;
          v2 = (_QWORD *)*v2;
          *v3 = 0LL;
        }
        if ( !v2[1] )
          break;
        v4 = v2;
        v2 = (_QWORD *)v2[1];
        v4[1] = 0LL;
      }
      v5 = v2[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v2);
      v6 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 )
        break;
      v2 = (_QWORD *)v6;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v7 )
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          *v8 = 0LL;
        }
        if ( !v7[1] )
          break;
        v9 = v7;
        v7 = (_QWORD *)v7[1];
        v9[1] = 0LL;
      }
      v10 = v7[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v7);
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 )
        break;
      v7 = (_QWORD *)v11;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          *v13 = 0LL;
        }
        if ( !v12[1] )
          break;
        v14 = v12;
        v12 = (_QWORD *)v12[1];
        v14[1] = 0LL;
      }
      v15 = v12[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v12);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v12 = (_QWORD *)v16;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
