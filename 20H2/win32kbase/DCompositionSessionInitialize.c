/*
 * XREFs of DCompositionSessionInitialize @ 0x1C00B6200
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00B6228 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00B62E8 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00B63C0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CSynchronizationManager::OnSessionCreation();
    if ( (int)result >= 0 )
      return DirectComposition::CMaterialPropertiesTable::Initialize();
  }
  return result;
}
