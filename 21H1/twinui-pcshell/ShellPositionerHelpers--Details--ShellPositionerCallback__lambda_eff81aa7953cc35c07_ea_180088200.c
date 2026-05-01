/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::_scalar_deleting_destructor_ @ 0x180088200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  *((_DWORD *)Block + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 4);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
