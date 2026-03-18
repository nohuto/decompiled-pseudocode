/*
 * XREFs of VidSchiIsQuantumLeft @ 0x1C0012DD8
 * Callers:
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000BE90 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F3B0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z @ 0x1C0012EC8 (-VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, struct _VIDSCH_CONTEXT **a2)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), (*(_DWORD *)(a1 + 184) >> 1) & 1, 3) == 2 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v12 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v6 + 24) + 32LL),
      &v12);
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 8) != a1 + 8
      || (v9 = *(_QWORD **)(a1 + 16), (_QWORD *)*v9 != v7)
      || (*v9 = v8,
          *(_QWORD *)(v8 + 8) = v9,
          v10 = v3 + 16 * (*(unsigned int *)(a1 + 404) + 128LL),
          v11 = *(_QWORD **)(v10 + 8),
          *v11 != v10) )
    {
      __fastfail(3u);
    }
    *v7 = v10;
    *(_QWORD *)(a1 + 16) = v11;
    *v11 = v7;
    *(_QWORD *)(v10 + 8) = v7;
    return 0LL;
  }
  else
  {
    VidSchiSelectContextFromThisProcess((struct _VIDSCH_CONTEXT *)a1, a2);
    if ( *a2 != (struct _VIDSCH_CONTEXT *)a1 )
      VidSchiSetTransferContextRunningTime((__int64)*a2, a1, 1);
    return 1LL;
  }
}
