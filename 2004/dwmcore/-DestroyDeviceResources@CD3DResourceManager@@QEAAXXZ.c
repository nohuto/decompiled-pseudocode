/*
 * XREFs of ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800AFEF8
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800AFF84 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1800B17FC (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800D03CC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyDeviceResources(union _SLIST_HEADER *this)
{
  CD3DResourceManager *v1; // rdi
  CD3DResourceManager *Alignment; // rdx
  int v4; // esi
  CD3DResourceManager **v5; // r14

  v1 = (CD3DResourceManager *)&this[2];
  Alignment = (CD3DResourceManager *)this[2].Alignment;
  if ( Alignment != (CD3DResourceManager *)&this[2] )
  {
    v4 = 0;
    v5 = (CD3DResourceManager **)&this[2];
    do
    {
      if ( *((_DWORD *)Alignment - 8) )
      {
        CD3DResourceManager::DestroyResource(
          (CD3DResourceManager *)this,
          (CD3DResourceManager *)((char *)Alignment - 40));
      }
      else
      {
        ++v4;
        v5 = (CD3DResourceManager **)Alignment;
      }
      Alignment = *v5;
    }
    while ( *v5 != v1 );
    while ( QueryDepthSList(this + 1) != v4 )
      Sleep(1u);
    CD3DResourceManager::DestroyReleasedResources((CD3DResourceManager *)this);
  }
}
