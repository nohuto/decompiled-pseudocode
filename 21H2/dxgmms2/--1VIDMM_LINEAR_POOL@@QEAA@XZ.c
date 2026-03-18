/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00EEB10
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002D7AC (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0013F70 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  char *v6; // rbx
  struct _VIDMM_POOL_BLOCK *v7; // rdx
  VIDMM_LINEAR_POOL *v8; // rbx
  struct _VIDMM_POOL_BLOCK *v9; // rdx
  _QWORD *v10; // rcx
  VIDMM_LINEAR_POOL *v11; // rax
  __int64 v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // rdx
  VIDMM_LINEAR_POOL **v14; // rax
  VIDMM_LINEAR_POOL **v15; // r8
  VIDMM_LINEAR_POOL *v16; // rcx
  _QWORD **v17; // r14
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  char *v20; // rcx
  char *v21; // rbx

  v4 = (char *)this + 120;
  v6 = (char *)*((_QWORD *)this + 15);
  while ( v6 != v4 )
  {
    v7 = (struct _VIDMM_POOL_BLOCK *)(v6 - 24);
    v6 = *(char **)v6;
    VIDMM_LINEAR_POOL::Free(this, v7, a3, a4);
  }
  v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 17);
  while ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 136) )
  {
    v9 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24);
    v8 = *(VIDMM_LINEAR_POOL **)v8;
    VIDMM_LINEAR_POOL::Free(this, v9, a3, a4);
  }
  v10 = (_QWORD *)((char *)this + 40);
  v11 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  if ( v11 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    if ( *((_QWORD **)v11 + 1) != v10
      || (v12 = *(_QWORD *)v11, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v11 + 8LL) != v11)
      || (*v10 = v12,
          *(_QWORD *)(v12 + 8) = v10,
          v13 = (VIDMM_LINEAR_POOL *)((char *)v11 - 24),
          v14 = (VIDMM_LINEAR_POOL **)((char *)this + 72),
          v15 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 9),
          v15[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72))
      || (v16 = *v15, *((VIDMM_LINEAR_POOL ***)*v15 + 1) != v15) )
    {
LABEL_20:
      __fastfail(3u);
    }
    *v14 = v16;
    *((_QWORD *)v16 + 1) = v14;
    VIDMM_LINEAR_POOL::FreeBlock(this, v13);
  }
  v17 = (_QWORD **)((char *)this + 104);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v18[1] != v17 )
      goto LABEL_20;
    v19 = (_QWORD *)*v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_20;
    *v17 = v19;
    v19[1] = v17;
    v20 = (char *)v18[2];
    if ( v20 )
    {
      v21 = v20 - 8;
      `vector destructor iterator'(
        v20,
        64LL,
        *((_QWORD *)v20 - 1),
        (void (__fastcall *)(char *))VIDSCH_VSYNC_SMOOTHER::OnReset);
      operator delete(v21);
    }
    operator delete(v18);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
