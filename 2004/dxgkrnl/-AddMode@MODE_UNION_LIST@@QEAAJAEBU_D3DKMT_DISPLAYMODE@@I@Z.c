/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C011E334
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DD14C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C011D780 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  SIZE_T v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  const void *v19; // rdx
  SIZE_T v20; // rax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rsi
  const void *v27; // rdx
  __int64 v28; // rax
  void *v29; // rcx
  void *v30; // rcx

  v4 = ++*((_DWORD *)this + 4);
  v5 = 0;
  v6 = *((_DWORD *)this + 6);
  v8 = a3;
  if ( v4 <= v6 )
  {
LABEL_2:
    v9 = 44LL * (v4 - 1);
    v10 = *((_QWORD *)this + 1);
    *(_OWORD *)(v9 + v10) = *(_OWORD *)&a2->Width;
    *(_OWORD *)(v9 + v10 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)(v9 + v10 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)(v9 + v10 + 40) = *((_DWORD *)&a2->Flags + 1);
    if ( *((_BYTE *)this + 28) )
    {
      v11 = *((_DWORD *)this + 4);
      if ( v11 - (int)v8 - 1 > 0 )
      {
        memmove(
          (void *)(*((_QWORD *)this + 4) + 4 * v8 + 4),
          (const void *)(*((_QWORD *)this + 4) + 4 * v8),
          4LL * (*((_DWORD *)this + 4) - (int)v8 - 1));
        v11 = *((_DWORD *)this + 4);
      }
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v8) = v11 - 1;
    }
    return v5;
  }
  v13 = 44LL * (v6 + 500);
  if ( !is_mul_ok(v6 + 500, 0x2CuLL) )
    v13 = -1LL;
  v16 = (char *)operator new[](v13, 0x4B677844u, PagedPool);
  if ( v16 )
  {
    v19 = (const void *)*((_QWORD *)this + 1);
    if ( v19 )
    {
      memmove(v16, v19, 44LL * *((unsigned int *)this + 6));
      operator delete[](*((void **)this + 1));
    }
    memset(&v16[44 * *((unsigned int *)this + 6)], 0, 0x55F0uLL);
    *((_QWORD *)this + 1) = v16;
    if ( !*((_BYTE *)this + 28) )
      goto LABEL_19;
    v20 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v20 = -1LL;
    v21 = (char *)operator new[](v20, 0x4B677844u, PagedPool);
    v26 = v21;
    if ( v21 )
    {
      v27 = (const void *)*((_QWORD *)this + 4);
      if ( v27 )
      {
        memmove(v21, v27, 4LL * *((unsigned int *)this + 6));
        operator delete[](*((void **)this + 4));
      }
      memset(&v26[4 * *((unsigned int *)this + 6)], 0, 0x7D0uLL);
      *((_QWORD *)this + 4) = v26;
LABEL_19:
      *((_DWORD *)this + 6) += 500;
      v4 = *((_DWORD *)this + 4);
      goto LABEL_2;
    }
    v28 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v28 + 24) = 1830LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v15, v14, v17, v18);
    *(_QWORD *)(v28 + 24) = 1800LL;
  }
  WdLogEvent5_WdLowResource(v28);
  v29 = (void *)*((_QWORD *)this + 4);
  if ( v29 )
  {
    operator delete[](v29);
    *((_QWORD *)this + 4) = 0LL;
  }
  v30 = (void *)*((_QWORD *)this + 1);
  if ( v30 )
  {
    operator delete[](v30);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return (unsigned int)-1073741801;
}
