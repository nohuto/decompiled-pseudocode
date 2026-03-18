/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x1C001AC08
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C015AB74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0007E58 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C001AC88 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C001ADE4 (--0CTokenManager@@AEAA@XZ.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *v2; // rax
  CTokenManager *v3; // rbx
  int v4; // edi

  v2 = (CTokenManager *)operator new(0x160uLL, 0x67734D54u, 1, PagedPool);
  if ( v2 )
    v3 = CTokenManager::CTokenManager(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = CTokenManager::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      CTokenManager::`scalar deleting destructor'(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
