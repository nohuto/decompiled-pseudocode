/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C018849C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01DE2AC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ecx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v14; // rax
  void *v15; // rsi
  __int64 v16; // r9
  const void *v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rax
  void *v20; // rsi
  const void *v21; // rdx
  __int64 v22; // rsi
  const wchar_t *v23; // r9
  void *v24; // rcx
  void *v25; // rcx

  v5 = ++*((_DWORD *)this + 4);
  v6 = 0;
  v7 = *((_DWORD *)this + 6);
  v9 = a3;
  if ( v5 <= v7 )
  {
LABEL_2:
    v10 = 44LL * (v5 - 1);
    v11 = *((_QWORD *)this + 1);
    *(_OWORD *)(v10 + v11) = *(_OWORD *)&a2->Width;
    *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)(v10 + v11 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)(v10 + v11 + 40) = *((_DWORD *)&a2->Flags + 1);
    if ( *((_BYTE *)this + 28) )
    {
      v12 = *((_DWORD *)this + 4);
      if ( v12 - (int)v9 - 1 > 0 )
      {
        memmove(
          (void *)(*((_QWORD *)this + 4) + 4 * v9 + 4),
          (const void *)(*((_QWORD *)this + 4) + 4 * v9),
          4LL * (*((_DWORD *)this + 4) - (int)v9 - 1));
        v12 = *((_DWORD *)this + 4);
      }
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v9) = v12 - 1;
    }
    return v6;
  }
  v14 = 44LL * (v7 + 500);
  if ( !is_mul_ok(v7 + 500, 0x2CuLL) )
    v14 = -1LL;
  v15 = (void *)operator new[](v14, 0x4B677844u, 256LL, a4);
  if ( v15 )
  {
    v17 = (const void *)*((_QWORD *)this + 1);
    if ( v17 )
    {
      memmove(v15, v17, 44LL * *((unsigned int *)this + 6));
      operator delete[](*((void **)this + 1));
    }
    *((_QWORD *)this + 1) = v15;
    if ( !*((_BYTE *)this + 28) )
      goto LABEL_19;
    v18 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v18 = -1LL;
    v19 = (void *)operator new[](v18, 0x4B677844u, 256LL, v16);
    v20 = v19;
    if ( v19 )
    {
      v21 = (const void *)*((_QWORD *)this + 4);
      if ( v21 )
      {
        memmove(v19, v21, 4LL * *((unsigned int *)this + 6));
        operator delete[](*((void **)this + 4));
      }
      *((_QWORD *)this + 4) = v20;
LABEL_19:
      *((_DWORD *)this + 6) += 500;
      v5 = *((_DWORD *)this + 4);
      goto LABEL_2;
    }
    v22 = 1923LL;
    WdLogSingleEntry1(6LL, 1923LL);
    v23 = L"unable to allocate memory for display mode index.";
  }
  else
  {
    v22 = 1895LL;
    WdLogSingleEntry1(6LL, 1895LL);
    v23 = L"unable to allocate memory for display mode list.";
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v23, v22, 0LL, 0LL, 0LL, 0LL);
  v24 = (void *)*((_QWORD *)this + 4);
  if ( v24 )
  {
    operator delete[](v24);
    *((_QWORD *)this + 4) = 0LL;
  }
  v25 = (void *)*((_QWORD *)this + 1);
  if ( v25 )
  {
    operator delete[](v25);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return (unsigned int)-1073741801;
}
