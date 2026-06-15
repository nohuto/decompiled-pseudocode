/*
 * XREFs of sub_180059F70 @ 0x180059F70
 * Callers:
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 *     sub_180059EF8 @ 0x180059EF8 (sub_180059EF8.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180059F70(__int64 *a1, unsigned int a2, _OWORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int i; // r12d
  std::_Ref_count_base *v18; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  _OWORD *v24; // rcx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  _OWORD *v29; // rcx
  bool v30; // sf
  int v31; // edx
  int v32; // edx
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v10 = v9;
  v11 = 0;
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = off_180147A18;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    v9[8] = 0;
    *((_BYTE *)v9 + 36) = 0;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v12 = *a1;
  v13 = *((_DWORD *)a1 + 2);
  v14 = 0;
  if ( v13 )
  {
    while ( (unsigned int)sub_1800273F8((__int64)(v10 + 4), (_OWORD *)(v12 + 16LL * v14)) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_4;
    }
    v31 = 49;
LABEL_47:
    sub_18004BD84(
      (int)retaddr,
      v31,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
    if ( v10 )
      JUMPOUT(0x180093E35LL);
    JUMPOUT(0x180093E3ALL);
  }
LABEL_4:
  v15 = *((_QWORD *)v10 + 7);
  if ( v15 )
  {
    _o_free(v15);
    *((_QWORD *)v10 + 7) = 0LL;
  }
  *((_QWORD *)v10 + 8) = 0LL;
  v16 = *((_QWORD *)v10 + 9);
  if ( v16 )
  {
    _o_free(v16);
    *((_QWORD *)v10 + 9) = 0LL;
  }
  *((_QWORD *)v10 + 10) = 0LL;
  for ( i = 0; i < a2; ++a3 )
  {
    v20 = v10[16];
    v21 = v10[17];
    if ( v20 == v21 )
    {
      if ( v21 )
      {
        v30 = (v20 & 0x40000000) != 0;
        v22 = 2 * v20;
        v33 = v22;
        if ( v30 )
          goto LABEL_49;
      }
      else
      {
        v22 = 1;
        v33 = 1;
      }
      if ( (unsigned __int64)v22 > 0x7FFFFFF || (v23 = o__recalloc(*((_QWORD *)v10 + 7), v22, 16LL)) == 0 )
      {
LABEL_49:
        v32 = 70;
        goto LABEL_46;
      }
      v10[17] = v33;
      *((_QWORD *)v10 + 7) = v23;
      v20 = v10[16];
    }
    v24 = (_OWORD *)(*((_QWORD *)v10 + 7) + 16LL * v20);
    if ( v24 )
    {
      *v24 = *a3;
      v20 = v10[16];
    }
    v10[16] = v20 + 1;
    v25 = v10[20];
    v26 = v10[21];
    if ( v25 == v26 )
    {
      if ( v26 )
      {
        v30 = (v25 & 0x40000000) != 0;
        v27 = 2 * v25;
        v34 = v27;
        if ( v30 )
          goto LABEL_50;
      }
      else
      {
        v27 = 1;
        v34 = 1;
      }
      if ( (unsigned __int64)v27 > 0x7FFFFFF || (v28 = o__recalloc(*((_QWORD *)v10 + 9), v27, 16LL)) == 0 )
      {
LABEL_50:
        v32 = 72;
        goto LABEL_46;
      }
      v10[21] = v34;
      *((_QWORD *)v10 + 9) = v28;
      v25 = v10[20];
    }
    v29 = (_OWORD *)(*((_QWORD *)v10 + 9) + 16LL * v25);
    if ( v29 )
    {
      *v29 = *a3;
      v25 = v10[20];
    }
    v10[20] = v25 + 1;
    ++i;
  }
  if ( a4 )
  {
    while ( (unsigned int)sub_1800273F8((__int64)(v10 + 18), (_OWORD *)(a5 + 16LL * v11)) )
    {
      if ( ++v11 >= a4 )
        goto LABEL_10;
    }
    v32 = 77;
LABEL_46:
    sub_18004BD84(
      (int)retaddr,
      v32,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
    v31 = 50;
    goto LABEL_47;
  }
LABEL_10:
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  *a6 = v10 + 4;
  v18 = (std::_Ref_count_base *)a6[1];
  a6[1] = v10;
  if ( v18 )
    sub_180052600(v18);
  if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v10)(v10);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v10);
  }
  return 0LL;
}
