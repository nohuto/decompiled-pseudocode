/*
 * XREFs of ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C004B0BC
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02A9B24 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGFIXEDQUEUE::Remove(DXGFIXEDQUEUE *this, unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v7; // rdx
  int v8; // eax
  bool v9; // zf

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v7 = *((unsigned int *)this + 3);
    if ( *((_DWORD *)this + 2) == (_DWORD)v7 )
    {
      return 2147483674LL;
    }
    else
    {
      v8 = v7 + 1;
      v9 = (_DWORD)v7 + 1 == *((_DWORD *)this + 1);
      *a2 = *(_DWORD *)(v3 + 4 * v7);
      if ( v9 )
        v8 = 0;
      *((_DWORD *)this + 3) = v8;
      return 0LL;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = 99LL;
    WdLogEvent5_WdError(v5);
    return 3221225495LL;
  }
}
