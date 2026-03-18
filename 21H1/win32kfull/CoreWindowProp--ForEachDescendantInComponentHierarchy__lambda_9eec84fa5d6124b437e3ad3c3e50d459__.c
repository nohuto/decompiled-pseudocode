/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0
 * Callers:
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 *     _lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator() @ 0x9BEF4 (_lambda_0c0b2ffdec7bf834e0e54733fd19cc10_--operator().c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

void __thiscall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___(
        void *this,
        int a2,
        _DWORD *a3)
{
  struct tagWND *NextComponentWindow; // eax
  const struct tagWND *v4; // [esp+0h] [ebp-8h]
  const struct tagWND *v5; // [esp+4h] [ebp-4h]

  if ( this && CoreWindowProp::IsHost() )
  {
    while ( 1 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v4, v5);
      if ( !NextComponentWindow )
        break;
      lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator()(NextComponentWindow, *a3 != 1 ? 0 : -2);
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___(a2, a3);
    }
  }
}
