/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C00399D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001B764 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C0039AC4 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C0039B38 (FindOrCreateMaterialProperty.c)
 *     CheckShellExperienceComposerAccess @ 0x1C01D55BC (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  struct DirectComposition::ResourceObject *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  MaterialProperty *v15; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::ResourceObject *v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v15 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  if ( UserIsCurrentProcessDwm(v9, v8) || (v11 = CheckShellExperienceComposerAccess(v10), v11 >= 0) )
  {
    v11 = FindOrCreateMaterialProperty(a1, a2, &v15);
    if ( v11 >= 0 )
    {
      if ( a3 )
      {
        LOBYTE(v12) = 1;
        v13 = DirectComposition::ResourceObject::ResolveHandle(a3, 1LL, v12, &v16);
        v7 = v16;
        v11 = v13;
      }
      if ( v11 >= 0 )
        v11 = MaterialProperty::Store(v15, v7);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
