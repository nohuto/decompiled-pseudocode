/*
 * XREFs of ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0262A78
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02409B0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000AE88 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0262118 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CDriverStoreCopy::SetRootDirectory(
        CDriverStoreCopy *this,
        struct DXGADAPTER *a2,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a3)
{
  char *v3; // rbx
  int v7; // eax
  _WORD *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // r9
  __int16 v16; // ax
  char *v17; // rax

  v3 = (char *)this + 24;
  v7 = RtlStringCbCopyW((unsigned __int16 *)this + 12, 0x208uLL, (size_t *)((char *)a3 + 60));
  *((_DWORD *)a3 + 4) = v7;
  if ( v7 >= 0 )
  {
    v8 = v3;
    v9 = 260LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    v10 = v9 == 0 ? 0xC000000D : 0;
    if ( v9 )
      v11 = 260 - v9;
    else
      v11 = 0LL;
    if ( v9 )
    {
      v12 = &v3[2 * v11];
      v13 = 260 - v11;
      if ( 260 != v11 )
      {
        v14 = 2147483646LL;
        v15 = (char *)L"\\" - v12;
        do
        {
          if ( !v14 )
            break;
          v16 = *(_WORD *)&v12[v15];
          if ( !v16 )
            break;
          *(_WORD *)v12 = v16;
          --v14;
          v12 += 2;
          --v13;
        }
        while ( v13 );
      }
      v17 = v12 - 2;
      if ( v13 )
        v17 = v12;
      v10 = v13 == 0 ? 0x80000005 : 0;
      *(_WORD *)v17 = 0;
    }
    *((_DWORD *)a3 + 4) = v10;
    CDriverStoreCopy::InitializeSystem32Links(this, a2);
  }
}
