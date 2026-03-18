/*
 * XREFs of ?FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z @ 0xC43C8
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8 (-AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

struct CoreWindowProp::Component *__userpurge CoreWindowProp::FindComponent@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        struct CoreWindowProp::Component **a5)
{
  struct CoreWindowProp::Component *v6; // edi
  struct CoreWindowProp::Component *result; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0;
  v8 = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a2, &v8) )
  {
    for ( result = *(struct CoreWindowProp::Component **)(v8 + 20);
          result;
          result = *(struct CoreWindowProp::Component **)result )
    {
      if ( a1 == *((_DWORD *)result + 1) )
      {
        if ( a3 )
          *(_DWORD *)a3 = v6;
        return result;
      }
      v6 = result;
    }
  }
  return 0;
}
