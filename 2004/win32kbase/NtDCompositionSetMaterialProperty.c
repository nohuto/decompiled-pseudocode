/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C000DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C000DC64 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C000DCD8 (FindOrCreateMaterialProperty.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C002F9D4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     CheckShellExperienceComposerAccess @ 0x1C01CF63C (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  struct DirectComposition::ResourceObject *v7; // rdi
  int v8; // ebx
  int v9; // eax
  MaterialProperty *v11; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::ResourceObject *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v11 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessDwm() || (v8 = CheckShellExperienceComposerAccess(), v8 >= 0) )
  {
    v8 = FindOrCreateMaterialProperty(a1, a2, &v11);
    if ( v8 >= 0 )
    {
      if ( a3 )
      {
        v9 = DirectComposition::ResourceObject::ResolveHandle(a3, 1u, 1, &v12);
        v7 = v12;
        v8 = v9;
      }
      if ( v8 >= 0 )
        v8 = MaterialProperty::Store(v11, v7);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
