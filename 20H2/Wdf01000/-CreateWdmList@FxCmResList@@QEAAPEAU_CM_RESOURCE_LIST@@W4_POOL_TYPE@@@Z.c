/*
 * XREFs of ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0060AA0
 * Callers:
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x1C0042F14 (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0083A10 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A040 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     memset @ 0x1C001CA80 (memset.c)
 */

_CM_RESOURCE_LIST *__fastcall FxCmResList::CreateWdmList(FxCmResList *this, _POOL_TYPE PoolType)
{
  FxCollectionInternal *v2; // rdi
  unsigned int m_Count; // ecx
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY **p_Blink; // rcx

  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v5 = 0LL;
  if ( m_Count )
  {
    v6 = 20 * (m_Count + 1);
    PoolWithTag = ExAllocatePoolWithTag(PoolType, v6, this->m_Globals->Tag);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v5[3] = 65537;
      v8 = (_LIST_ENTRY *)(v5 + 5);
      *v5 = 1;
      v5[4] = v2->m_Count;
      for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
      {
        p_Blink = &i[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v2 )
          break;
        v10 = *p_Blink;
        *v8 = *(_LIST_ENTRY *)((char *)*p_Blink + 104);
        LODWORD(v8[1].Flink) = v10[7].Blink;
        v8 = (_LIST_ENTRY *)((char *)v8 + 20);
      }
    }
  }
  return (_CM_RESOURCE_LIST *)v5;
}
