/*
 * XREFs of CmpAddSecurityCellToCache @ 0x140662770
 * Callers:
 *     CmpInsertSecurityCellList @ 0x14061A7B0 (CmpInsertSecurityCellList.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140662298 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpSecConvKey @ 0x140662A74 (CmpSecConvKey.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 **v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  const void *v23; // rbx
  unsigned int v24; // esi
  int v25; // ecx
  int v26; // ecx
  __int64 (__fastcall *v27)(_QWORD, _QWORD, __int64); // rax
  void *v28; // rax
  unsigned int v29; // ecx
  _DWORD v30[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+68h] [rbp+20h] BYREF
  int v32; // [rsp+6Ch] [rbp+24h]

  v32 = HIDWORD(a4);
  v30[0] = -1;
  v31 = 0;
  v30[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(a1, a2, &v31) == 1 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 1868);
  if ( *(_DWORD *)(a1 + 1864) == v7 )
  {
    v23 = *(const void **)(a1 + 1880);
    v24 = 16 * v7;
    v25 = 256;
    if ( a3 != 1 )
      v25 = 16;
    v26 = v7 + v25;
    v27 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24);
    *(_DWORD *)(a1 + 1868) = v26;
    v28 = (void *)v27((unsigned int)(16 * v26), 0LL, 1666403651LL);
    v29 = *(_DWORD *)(a1 + 1864);
    *(_QWORD *)(a1 + 1880) = v28;
    if ( !v28 )
    {
      *(_QWORD *)(a1 + 1880) = v23;
      *(_DWORD *)(a1 + 1868) = v29;
      return 3221225626LL;
    }
    memmove(v28, v23, 16LL * v29);
    if ( v23 )
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v23, v24);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v30);
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v8 + 16) + 32);
    if ( *(_DWORD *)(v8 + 16) < 0xFFFFFFE0 && (_DWORD)v10 != 32 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(v10, 0LL, 1666403651LL);
      v12 = v11;
      if ( v11 )
      {
        memmove((void *)(v11 + 32), (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
        *(_DWORD *)v12 = a2;
        v13 = *(_DWORD *)(v9 + 16);
        *(_DWORD *)(v12 + 28) = 0;
        *(_DWORD *)(v12 + 24) = v13;
        v14 = CmpSecConvKey(*(unsigned int *)(v9 + 16), v9 + 20);
        *(_DWORD *)(v12 + 4) = v14;
        v15 = v14 & 0x3F;
        v16 = (__int64 *)(v12 + 8);
        v17 = a1 + 16 * (v15 + 118);
        v18 = *(__int64 ***)(v17 + 8);
        if ( *v18 != (__int64 *)v17 )
          __fastfail(3u);
        v19 = v31;
        *v16 = v17;
        *(_QWORD *)(v12 + 16) = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
        v20 = *(_DWORD *)(a1 + 1864);
        if ( (unsigned int)v19 < v20 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)(v19 + 1)),
            (const void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v19),
            16LL * (v20 - (unsigned int)v19));
        v21 = 2 * v19;
        *(_DWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v21) = a2;
        *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v21 + 8) = v12;
        ++*(_DWORD *)(a1 + 1864);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
  }
  return 3221225626LL;
}
