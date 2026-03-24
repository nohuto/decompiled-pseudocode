/*
 * XREFs of ?Init@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00CD210
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Init(VIDMM_PROCESS_HEAP *this, struct VIDMM_PROCESS *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  v3 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    *((_DWORD *)v3 + 7) = 15;
    *((_DWORD *)v3 + 8) = 53;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  _InterlockedIncrement(&dword_1C0050758);
  v4 = WdLogNewEntry5_WdLowResource(0LL);
  *(_QWORD *)(v4 + 24) = 230LL;
  WdLogEvent5_WdLowResource(v4);
  return 3221225495LL;
}
