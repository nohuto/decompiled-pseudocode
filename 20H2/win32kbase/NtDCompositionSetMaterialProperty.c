/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C0069F40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C006A034 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C006A0A8 (FindOrCreateMaterialProperty.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0094F24 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     CheckShellExperienceComposerAccess @ 0x1C01CD2BC (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  struct DirectComposition::ResourceObject *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  MaterialProperty *v14; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::ResourceObject *v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( UserIsCurrentProcessDwm(v9, v8) || (v11 = CheckShellExperienceComposerAccess(v10), v11 >= 0) )
  {
    v11 = FindOrCreateMaterialProperty(a1, a2, &v14);
    if ( v11 >= 0 )
    {
      if ( a3 )
      {
        v12 = DirectComposition::ResourceObject::ResolveHandle(a3, 1u, 1, &v15);
        v7 = v15;
        v11 = v12;
      }
      if ( v11 >= 0 )
        v11 = MaterialProperty::Store(v14, v7);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
