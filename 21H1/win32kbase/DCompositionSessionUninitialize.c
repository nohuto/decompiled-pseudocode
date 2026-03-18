/*
 * XREFs of DCompositionSessionUninitialize @ 0x1C0006AEC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0006BCC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RemoveAnyObject@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@QEAAPEAUMaterialProperty@@XZ @ 0x1C00078D8 (-RemoveAnyObject@-$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@Direct.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C0007938 (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DCompositionSessionUninitialize(__int64 a1, unsigned int a2)
{
  MaterialProperty *v2; // rax
  unsigned int v3; // edx

  if ( Table )
  {
    while ( 1 )
    {
      v2 = (MaterialProperty *)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject();
      if ( !v2 )
        break;
      MaterialProperty::`scalar deleting destructor'(v2, v3);
    }
    Win32FreePool(Table);
    Table = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    Win32FreePool(Resource);
    Resource = 0LL;
  }
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      a2);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool(DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool(DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
}
