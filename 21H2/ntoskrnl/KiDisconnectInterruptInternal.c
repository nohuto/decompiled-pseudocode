/*
 * XREFs of KiDisconnectInterruptInternal @ 0x1403AF4FC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x1403AF3B4 (KiDisconnectInterruptCommon.c)
 *     KiProcessPendingDisconnect @ 0x14045B77E (KiProcessPendingDisconnect.c)
 * Callees:
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, _DWORD *a2)
{
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = 0;
  v5 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(unsigned int *)(a1 + 88);
    v7 = KeGetCurrentPrcb()->InterruptObject[v6];
    if ( !*((_BYTE *)v7 + 93) )
    {
      v12 = (_QWORD *)v7[1];
      if ( !v12 || v12 == v7 + 1 )
        v4 = 1;
    }
    if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v7[10] != KiChainedDispatch
      || v4 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v6] = 0LL;
      v5 = 0;
    }
    else
    {
      if ( (_QWORD *)a1 == v7 )
      {
        v7 = (_QWORD *)(v7[1] - 8LL);
        v7[10] = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = v7;
      }
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 8 || *v10 != a1 + 8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = v7[1] - 8LL;
      if ( v7 == (_QWORD *)v11 && *(_BYTE *)(v11 + 93) )
      {
        *(_QWORD *)(v11 + 80) = KiInterruptDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = (void *)v11;
      }
      v5 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v5;
}
