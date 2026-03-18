/*
 * XREFs of TR_EnsureInputBufferForTrbs @ 0x1C003FE9C
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EnsureInputBufferForTrbs(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v5; // rcx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool v8; // cf
  SIZE_T v9; // rdx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( a2 >= *(_DWORD *)(a1 + 312) )
  {
    v5 = *(void **)(a1 + 304);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x49434858u);
    v6 = -1;
    v7 = 16 * a2 + 88;
    v8 = v7 < 16 * a2;
    if ( v7 >= 16 * a2 )
      v6 = 16 * a2 + 88;
    v9 = 0LL;
    if ( !v8 )
      v9 = v6;
    PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink), v9, 0x49434858u);
    *(_QWORD *)(a1 + 304) = PoolWithTag;
    if ( PoolWithTag )
      *(_DWORD *)(a1 + 312) = a2;
    else
      return (unsigned int)-1073741670;
  }
  return v2;
}
