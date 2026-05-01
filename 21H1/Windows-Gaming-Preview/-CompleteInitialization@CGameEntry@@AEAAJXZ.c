/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180041E10
 * Callers:
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x180041964 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180042570 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180042220 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x1800422D8 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x180042314 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180042398 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  signed int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int16 *v10; // rsi
  unsigned int v11; // edx
  bool v12; // r8
  _WORD *v13; // rdi
  int UShort; // esi
  bool v15; // r8
  __int64 v16; // rdx
  _WORD *v17; // r14
  unsigned __int64 v18; // rax
  void *v19; // rax
  const struct std::nothrow_t *v20; // rdx
  void *v21; // rcx
  void *v22; // rsi
  unsigned int v23; // r15d
  __int64 v24; // rsi
  int v25; // ebp
  unsigned __int64 v26; // rax
  void *v27; // rax
  const struct std::nothrow_t *v28; // rdx
  void *v29; // rcx
  void *v30; // rdi
  __int64 v31; // rdx
  bool v32; // cf
  unsigned int v33; // esi
  __int64 v34; // rdi
  __int64 v35; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1305LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v6 = *((unsigned int *)this + 9);
  if ( v6 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v7 = -2147483637;
    v8 = 1309LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v7);
    return v7;
  }
  if ( (unsigned int)v6 < 4 )
    v9 = -1;
  else
    v9 = v6 - 4;
  *((_DWORD *)this + 8) = v9;
  DWORD = (unsigned int)v6 < 4 ? 0x80070216 : 0;
  if ( (unsigned int)v6 < 4 )
  {
    v4 = 1313LL;
    goto LABEL_3;
  }
  v10 = (unsigned __int16 *)((char *)this + 48);
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
  if ( DWORD < 0 )
  {
    v4 = 1317LL;
    goto LABEL_3;
  }
  DWORD = CGameEntry::VerifyAvailable(this, *v10);
  if ( DWORD < 0 )
  {
    v4 = 1319LL;
    goto LABEL_3;
  }
  v11 = *v10;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  DWORD = CGameEntry::MarkConsumed(this, v11, 1);
  if ( DWORD < 0 )
  {
    v4 = 1323LL;
    goto LABEL_3;
  }
  v13 = (_WORD *)((char *)this + 50);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v12);
  if ( UShort < 0 )
  {
    v16 = 1325LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)UShort);
    return (unsigned int)UShort;
  }
  if ( 12 * (unsigned int)(unsigned __int16)*v13 > *((_DWORD *)this + 8) )
  {
    v7 = -2147024809;
    v8 = 1327LL;
    goto LABEL_6;
  }
  v17 = (_WORD *)((char *)this + 52);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v15);
  if ( UShort < 0 )
  {
    v16 = 1329LL;
    goto LABEL_20;
  }
  if ( 4 * (unsigned int)(unsigned __int16)*v17 > *((_DWORD *)this + 8) )
  {
    v7 = -2147024809;
    v8 = 1331LL;
    goto LABEL_6;
  }
  if ( !*v13 )
    goto LABEL_40;
  v18 = 16LL * (unsigned __int16)*v13;
  if ( !is_mul_ok((unsigned __int16)*v13, 0x10uLL) )
    v18 = -1LL;
  v19 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
  v21 = (void *)*((_QWORD *)this + 7);
  v22 = v19;
  if ( v19 != v21 )
  {
    operator delete(v21, v20);
    v21 = v22;
    *((_QWORD *)this + 7) = v22;
  }
  if ( !v21 )
  {
    v7 = -2147024882;
    v8 = 1337LL;
    goto LABEL_6;
  }
  v23 = 0;
  if ( *v13 )
  {
    while ( 1 )
    {
      v24 = 16LL * v23;
      v25 = CGameEntry::ReadDWORD(this, (unsigned int *)(v24 + *((_QWORD *)this + 7)));
      if ( v25 < 0 )
        break;
      v25 = CGameEntry::ReadDWORD(this, (unsigned int *)(v24 + *((_QWORD *)this + 7) + 4LL));
      if ( v25 < 0 )
      {
        v31 = 1343LL;
        goto LABEL_51;
      }
      v25 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 7) + v24 + 4));
      if ( v25 < 0 )
      {
        v31 = 1345LL;
        goto LABEL_51;
      }
      *(_QWORD *)(v24 + *((_QWORD *)this + 7) + 8) = *((_QWORD *)this + 2);
      UShort = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 7) + v24 + 4), 1);
      if ( UShort < 0 )
      {
        v16 = 1349LL;
        goto LABEL_20;
      }
      if ( ++v23 >= (unsigned __int16)*v13 )
        goto LABEL_40;
    }
    v31 = 1341LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v25);
    return (unsigned int)v25;
  }
  else
  {
LABEL_40:
    if ( *v17 )
    {
      v26 = 16LL * (unsigned __int16)*v17;
      if ( !is_mul_ok((unsigned __int16)*v17, 0x10uLL) )
        v26 = -1LL;
      v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
      v29 = (void *)*((_QWORD *)this + 8);
      v30 = v27;
      if ( v27 != v29 )
      {
        operator delete(v29, v28);
        v29 = v30;
        *((_QWORD *)this + 8) = v30;
      }
      if ( !v29 )
      {
        v7 = -2147024882;
        v8 = 1357LL;
        goto LABEL_6;
      }
      v32 = *v17 != 0;
      v33 = 0;
      while ( v32 )
      {
        v34 = 16LL * v33;
        *(_DWORD *)(*((_QWORD *)this + 8) + v34 + 4) = 0;
        *(_QWORD *)(*((_QWORD *)this + 8) + v34 + 8) = 0LL;
        v25 = CGameEntry::ReadDWORD(this, (unsigned int *)(v34 + *((_QWORD *)this + 8)));
        if ( v25 < 0 )
        {
          v31 = 1364LL;
          goto LABEL_51;
        }
        v35 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v35 + 16LL * v33) & 0x10000000) == 0 )
        {
          v25 = CGameEntry::ReadDWORD(this, (unsigned int *)(v34 + v35 + 4));
          if ( v25 < 0 )
          {
            v31 = 1370LL;
            goto LABEL_51;
          }
          v25 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 8) + v34 + 4));
          if ( v25 < 0 )
          {
            v31 = 1372LL;
            goto LABEL_51;
          }
          *(_QWORD *)(*((_QWORD *)this + 8) + v34 + 8) = *((_QWORD *)this + 2);
          DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 8) + v34 + 4), 1);
          if ( DWORD < 0 )
          {
            v4 = 1376LL;
            goto LABEL_3;
          }
        }
        v32 = ++v33 < (unsigned __int16)*v17;
      }
    }
    return 0LL;
  }
}
