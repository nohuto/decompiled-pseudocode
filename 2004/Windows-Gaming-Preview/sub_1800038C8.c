/*
 * XREFs of sub_1800038C8 @ 0x1800038C8
 * Callers:
 *     sub_180003D50 @ 0x180003D50 (sub_180003D50.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 * Callees:
 *     sub_180008EF4 @ 0x180008EF4 (sub_180008EF4.c)
 *     sub_180008F80 @ 0x180008F80 (sub_180008F80.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800038C8(__int64 a1, __int64 a2)
{
  _WORD *v2; // rbx
  int v3; // ebp
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rdi
  HANDLE v8; // rax
  _WORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  signed __int32 v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  SIZE_T v27; // rdi
  HANDLE v28; // rax
  LPVOID v29; // rsi
  HANDLE v30; // rax
  HANDLE v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rax

  v2 = *(_WORD **)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v2 )
    goto LABEL_39;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    v2 = v7;
    if ( qword_18005ABD0 )
    {
      v8 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _WORD *))qword_18005ABD0)(v8, v7);
    }
    *(_QWORD *)(a1 + 24) = v7;
    if ( v7 )
    {
      v9 = v7 + 200;
      *(_DWORD *)(a1 + 32) = 5;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v9 );
      v2 = *(_WORD **)(a1 + 24);
    }
  }
  if ( v2 )
  {
LABEL_39:
    if ( !v3 || (v10 = &v2[40 * *(unsigned __int16 *)(a1 + 32)], v2 == (_WORD *)v10) )
    {
LABEL_16:
      v12 = 1LL;
      v13 = *(volatile signed __int32 **)(a1 + 8);
      *(_WORD *)(a1 + 34) = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
      v14 = _InterlockedExchangeAdd(v13, 1u);
      v15 = -1LL;
      v16 = *(_QWORD *)(a1 + 24) + 80LL * *(unsigned __int16 *)(a1 + 34);
      *(_DWORD *)(v16 + 4) = v14 + 1;
      v17 = v16 + 16;
      v18 = v16 + 32;
      *(_DWORD *)(v16 + 8) = *(_DWORD *)(a2 + 4);
      v19 = v16 + 56;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_WORD *)(v16 + 24) = *(_WORD *)(a2 + 56);
      *(_BYTE *)(v16 + 26) = *(_BYTE *)a2;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_QWORD *)(v16 + 40) = *(_QWORD *)(a2 + 128);
      *(_QWORD *)(v16 + 48) = *(_QWORD *)(a2 + 136);
      *(_QWORD *)(v16 + 56) = 0LL;
      v20 = *(_QWORD *)(a2 + 48);
      if ( v20 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *(_BYTE *)(v20 + v22) );
        v21 = v22 + 1;
      }
      else
      {
        v21 = 1LL;
      }
      v23 = *(_QWORD *)(a2 + 120);
      if ( v23 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( *(_BYTE *)(v23 + v24) );
        v12 = v24 + 1;
      }
      v25 = *(_QWORD *)(a2 + 16);
      if ( v25 )
      {
        do
          ++v15;
        while ( *(_WORD *)(v25 + 2 * v15) );
        v26 = 2 * v15 + 2;
      }
      else
      {
        v26 = 2LL;
      }
      v27 = v21 + v26 + v12;
      if ( !*(_QWORD *)(v16 + 64) || *(_QWORD *)(v16 + 72) < v27 )
      {
        v28 = GetProcessHeap();
        v29 = HeapAlloc(v28, 8u, v27);
        if ( qword_18005ABD0 )
        {
          v30 = GetProcessHeap();
          ((void (__fastcall *)(HANDLE, LPVOID))qword_18005ABD0)(v30, v29);
        }
        if ( v29 )
        {
          v31 = GetProcessHeap();
          HeapFree(v31, 0, *(LPVOID *)(v16 + 64));
          *(_QWORD *)(v16 + 64) = v29;
          *(_QWORD *)(v16 + 72) = v27;
        }
      }
      v32 = *(_QWORD *)(v16 + 64);
      if ( v32 )
      {
        v33 = v32 + *(_QWORD *)(v16 + 72);
        v34 = sub_180008F80(v32, v33, *(_QWORD *)(a2 + 48), v17);
        v35 = sub_180008F80(v34, v33, *(_QWORD *)(a2 + 120), v18);
        v36 = (void *)sub_180008EF4(v35, v33, *(_QWORD *)(a2 + 16), v19);
        memset(v36, 0, v33 - (_QWORD)v36);
      }
    }
    else
    {
      v11 = v2 + 4;
      while ( *(v11 - 1) <= *(_DWORD *)(a1 + 16) || *v11 != *(_DWORD *)(a2 + 4) )
      {
        v11 += 20;
        if ( v11 - 2 == v10 )
          goto LABEL_16;
      }
    }
  }
}
