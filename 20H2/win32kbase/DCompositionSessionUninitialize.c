/*
 * XREFs of DCompositionSessionUninitialize @ 0x1C008133C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RemoveAnyObject@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@QEAAPEAUMaterialProperty@@XZ @ 0x1C008141C (-RemoveAnyObject@-$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@Direct.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C008147C (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 */

void DCompositionSessionUninitialize()
{
  MaterialProperty *v0; // rax
  unsigned int v1; // edx

  if ( Table )
  {
    while ( 1 )
    {
      v0 = (MaterialProperty *)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject();
      if ( !v0 )
        break;
      MaterialProperty::`scalar deleting destructor'(v0, v1);
    }
    Win32FreePool((__int64)Table);
    Table = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)Resource);
    Resource = 0LL;
  }
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(DirectComposition::CConnection::s_pSessionConnection);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool((__int64)DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
}
