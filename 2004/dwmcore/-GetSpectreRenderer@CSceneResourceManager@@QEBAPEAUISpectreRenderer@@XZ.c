/*
 * XREFs of ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18016A420
 * Callers:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016A44C (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016A4B0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016A5E8 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180177978 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     <none>
 */

struct ISpectreRenderer *__fastcall CSceneResourceManager::GetSpectreRenderer(CSceneResourceManager *this)
{
  struct ISpectreRenderer *result; // rax

  result = (struct ISpectreRenderer *)*((_QWORD *)this + 3);
  if ( result )
    return (struct ISpectreRenderer *)*((_QWORD *)result + 14);
  return result;
}
