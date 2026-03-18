/*
 * XREFs of ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C020ECE0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryPStateEngineData(
        DXGADAPTER *this,
        unsigned int a2,
        struct _DXGK_POWER_P_COMPONENT *a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx

  v4 = *((_QWORD *)this + 500);
  if ( v4 )
  {
    if ( a2 < *((_DWORD *)this + 1002) )
    {
      v5 = 248LL * a2;
      *a3 = *(struct _DXGK_POWER_P_COMPONENT *)(v5 + v4);
      *a4 = *(_DWORD *)(v5 + *((_QWORD *)this + 500) + 144);
    }
  }
}
