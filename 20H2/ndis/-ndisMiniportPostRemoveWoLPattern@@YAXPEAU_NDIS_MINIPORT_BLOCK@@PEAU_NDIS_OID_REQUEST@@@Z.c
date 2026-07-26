/*
 * XREFs of ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090A44
 * Callers:
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091190 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00932C0 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C008FD64 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 */

void __fastcall ndisMiniportPostRemoveWoLPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  struct _NDIS_PACKET_PATTERN_ENTRY **v5; // r10
  _SINGLE_LIST_ENTRY *v6; // r11
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // rax
  int v8; // ecx
  struct _NDIS_PACKET_PATTERN_ENTRY *v9; // r8
  _SINGLE_LIST_ENTRY *v10; // rdx
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *v12; // r9
  int PatternEffectivePriority; // eax
  __int64 v14; // r8

  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  v5 = (struct _NDIS_PACKET_PATTERN_ENTRY **)(v4 + 968);
  v6 = OidSourceHandle;
  Next = *v5;
  v8 = **(_DWORD **)(v3 + 40);
  if ( *v5 )
  {
    do
    {
      v9 = Next;
      if ( Next->WoLPattern.PatternId == v8 )
        break;
      v5 = (struct _NDIS_PACKET_PATTERN_ENTRY **)Next;
      v9 = 0LL;
      Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
    }
    while ( Next );
    if ( v9 )
    {
      v10 = 0LL;
      p_DupLink = &v9->DupLink;
      if ( v9 != (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
      {
        do
        {
          v12 = p_DupLink - 1;
          if ( p_DupLink[2].Next == v6 )
            break;
          v10 = p_DupLink;
          v12 = 0LL;
          p_DupLink = p_DupLink->Next;
        }
        while ( p_DupLink );
        if ( v12 )
        {
          if ( v10 )
          {
            v10->Next = p_DupLink->Next;
          }
          else
          {
            if ( !p_DupLink->Next )
            {
              *v5 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
              goto LABEL_15;
            }
            v9 = (struct _NDIS_PACKET_PATTERN_ENTRY *)&p_DupLink->Next[-1];
            *v5 = v9;
            v9->Link.Next = Next->Link.Next;
          }
          PatternEffectivePriority = ndisGetPatternEffectivePriority(v9);
          *(_DWORD *)(v14 + 36) = PatternEffectivePriority;
LABEL_15:
          ExFreePoolWithTag(v12, 0);
        }
      }
    }
  }
}
