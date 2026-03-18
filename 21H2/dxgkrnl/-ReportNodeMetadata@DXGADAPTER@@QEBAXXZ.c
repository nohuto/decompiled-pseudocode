/*
 * XREFs of ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0219038
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqqz_EtwWriteTransfer @ 0x1C00452DC (McTemplateK0pqqz_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::ReportNodeMetadata(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  unsigned int i; // esi
  __int64 v7; // r12
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]

  if ( *((int *)this + 606) < 0x2000 )
  {
    v4 = 1;
  }
  else
  {
    v4 = *((_DWORD *)this + 72);
    if ( !v4 )
      return;
  }
  v5 = 0LL;
  for ( i = 0; i < v4; ++i )
  {
    v7 = *((_QWORD *)this + 335);
    if ( *(_QWORD *)(v5 + v7 + 32) )
    {
      v8 = *(unsigned __int16 *)(v5 + v7);
      v9 = 0;
      if ( *(_WORD *)(v5 + v7) )
      {
        v10 = 0LL;
        do
        {
          v11 = *(_QWORD *)(v5 + v7 + 32);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v13) = *(_DWORD *)(v10 + v11);
            LODWORD(v12) = v9 | (i << 16);
            McTemplateK0pqqz_EtwWriteTransfer((unsigned int)v12, v11, a3, this, v12, v13, v10 + v11 + 4);
          }
          ++v9;
          v10 += 74LL;
        }
        while ( v9 < v8 );
      }
    }
    v5 += 344LL;
  }
}
