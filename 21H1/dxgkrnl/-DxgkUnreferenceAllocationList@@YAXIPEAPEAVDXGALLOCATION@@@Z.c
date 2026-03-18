/*
 * XREFs of ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0223BD0
 * Callers:
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0237D50 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
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
