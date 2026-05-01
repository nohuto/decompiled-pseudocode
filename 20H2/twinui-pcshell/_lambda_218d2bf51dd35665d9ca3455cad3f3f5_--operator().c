/*
 * XREFs of _lambda_218d2bf51dd35665d9ca3455cad3f3f5_::operator() @ 0x18004F2E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_218d2bf51dd35665d9ca3455cad3f3f5___::Run @ 0x18004F2C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_218d2bf51dd35665d9ca3455cad3f3f5___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18004F604 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_218d2bf51dd35665d9ca3455cad3f3f5_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rcx
  int v4; // edx
  __int16 v5; // ax

  v2 = a1[1];
  if ( **a1 == 1 )
    v2[47] |= 0x100u;
  else
    v2[47] &= ~0x100u;
  v3 = a1[1];
  v4 = **a1;
  if ( (v3[47] & 0x40) != 0 )
  {
    if ( v4 )
      return 0LL;
    *((_WORD *)v3 + 130) &= ~0x80u;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
    *((_WORD *)a1[1] + 130) |= 0x80u;
  }
  else
  {
    *((_WORD *)v3 + 130) &= ~0x40u;
    v5 = 0;
    if ( v4 == 1 )
      v5 = 64;
    *((_WORD *)v3 + 130) |= v5;
  }
  WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
  return 0LL;
}
