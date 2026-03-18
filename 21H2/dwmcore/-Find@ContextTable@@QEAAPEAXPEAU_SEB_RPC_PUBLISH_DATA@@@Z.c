/*
 * XREFs of ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x18001FA1C
 * Callers:
 *     PubSebUnregisterRpc @ 0x18001F4E4 (PubSebUnregisterRpc.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18026C12C (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x18001FA94 (-FindKey@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLI.c)
 */

__int64 __fastcall ContextTable::Find(ContextTable *this, struct _SEB_RPC_PUBLISH_DATA *a2)
{
  __int64 v2; // rcx
  int Key; // eax
  __int64 v4; // rbx
  struct _SEB_RPC_PUBLISH_DATA *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  RtlAcquireSRWLockExclusive(&unk_1803D39B0);
  Key = ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
          v2,
          &v6);
  if ( Key == -1 )
  {
    v4 = 0LL;
  }
  else
  {
    if ( Key < 0 || Key >= (int)qword_1803D39A8 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
      JUMPOUT(0x18011935CLL);
    }
    v4 = *(_QWORD *)(*(&xmmword_1803D3998 + 1) + 8LL * Key);
  }
  RtlReleaseSRWLockExclusive(&unk_1803D39B0);
  return v4;
}
