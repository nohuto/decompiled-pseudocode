/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x1C0002D64
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0160F74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0002790 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C0002DD4 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C0002F30 (--0CTokenManager@@AEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *v2; // rax
  CTokenManager *v3; // rax
  CTokenManager *v4; // rbx
  int v5; // edi

  v2 = (CTokenManager *)operator new[](376LL, 1735609684LL, 256LL);
  if ( v2 && (v3 = CTokenManager::CTokenManager(v2), (v4 = v3) != 0LL) )
  {
    v5 = CTokenManager::Initialize(v3);
    if ( v5 < 0 )
      CTokenManager::`scalar deleting destructor'(v4);
    else
      *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
