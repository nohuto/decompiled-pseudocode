/*
 * XREFs of ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084A84 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterAllocateQueue(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rax
  char v2; // dl

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v2 = 1;
  if ( v1[1] == 12 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( v1[12] >= 0x43Cu )
    {
      if ( v1[13] >= 0x43Cu )
      {
        if ( *(_QWORD *)a1 )
          return ndisAllocateReceiveQueue(a1);
        else
          return 0;
      }
      else
      {
        v1[17] = 1084;
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
    else
    {
      v1[17] = 1084;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v2;
}
