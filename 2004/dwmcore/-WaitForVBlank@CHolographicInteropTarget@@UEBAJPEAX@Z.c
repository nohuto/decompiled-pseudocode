/*
 * XREFs of ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x180256540
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x180252A58 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::WaitForVBlank(CHolographicInteropTarget *this, void *a2)
{
  CHolographicManager *v2; // rcx
  __int64 result; // rax

  v2 = (CHolographicManager *)*((_QWORD *)this + 2);
  result = 0LL;
  if ( v2 )
    return CHolographicManager::WaitForVBlank(v2);
  return result;
}
