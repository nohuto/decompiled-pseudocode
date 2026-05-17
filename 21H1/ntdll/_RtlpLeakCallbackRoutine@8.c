/*
 * XREFs of _RtlpLeakCallbackRoutine@8 @ 0x4B35E8A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPushPageDescriptor@8 @ 0x4B35E9DA (_RtlpPushPageDescriptor@8.c)
 *     _RtlpSetBlockInfo@16 @ 0x4B35EDDC (_RtlpSetBlockInfo@16.c)
 */

int __stdcall RtlpLeakCallbackRoutine(_DWORD *a1, int a2)
{
  unsigned int v2; // edx
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ebx
  char *v6; // edx
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-8h]

  if ( *a1 == 2 )
  {
    if ( RtlpLDPreviousPage )
      RtlpPushPageDescriptor(RtlpLDPreviousPage, 1);
    RtlpLDPreviousPage = 0;
    v10 = a1[2];
    RtlpLDNumBlocks = 0;
    RtlpCrtHeapAddress = v10;
  }
  else if ( *a1 == 3 )
  {
    RtlpSetBlockInfo(a1[3], 0);
  }
  else if ( *a1 == 5 && (a1[3] & 1) != 0 )
  {
    v2 = a1[2];
    v3 = v2 >> 12;
    v12 = (v2 + a1[4] - 1) >> 12;
    RtlpLDCrtPage = v2 >> 12;
    if ( v2 >> 12 == RtlpLDPreviousPage )
    {
      v5 = RtlpLDNumBlocks;
      v4 = v2;
    }
    else
    {
      if ( RtlpLDPreviousPage )
      {
        RtlpPushPageDescriptor(RtlpLDPreviousPage, 1);
        v4 = a1[2];
        v3 = RtlpLDCrtPage;
      }
      else
      {
        v4 = v2;
      }
      RtlpLDPreviousPage = v3;
      v5 = 0;
    }
    v6 = (char *)RtlpTempBlocks;
    v7 = 20 * v5;
    *(_DWORD *)((char *)RtlpTempBlocks + v7 + 8) = v4;
    *(_DWORD *)&v6[v7 + 16] = 0;
    *(_DWORD *)&v6[v7 + 12] = a1[4];
    RtlpLDNumBlocks = v5 + 1;
    if ( v12 != v3 )
    {
      RtlpPushPageDescriptor(v3, 1);
      v8 = RtlpTempBlocks;
      v9 = a1[2];
      RtlpLDNumBlocks = 1;
      *((_DWORD *)RtlpTempBlocks + 2) = v9;
      v8[4] = 0;
      v8[3] = a1[4];
      if ( v12 - RtlpLDCrtPage > 1 )
        RtlpPushPageDescriptor(RtlpLDCrtPage + 1, v12 - RtlpLDCrtPage - 1);
      RtlpLDPreviousPage = v12;
    }
  }
  return 0;
}
