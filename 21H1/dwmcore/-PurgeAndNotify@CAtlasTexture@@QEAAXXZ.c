/*
 * XREFs of ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x18024D68C
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024CC70 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18024CE1C (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z @ 0x18024C758 (-NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ @ 0x18024D458 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ.c)
 */

void __fastcall CAtlasTexture::PurgeAndNotify(CAtlasTexture *this)
{
  __int64 i; // rdi
  CAtlasTexture **v3; // rsi
  const struct CD3DDevice *Device; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAtlasTexture ***)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
    {
      Device = CAtlasTexture::GetDevice(*v3);
      CAtlasEntry::NotifyOwner((CAtlasEntry *)v3, Device);
    }
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}
