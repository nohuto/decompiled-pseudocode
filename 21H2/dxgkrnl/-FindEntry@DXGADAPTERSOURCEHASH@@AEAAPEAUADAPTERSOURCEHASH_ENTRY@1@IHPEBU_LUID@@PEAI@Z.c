/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C030A3B8
 * Callers:
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0210798 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030A574 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01EA048 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        int a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // r10
  unsigned int v9; // edx
  _DWORD *v10; // r9
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v16; // r8d
  _DWORD *v17; // rdi
  int v18; // ecx
  int v19; // eax

  v5 = (_QWORD *)((char *)this + 48);
  v11 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v12 = 1 << *(_DWORD *)(v8 + 68);
  v13 = v9;
  if ( v11 > v12 )
    v11 = v12;
  if ( v9 >= v11 )
  {
    v14 = v11;
    WdLogSingleEntry2(1LL, v9, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      v13,
      v14,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  v16 = 0;
  v17 = (_DWORD *)(*v5 + 16LL * v9);
  if ( !v11 )
    return 0LL;
  while ( 1 )
  {
    v18 = v17[3] & 1 ^ (a3 == 0);
    if ( v10 && (*v10 != *v17 || v10[1] != v17[1]) )
      v18 = 0;
    if ( (!a5 || *a5 == v17[2]) && v18 )
      break;
    v19 = a2 + 1;
    v17 += 4;
    if ( a2 + 1 == v11 )
      v17 = (_DWORD *)*v5;
    a2 = 0;
    ++v16;
    if ( v19 != v11 )
      a2 = v19;
    if ( v16 >= v11 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v17;
}
