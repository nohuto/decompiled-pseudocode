/*
 * XREFs of IommupHvGetPageFault @ 0x1404DA240
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvGetPageFault(
        unsigned int *a1,
        ULONG_PTR a2,
        int *a3,
        _QWORD *a4,
        _WORD *a5,
        _DWORD *a6,
        unsigned __int64 *a7,
        __int64 *a8)
{
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v11 = **((_QWORD **)a1 + 1);
  if ( (_DWORD)v11 == HIDWORD(v11) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 9LL) )
      ((void (__fastcall *)(_QWORD))qword_140C4A2F8)(*a1);
    return 0LL;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = 0;
    *(_OWORD *)a2 = *(_OWORD *)(v12 + 40LL * (unsigned int)v11);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v12 + 40LL * (unsigned int)v11 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40LL * (unsigned int)v11 + 32);
    if ( (_DWORD)v11 != 101 )
      v13 = v11 + 1;
    **((_DWORD **)a1 + 1) = v13;
    if ( *(__int64 *)(a2 + 32) >= 0 )
    {
      v15 = *(_DWORD *)(a2 + 8);
      if ( (v15 & 0x100000) == 0 )
        KeBugCheckEx(0x159u, 0x3100uLL, a2, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
      if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
        KeBugCheckEx(0x159u, 0x3101uLL, a2, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
      *a3 = v15 & 0xFFFFF;
      *a4 = *(_QWORD *)a2;
      *a5 = (*(_DWORD *)(a2 + 8) >> 21) & 0x1FF;
      *a6 = 0;
      *a7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
      v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_DWORD *)(a2 + 16) & 1 | 2LL;
      if ( (*(_QWORD *)(a2 + 16) & 2) == 0 )
        v17 = *(_QWORD *)(a2 + 16) & 1LL;
      v18 = v17 | 4;
      if ( (v16 & 4) == 0 )
        v18 = v17;
      v19 = v18 | 0x10;
      if ( (*(_DWORD *)(a2 + 8) & 0x40000000) == 0 )
        v19 = v18;
      v14 = v19 | 0x20;
      if ( *(int *)(a2 + 8) >= 0 )
        v14 = v19;
    }
    else
    {
      *a3 = -1;
      *a4 = 0LL;
      *a5 = -1;
      *a6 = 0;
      *a7 = 0LL;
      v14 = 64LL;
    }
    *a8 = v14;
    return 1LL;
  }
}
