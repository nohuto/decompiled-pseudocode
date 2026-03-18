/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z @ 0x180250E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180250D4C (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  unsigned int v6; // ebp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax
  struct CVisualTree *v8; // rcx

  *a3 = 0LL;
  v6 = -2147467259;
  AcquireSRWLockShared(this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
  {
    v8 = (struct CVisualTree *)*((_QWORD *)InteropTextureByBindId + 11);
    *a3 = v8;
  }
  else
  {
    v8 = *a3;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v8 + 8LL))(v8);
    v6 = 0;
  }
  ReleaseSRWLockShared(this + 13);
  return v6;
}
