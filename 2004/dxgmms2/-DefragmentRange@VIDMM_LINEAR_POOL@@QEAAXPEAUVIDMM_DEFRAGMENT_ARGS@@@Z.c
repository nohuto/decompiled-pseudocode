/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00CF860
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C5EF0 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7D40 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00CA2E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C008639C (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00D086C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 *v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // r13d
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // r9
  __int64 *v10; // rsi
  char *v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebp
  unsigned __int8 v17; // al
  _QWORD *v18; // rax
  int v19; // ebp
  _QWORD *v20; // rax
  __int64 v21; // rcx
  char **v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // r15
  char v27; // bp
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+88h] [rbp+10h]
  char v37; // [rsp+88h] [rbp+10h]
  char *v38; // [rsp+90h] [rbp+18h]
  unsigned __int64 v39; // [rsp+98h] [rbp+20h]

  v3 = (unsigned __int64 *)this;
  v4 = *(_QWORD *)a2;
  v39 = v4;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v34 = v5;
  if ( v4 == v5 )
  {
    v7 = v36;
    goto LABEL_75;
  }
  v7 = v4;
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = (char *)*((_QWORD *)this + 10);
  }
  else
  {
    v8 = (char *)*((_QWORD *)this + 9);
  }
  v9 = (char *)this + 72;
  v38 = (char *)this + 72;
  if ( v8 == (char *)this + 72 )
  {
LABEL_78:
    v14 = v3[1];
    *((_QWORD *)a2 + 10) = v14;
    goto LABEL_79;
  }
  while ( 1 )
  {
    v10 = (__int64 *)(v8 - 40);
    v11 = v8;
    if ( v6 )
      v8 = (char *)*((_QWORD *)v8 + 1);
    else
      v8 = *(char **)v8;
    v12 = *v10;
    v13 = *v10 + v10[1];
    if ( v13 <= v4 )
    {
      if ( v6 )
        goto LABEL_11;
      goto LABEL_70;
    }
    if ( v12 >= v5 )
      break;
    v15 = *v10 + v10[1];
    if ( v6 )
      v15 = *v10;
    v16 = 0;
    *((_QWORD *)a2 + 10) = v15;
    v17 = *((_BYTE *)v10 + 56);
    if ( v17 == 2 )
    {
      v16 = 2;
      goto LABEL_28;
    }
    if ( v17 <= 2u )
      goto LABEL_24;
    if ( v17 <= 4u )
    {
      LOBYTE(v16) = (*((unsigned __int8 (__fastcall **)(__int64))a2 + 4))(v10[2]) == 0;
LABEL_26:
      v4 = v39;
      v5 = v34;
      v9 = v38;
      goto LABEL_28;
    }
    if ( v17 > 7u )
    {
LABEL_24:
      if ( g_IsInternalRelease )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v4);
        v18[5] = 0LL;
        v18[6] = 0LL;
        v18[7] = 0LL;
        v18[3] = 270LL;
        v18[4] = 9LL;
        WdLogEvent5_WdCriticalError(v18);
        goto LABEL_26;
      }
    }
    else
    {
      v16 = 1;
    }
LABEL_28:
    if ( !v16 )
    {
      v26 = v10[2];
      v27 = 0;
      v37 = 0;
      if ( !(*((unsigned __int8 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))a2 + 5))(v26, v4, v5) )
        goto LABEL_52;
      if ( v6 )
      {
        if ( v7 - v10[1] < v13 )
        {
          if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
            goto LABEL_51;
          v7 = v13;
        }
      }
      else
      {
        if ( v7 + v10[1] <= (unsigned __int64)*v10 )
          goto LABEL_52;
        if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
        {
          v7 = *v10;
          goto LABEL_52;
        }
LABEL_51:
        v27 = 1;
      }
LABEL_52:
      v28 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v10[2]);
      v29 = v28 - 1LL;
      if ( v28 )
      {
        v30 = ~v29;
        if ( v6 )
          v7 = v10[1] + (v30 & (v7 - v10[1]));
        else
          v7 = v30 & (v29 + v7);
      }
      if ( (*((_DWORD *)a2 + 16) & 1) != 0
        && (*((unsigned __int8 (__fastcall **)(__int64, __int64))a2 + 6))(v26, v29)
        && (v7 != *v10 || (*((_DWORD *)a2 + 16) & 2) != 0) )
      {
        *((_QWORD *)a2 + 11) = v26;
        *((_QWORD *)a2 + 12) = *v10;
        *((_BYTE *)a2 + 112) = v27;
        *((_QWORD *)a2 + 13) = v7;
LABEL_74:
        v3 = (unsigned __int64 *)this;
        goto LABEL_75;
      }
      v31 = *v10;
      if ( v6 )
      {
        v7 -= v10[1];
        if ( v31 != v7 )
        {
          *v10 = v7;
          v31 = v7;
          v37 = 1;
        }
      }
      else
      {
        if ( v31 != v7 )
        {
          *v10 = v7;
          v31 = v7;
          v37 = 1;
        }
        v7 += v10[1];
      }
      if ( v37 )
        (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v10[2], v31);
LABEL_68:
      v9 = v38;
LABEL_69:
      v3 = (unsigned __int64 *)this;
      goto LABEL_70;
    }
    v19 = v16 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
      {
        if ( g_IsInternalRelease )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v4);
          v20[5] = 0LL;
          v20[6] = 0LL;
          v20[7] = 0LL;
          v20[3] = 270LL;
          v20[4] = 9LL;
          WdLogEvent5_WdCriticalError(v20);
          goto LABEL_68;
        }
        goto LABEL_69;
      }
      if ( v13 == v5 )
      {
        v7 = v5;
        if ( *v10 == v4 )
          goto LABEL_74;
      }
      v21 = *(_QWORD *)v11;
      if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
        goto LABEL_72;
      v22 = (char **)*((_QWORD *)v11 + 1);
      if ( *v22 != v11
        || (*v22 = (char *)v21,
            *(_QWORD *)(v21 + 8) = v22,
            v23 = v10 + 3,
            *(_QWORD *)v11 = 0LL,
            v10[6] = 0LL,
            v24 = v10[3],
            *(__int64 **)(v24 + 8) != v10 + 3)
        || (v25 = (__int64 *)v10[4], (_QWORD *)*v25 != v23) )
      {
LABEL_72:
        __fastfail(3u);
      }
      v3 = (unsigned __int64 *)this;
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      *v23 = 0LL;
      v10[4] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v10);
      v9 = (char *)this + 72;
    }
    else
    {
      v3 = (unsigned __int64 *)this;
      if ( v6 )
        v7 = *v10;
      else
        v7 = *v10 + v10[1];
    }
LABEL_70:
    if ( v8 == v9 )
      goto LABEL_78;
    v4 = v39;
    v5 = v34;
  }
  if ( v6 )
    goto LABEL_70;
LABEL_11:
  if ( v8 == v9 )
    goto LABEL_78;
  v14 = *((_QWORD *)a2 + 10);
LABEL_79:
  v33 = *((_QWORD *)a2 + 1);
  if ( v14 > v33 )
    *((_QWORD *)a2 + 10) = v33;
LABEL_75:
  v32 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v7;
  if ( (v32 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)v3, v39, v3[1]);
}
