/*
 * XREFs of ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0222F18
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkUnreferenceAllocationList(unsigned int a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v3; // rdi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      if ( *a2 )
        ExReleaseRundownProtection(*a2 + 11);
      ++a2;
      --v3;
    }
    while ( v3 );
  }
}
