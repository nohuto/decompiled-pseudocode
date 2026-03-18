/*
 * XREFs of ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1800A39CC
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800A38D8 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800A4DF4 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800C8FBC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyReleasedResources(CD3DResourceManager *this)
{
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v3; // rax
  struct _SLIST_ENTRY *Next; // rbx

  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v3 = InterlockedFlushSList(i);
    if ( !v3 )
      break;
    do
    {
      Next = v3->Next;
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource *)&v3[-4]);
      v3 = Next;
    }
    while ( Next );
  }
}
