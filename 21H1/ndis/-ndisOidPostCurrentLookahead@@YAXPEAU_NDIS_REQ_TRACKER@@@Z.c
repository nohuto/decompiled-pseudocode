/*
 * XREFs of ?ndisOidPostCurrentLookahead@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0039270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostCurrentLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  __int64 v3; // r9

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 && *(_DWORD *)(v1 + 160) )
      {
        *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
        *(_DWORD *)(v1 + 48) = *(_DWORD *)(v1 + 160);
        *(_QWORD *)(v1 + 152) = 0LL;
        *(_DWORD *)(v1 + 160) = 0;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 52) = 4;
      if ( *(_QWORD *)a1 )
        *(_DWORD *)(v2 + 592) = **(_DWORD **)(v1 + 40);
      if ( *((_QWORD *)a1 + 3) )
      {
        if ( *(_DWORD *)(v1 + 160) )
        {
          *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
          *(_DWORD *)(v1 + 48) = *(_DWORD *)(v1 + 160);
          *(_QWORD *)(v1 + 152) = 0LL;
          *(_DWORD *)(v1 + 160) = 0;
        }
        *(_DWORD *)(v3 + 264) = **(_DWORD **)(v1 + 40);
      }
    }
  }
}
