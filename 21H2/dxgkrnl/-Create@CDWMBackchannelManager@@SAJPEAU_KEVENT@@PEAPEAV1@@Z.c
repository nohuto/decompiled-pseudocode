/*
 * XREFs of ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x1C0080CCC
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x1C007D9C0 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z @ 0x1C0080BD0 (--0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall CDWMBackchannelManager::Create(
        struct _KEVENT *a1,
        struct CDWMBackchannelManager **a2,
        __int64 a3,
        __int64 a4)
{
  CDWMBackchannelManager *Pool2; // rcx
  struct CDWMBackchannelManager *v7; // rax

  Pool2 = (CDWMBackchannelManager *)ExAllocatePool2(257LL, 48LL, 1835156294LL, a4);
  v7 = 0LL;
  if ( Pool2 )
    v7 = CDWMBackchannelManager::CDWMBackchannelManager(Pool2, a1);
  *a2 = v7;
  return v7 == 0LL ? 0xC0000017 : 0;
}
