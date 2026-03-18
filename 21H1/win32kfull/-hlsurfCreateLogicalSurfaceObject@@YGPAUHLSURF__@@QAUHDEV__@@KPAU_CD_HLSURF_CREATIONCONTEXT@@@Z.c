/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 *     ?SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x230F2 (-SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QAEHPAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x23176 (-Initialize@SFMLOGICALSURFACE@@QAEHPAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

int __userpurge hlsurfCreateLogicalSurfaceObject@<eax>(
        HLSURF a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        unsigned int a4,
        struct _CD_HLSURF_CREATIONCONTEXT *a5)
{
  int *Object; // edi
  int v6; // esi
  HDEV v7; // ebx
  unsigned int v9; // [esp+0h] [ebp-14h]
  struct _CD_HLSURF_CREATIONCONTEXT *v10; // [esp+4h] [ebp-10h]

  Object = (int *)AllocateObject(200, 18, 1);
  v6 = 0;
  if ( Object )
  {
    v7 = a3;
    if ( SFMLOGICALSURFACE::Initialize(
           Object,
           *(_DWORD *)a3,
           *((_DWORD *)a3 + 1),
           *((_DWORD *)a3 + 2),
           1,
           *((_DWORD *)a3 + 3),
           *((_DWORD *)a3 + 4)) )
    {
      a3 = 0;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&a3, (struct OBJECT *)Object, 0x12u, 8u) )
      {
        v6 = *Object;
        if ( SpNotifyLSurface((HDEV)1, a1, (int)v7, v9, v10) >= 0 )
          Object[4] = a2;
        EtwLogicalSurfCreateEvent(v6, v6 >> 31, a1);
      }
      else
      {
        bhLSurfDestroyLogicalSurfaceObject(Object, 0, 0);
      }
      if ( a3 )
        _InterlockedDecrement((volatile signed __int32 *)a3 + 2);
    }
  }
  return v6;
}
