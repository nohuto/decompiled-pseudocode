/*
 * XREFs of ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008F024
 * Callers:
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016CFC (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00921C0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(struct _SINGLE_LIST_ENTRY *Src, struct _SINGLE_LIST_ENTRY *a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rbx
  _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  _SINGLE_LIST_ENTRY *v6; // rsi
  _SINGLE_LIST_ENTRY *Next; // rcx

  v2 = 0;
  v4 = (unsigned int *)Src;
  if ( Src )
  {
    while ( 1 )
    {
      PoolWithTag = (_SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v4[4], 0x6B70444Eu);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memmove(PoolWithTag, v4, v4[4]);
      v6->Next = 0LL;
      v6[1].Next = 0LL;
      v6->Next = a2->Next;
      a2->Next = v6;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x60u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    v2 = -1073741670;
    while ( 1 )
    {
      Next = a2->Next;
      if ( !a2->Next )
        break;
      a2->Next = Next->Next;
      ExFreePoolWithTag(Next, 0);
    }
  }
  return v2;
}
