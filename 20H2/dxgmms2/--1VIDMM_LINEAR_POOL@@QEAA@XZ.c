/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00CF090
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0028334 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012B28 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00853E0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00855FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  char *v5; // rbx
  struct _VIDMM_POOL_BLOCK *v6; // rdx
  VIDMM_LINEAR_POOL *v7; // rbx
  struct _VIDMM_POOL_BLOCK *v8; // rdx
  _QWORD *v9; // rcx
  VIDMM_LINEAR_POOL *v10; // rax
  __int64 v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // rdx
  VIDMM_LINEAR_POOL **v13; // rax
  VIDMM_LINEAR_POOL **v14; // r8
  VIDMM_LINEAR_POOL *v15; // rcx
  _QWORD **v16; // r14
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  char *v19; // rcx
  char *v20; // rbx

  v3 = (char *)this + 120;
  v5 = (char *)*((_QWORD *)this + 15);
  while ( v5 != v3 )
  {
    v6 = (struct _VIDMM_POOL_BLOCK *)(v5 - 24);
    v5 = *(char **)v5;
    VIDMM_LINEAR_POOL::Free(this, v6, a3);
  }
  v7 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 17);
  while ( v7 != (VIDMM_LINEAR_POOL *)((char *)this + 136) )
  {
    v8 = (VIDMM_LINEAR_POOL *)((char *)v7 - 24);
    v7 = *(VIDMM_LINEAR_POOL **)v7;
    VIDMM_LINEAR_POOL::Free(this, v8, a3);
  }
  v9 = (_QWORD *)((char *)this + 40);
  v10 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  if ( v10 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    if ( *((_QWORD **)v10 + 1) != v9
      || (v11 = *(_QWORD *)v10, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v10 + 8LL) != v10)
      || (*v9 = v11,
          *(_QWORD *)(v11 + 8) = v9,
          v12 = (VIDMM_LINEAR_POOL *)((char *)v10 - 24),
          v13 = (VIDMM_LINEAR_POOL **)((char *)this + 72),
          v14 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 9),
          v14[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72))
      || (v15 = *v14, *((VIDMM_LINEAR_POOL ***)*v14 + 1) != v14) )
    {
LABEL_20:
      __fastfail(3u);
    }
    *v13 = v15;
    *((_QWORD *)v15 + 1) = v13;
    VIDMM_LINEAR_POOL::FreeBlock(this, v12);
  }
  v16 = (_QWORD **)((char *)this + 104);
  while ( 1 )
  {
    v17 = *v16;
    if ( *v16 == v16 )
      break;
    if ( (_QWORD **)v17[1] != v16 )
      goto LABEL_20;
    v18 = (_QWORD *)*v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
      goto LABEL_20;
    *v16 = v18;
    v18[1] = v16;
    v19 = (char *)v17[2];
    if ( v19 )
    {
      v20 = v19 - 8;
      `vector destructor iterator'(
        v19,
        64LL,
        *((_QWORD *)v19 - 1),
        (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
      operator delete(v20);
    }
    operator delete(v17);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
