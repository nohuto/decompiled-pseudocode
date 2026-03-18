/*
 * XREFs of ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x18019D9EC
 * Callers:
 *     ??1?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAA@XZ @ 0x18019D978 (--1-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMater.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::~CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CSceneMaterial::~CSceneMaterial((CSceneMaterial *)this);
}
