/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18001A100
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001B194 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180014AB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001D510 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001F9D4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180040098 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int **a4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  char *v8; // rsi
  unsigned __int16 *v9; // rdx
  signed int v10; // ecx
  char v11; // bp
  unsigned __int16 **v12; // r10
  int v13; // r9d
  int v14; // r8d
  unsigned int *v15; // rbx
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  void *v18; // rax
  void *v19; // rbx
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  volatile signed __int32 *v28; // rdx
  void *v30; // [rsp+20h] [rbp-48h]
  _QWORD v31[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-30h]
  volatile signed __int32 *v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+80h] [rbp+18h]

  v6 = 0;
  v7 = (unsigned int)-a3;
  v8 = (char *)this + ((_DWORD)v7 != 0 ? 0x18 : 0) + 288;
  v31[1] = v8;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v31,
    a2,
    v7);
  v10 = 0;
  v11 = 1;
  if ( *((int *)v8 + 4) <= 0 )
  {
LABEL_9:
    v10 = -1;
  }
  else
  {
    v12 = *(unsigned __int16 ***)v8;
    while ( 1 )
    {
      if ( !v31[0] )
        ATL::AtlThrowImpl(-2147467259);
      v9 = *v12;
      do
      {
        v13 = *(unsigned __int16 *)((char *)v9 + v31[0] - (_QWORD)*v12);
        v14 = *v9 - v13;
        if ( v14 )
          break;
        ++v9;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ++v10;
      ++v12;
      if ( v10 >= *((_DWORD *)v8 + 4) )
        goto LABEL_9;
    }
  }
  if ( v10 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v10 < 0 || v10 >= *((_DWORD *)v8 + 4) )
    {
      ATL::_AtlRaiseException(v10, (unsigned int)v9);
      JUMPOUT(0x18001A33FLL);
    }
    v15 = *(unsigned int **)(*((_QWORD *)v8 + 1) + 8LL * v10);
  }
  v16 = (_QWORD *)(v31[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_33;
  ProcessHeap = GetProcessHeap();
  v18 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v19 = v18;
  v30 = v18;
  if ( v18 )
  {
    memset_0(v18, 0, 0x54uLL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v33,
      a2,
      v21);
    v22 = _o__recalloc(*(_QWORD *)v8, *((_DWORD *)v8 + 4) + 1, 8LL);
    if ( v22 )
    {
      *(_QWORD *)v8 = v22;
      v23 = _o__recalloc(*((_QWORD *)v8 + 1), *((_DWORD *)v8 + 4) + 1, 8LL);
      v24 = v23;
      if ( v23 )
      {
        *((_QWORD *)v8 + 1) = v23;
        v34 = *((_DWORD *)v8 + 4);
        v25 = v34;
        v26 = (_QWORD *)(*(_QWORD *)v8 + 8LL * v34);
        v32 = v26;
        if ( v26 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v26,
            (const void **)&v33);
          v24 = *((_QWORD *)v8 + 1);
        }
        v27 = (_QWORD *)(v24 + 8 * v25);
        v32 = v27;
        if ( v27 )
          *v27 = v19;
        ++*((_DWORD *)v8 + 4);
        v11 = 0;
      }
    }
    v28 = v33 - 6;
    if ( _InterlockedExchangeAdd(v33 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 8LL))(*(_QWORD *)v28);
    if ( v11 )
    {
      v6 = -2147024882;
      v20 = v30;
      goto LABEL_20;
    }
    v15 = (unsigned int *)v30;
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_33:
    *a4 = v15;
    return v6;
  }
  v6 = -2147024882;
  v20 = 0LL;
LABEL_20:
  operator delete(v20, (const struct std::nothrow_t *)4);
  return v6;
}
