/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800533E4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x180056D50 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  if ( byte_1800E2ED8 )
  {
    DeleteCriticalSection(&g_ResourceCacheIndexManager);
    byte_1800E2ED8 = 0;
  }
}
