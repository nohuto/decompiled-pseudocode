/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00EEDD8
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00E8C60 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00EA548 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ECA28 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00EFD00 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // r12d
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // r9
  __int64 *v10; // rsi
  char *v11; // r15
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // al
  char v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char **v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+88h] [rbp+10h]
  char v30; // [rsp+88h] [rbp+10h]
  unsigned __int64 v31; // [rsp+90h] [rbp+18h]
  unsigned __int64 v32; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)a2;
  v31 = v4;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v32 = v5;
  if ( v4 == v5 )
  {
    v7 = v29;
    goto LABEL_70;
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
  if ( v8 == (char *)this + 72 )
  {
LABEL_66:
    v13 = *((_QWORD *)this + 1);
    *((_QWORD *)a2 + 10) = v13;
    goto LABEL_67;
  }
  while ( 1 )
  {
    v10 = (__int64 *)(v8 - 40);
    v11 = v8;
    if ( v6 )
      v8 = (char *)*((_QWORD *)v8 + 1);
    else
      v8 = *(char **)v8;
    v12 = *v10 + v10[1];
    if ( v12 <= v4 )
    {
      if ( v6 )
        goto LABEL_11;
      goto LABEL_62;
    }
    if ( *v10 >= v5 )
      break;
    v14 = *v10 + v10[1];
    if ( v6 )
      v14 = *v10;
    *((_QWORD *)a2 + 10) = v14;
    v15 = *((_BYTE *)v10 + 56);
    if ( v15 == 2 )
    {
      if ( v12 == v5 )
      {
        v7 = v5;
        if ( *v10 == v4 )
          goto LABEL_70;
      }
      v21 = *(_QWORD *)v11;
      if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
        goto LABEL_65;
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
LABEL_65:
        __fastfail(3u);
      }
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      *v23 = 0LL;
      v10[4] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v10);
LABEL_61:
      v9 = (char *)this + 72;
      goto LABEL_62;
    }
    if ( v15 <= 2u )
      goto LABEL_22;
    if ( v15 <= 4u )
    {
      if ( (*((unsigned __int8 (__fastcall **)(__int64))a2 + 4))(v10[2]) )
        goto LABEL_24;
      v9 = (char *)this + 72;
    }
    else if ( v15 > 7u )
    {
LABEL_22:
      if ( g_IsInternalRelease )
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
LABEL_24:
      v16 = 0;
      v28 = v10[2];
      v30 = 0;
      if ( !(*((unsigned __int8 (**)(void))a2 + 5))() )
        goto LABEL_38;
      if ( v6 )
      {
        if ( v7 - v10[1] >= v12 )
          goto LABEL_38;
        if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
        {
          v7 = v12;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v7 + v10[1] <= (unsigned __int64)*v10 )
        {
LABEL_38:
          v17 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v10[2]);
          v18 = v17 - 1LL;
          if ( v17 )
          {
            v19 = ~v18;
            if ( v6 )
              v7 = v10[1] + (v19 & (v7 - v10[1]));
            else
              v7 = v19 & (v18 + v7);
          }
          if ( (*((_DWORD *)a2 + 16) & 1) != 0
            && (*((unsigned __int8 (__fastcall **)(__int64, __int64))a2 + 6))(v28, v18)
            && (v7 != *v10 || (*((_DWORD *)a2 + 16) & 2) != 0) )
          {
            *((_QWORD *)a2 + 11) = v28;
            *((_QWORD *)a2 + 12) = *v10;
            *((_BYTE *)a2 + 112) = v16;
            *((_QWORD *)a2 + 13) = v7;
            goto LABEL_70;
          }
          v20 = *v10;
          if ( v6 )
          {
            v7 -= v10[1];
            if ( v20 != v7 )
            {
              *v10 = v7;
              v20 = v7;
              v30 = 1;
            }
          }
          else
          {
            if ( v20 != v7 )
            {
              *v10 = v7;
              v20 = v7;
              v30 = 1;
            }
            v7 += v10[1];
          }
          if ( v30 )
            (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v10[2], v20);
          goto LABEL_61;
        }
        if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
        {
          v7 = *v10;
          goto LABEL_38;
        }
      }
      v16 = 1;
      goto LABEL_38;
    }
    if ( v6 )
      v7 = *v10;
    else
      v7 = *v10 + v10[1];
LABEL_62:
    if ( v8 == v9 )
      goto LABEL_66;
    v4 = v31;
    v5 = v32;
  }
  if ( v6 )
    goto LABEL_62;
LABEL_11:
  if ( v8 == v9 )
    goto LABEL_66;
  v13 = *((_QWORD *)a2 + 10);
LABEL_67:
  v26 = *((_QWORD *)a2 + 1);
  if ( v13 > v26 )
    *((_QWORD *)a2 + 10) = v26;
LABEL_70:
  v27 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v7;
  if ( (v27 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(this, v31, *((_QWORD *)this + 1));
}
