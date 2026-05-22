/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180087324
 * Callers:
 *     ??1?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800874F0 (--1-$list@U-$pair@$$CBK_K@std@@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x180087574 (--1InputStateManager@@MEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180088454 (-clear@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800B7AE0 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800F86B0 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x1800F8718 (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x1800FDB30 (--1ResizeProcessor@@UEAA@XZ.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x18011C9C0 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180137BCC (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x180174A18 (--1DragNDropProcessorLegacy@@EEAA@XZ.c)
 *     ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x18019B0A0 (--_EInputInfoValidator@@UEAAPEAXI@Z.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x18019B1CC (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x18019B6FC (--1DWMCursorBroker@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 );
  }
}
