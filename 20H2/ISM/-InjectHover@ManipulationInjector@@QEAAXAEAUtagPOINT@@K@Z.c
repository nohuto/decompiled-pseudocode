/*
 * XREFs of ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C300C
 * Callers:
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x18004018C (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C2764 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C3844 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C3C18 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::InjectHover(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9

  if ( *((_BYTE *)this + 14) )
  {
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Hover pt: %d,%d\n", a2->x, a2->y);
    if ( (*((_DWORD *)this + 22) & 0xFFFFFF7F) == 0 )
    {
      if ( *((_DWORD *)this + 22) == 128 )
      {
        if ( *((_DWORD *)this + 178) == a3 )
        {
          ManipulationInjector::UpdateContact(this, *a2, 1, a3);
          ManipulationInjector::InjectAndScrub(this, v6, v7, v8);
        }
      }
      else
      {
        ManipulationInjector::StartManipulation(this, 128LL, *a2, a3);
      }
    }
  }
}
