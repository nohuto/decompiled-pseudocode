/*
 * XREFs of ?ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z @ 0x1801C1C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ScaleChanged(CVirtualTouchpadExperienceManager *this)
{
  if ( *((_BYTE *)this + 293) )
    return 0LL;
  else
    return CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange((CVirtualTouchpadExperienceManager *)((char *)this - 24));
}
