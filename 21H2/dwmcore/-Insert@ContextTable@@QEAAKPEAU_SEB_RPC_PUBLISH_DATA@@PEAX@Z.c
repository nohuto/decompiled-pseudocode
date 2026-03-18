/*
 * XREFs of ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x18001F718
 * Callers:
 *     PubSebRegisterRpc @ 0x18001F600 (PubSebRegisterRpc.c)
 * Callees:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x18001F778 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 */

__int64 __fastcall ContextTable::Insert(ContextTable *this, struct _SEB_RPC_PUBLISH_DATA *a2, void *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v6; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = 0;
  RtlAcquireSRWLockExclusive(&unk_1803D39B0);
  if ( !(unsigned int)ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
                        v4,
                        &v6,
                        &v7) )
    v3 = 1359;
  RtlReleaseSRWLockExclusive(&unk_1803D39B0);
  return v3;
}
