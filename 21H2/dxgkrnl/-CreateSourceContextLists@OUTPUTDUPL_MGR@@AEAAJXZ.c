/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0210A20
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0210998 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C03237D0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // kr00_8
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rbx
  const wchar_t *v24; // r9

  if ( *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, 956LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"New source context lists cannot be create while we have existing ones",
      956LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221227272LL;
  }
  v5 = *((_DWORD *)this + 19);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, 961LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create new context lists with zero elements",
      961LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = v5;
  v8 = v5;
  v7 = 72LL * v5;
  if ( !is_mul_ok(v8, 0x48uLL) )
    v7 = -1LL;
  v9 = __CFADD__(v7, 8LL);
  v10 = v7 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = operator new[](v10, 0x674D444Fu, 256LL, a4);
  if ( v11 )
  {
    v12 = v11 + 8;
    *(_QWORD *)v11 = v6;
    `vector constructor iterator'(
      (char *)(v11 + 8),
      72LL,
      (unsigned int)v6,
      (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::_OUTPUTDUPL_CONTEXTLIST);
    *((_QWORD *)this + 2) = v12;
    if ( v12 )
    {
      v14 = 0;
      if ( !*((_DWORD *)this + 19) )
        return 0LL;
      while ( 1 )
      {
        v15 = operator new[](0x10uLL, 0x674D444Fu, 256LL, v13);
        v17 = v15;
        if ( v15 )
        {
          *(_QWORD *)v15 = 0LL;
          *(_QWORD *)(v15 + 8) = 0LL;
          AUTOEXPANDALLOCATION::GetBuffer((const void **)v15, 0x100u, 0, v16);
        }
        else
        {
          v17 = 0LL;
        }
        v18 = 9LL * v14;
        *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * v14 + 56) = v17;
        v19 = *(_QWORD **)(*((_QWORD *)this + 2) + 72LL * v14 + 56);
        if ( !v19 || !*v19 )
          break;
        v20 = 8LL * *((unsigned int *)this + 2);
        if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
          v20 = -1LL;
        *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * v14 + 48) = operator new[](v20, 0x674D444Fu, 256LL, v16);
        v21 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v21 + 72LL * v14 + 48) )
        {
          WdLogSingleEntry1(6LL, v14);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to create context list for VidPn source 0x%I64x.",
            v14,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        ++v14;
        *(_DWORD *)(v21 + 8 * v18 + 64) = 0;
        if ( v14 >= *((_DWORD *)this + 19) )
          return 0LL;
      }
      v23 = 981LL;
      WdLogSingleEntry1(6LL, 981LL);
      v24 = L"Failed to create temp present processing buffer";
      goto LABEL_26;
    }
  }
  else
  {
    *((_QWORD *)this + 2) = 0LL;
  }
  v23 = 969LL;
  WdLogSingleEntry1(6LL, 969LL);
  v24 = L"Failed to allocated new source context lists";
LABEL_26:
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v24, v23, 0LL, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
