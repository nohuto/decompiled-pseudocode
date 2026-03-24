/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C004BC5C
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02AC024 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, __int64 a2)
{
  char *v2; // rdi
  int v3; // esi
  __int64 v5; // rax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  SIZE_T v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  void *v16; // rcx
  int v17; // eax

  v2 = (char *)*((_QWORD *)this + 2);
  v3 = a2;
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = 52LL;
    WdLogEvent5_WdError(v5);
    return 3221225495LL;
  }
  v7 = *((_DWORD *)this + 2);
  v8 = *((_DWORD *)this + 1);
  v9 = v7 + 1;
  if ( v7 + 1 == v8 )
    v9 = 0;
  if ( v9 == *((_DWORD *)this + 3) )
  {
    v10 = 4LL * (unsigned int)(*(_DWORD *)this + v8);
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)this + v8), 4uLL) )
      v10 = -1LL;
    v2 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
    if ( !v2 )
    {
      v13 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      return 3221225507LL;
    }
    memmove(
      v2,
      (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
      4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
    v14 = *((_DWORD *)this + 3);
    v15 = *((_DWORD *)this + 1);
    if ( v14 )
    {
      memmove(&v2[4 * (v15 - v14)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
      v15 = *((_DWORD *)this + 1);
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 2) = v15 - 1;
    }
    *((_DWORD *)this + 1) = *(_DWORD *)this + v15;
    v16 = (void *)*((_QWORD *)this + 2);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v7 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 2) = v2;
  }
  *(_DWORD *)&v2[4 * v7] = v3;
  v17 = *((_DWORD *)this + 2) + 1;
  if ( v17 == *((_DWORD *)this + 1) )
    v17 = 0;
  *((_DWORD *)this + 2) = v17;
  return 0LL;
}
