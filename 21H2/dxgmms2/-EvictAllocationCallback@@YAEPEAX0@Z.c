/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C00EA798
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C00EF704 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v7; // r8
  struct _KTHREAD **v8; // rbp
  _QWORD **v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *i; // r8
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r9
  char result; // al

  v4 = 0;
  if ( !a2 )
    return 1;
  v7 = *(unsigned int *)(a2[66] + 12LL);
  if ( (_DWORD)v7 || (*(_DWORD *)a2[66] & 0x20000) != 0 || (*((_DWORD *)a2 + 17) & 0x100) != 0 )
  {
    if ( a2[15] )
    {
      WdLogSingleEntry1(3LL, a2);
      result = 0;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !a2[15] )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v7, a4) + 24) = a2;
  v8 = (struct _KTHREAD **)(a2 + 37);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 37));
  v9 = (_QWORD **)(a2 + 34);
  v10 = *v9;
LABEL_18:
  if ( v10 == v9 )
  {
    v4 = 1;
  }
  else
  {
    for ( i = (_QWORD *)*(v10 - 2); ; i = (_QWORD *)*i )
    {
      if ( i == v10 - 2 )
      {
        v10 = (_QWORD *)*v10;
        goto LABEL_18;
      }
      v12 = (_QWORD *)*(i - 4);
      if ( !v12[3] || (*(_DWORD *)(v12[1] + 96LL) & 2) != 0 )
        break;
      v13 = v12 + 24;
      if ( !v12[24] )
      {
        v14 = *(_QWORD *)a1;
        v15 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v15 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v13 = v14;
        v13[1] = v15;
        *v15 = v13;
        *(_QWORD *)(v14 + 8) = v13;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(v8);
  return v4;
}
