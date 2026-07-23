/*
 * XREFs of RtlpLeakCallbackRoutine @ 0x1800F8110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPushPageDescriptor @ 0x1800F8288 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1800F881C (RtlpSetBlockInfo.c)
 */

__int64 __fastcall RtlpLeakCallbackRoutine(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  int v7; // r9d
  _DWORD *v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = *(_DWORD *)a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = v4 >> 12;
        v6 = (v4 + *(_QWORD *)(a1 + 32) - 1LL) >> 12;
        RtlpLDCrtPage = v4 >> 12;
        if ( v4 >> 12 == RtlpLDPreviousPage )
        {
          v7 = RtlpLDNumBlocks;
        }
        else
        {
          if ( RtlpLDPreviousPage )
          {
            RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
            v4 = *(_QWORD *)(a1 + 16);
            v5 = RtlpLDCrtPage;
          }
          RtlpLDPreviousPage = v5;
          v7 = 0;
        }
        v8 = RtlpTempBlocks;
        RtlpLDNumBlocks = v7 + 1;
        v9 = 5LL * v7;
        *((_QWORD *)RtlpTempBlocks + v9 + 2) = v4;
        v8[2 * v9 + 8] = 0;
        *(_QWORD *)&v8[2 * v9 + 6] = *(_QWORD *)(a1 + 32);
        if ( v6 != v5 )
        {
          RtlpPushPageDescriptor(v5, 1LL);
          v10 = RtlpTempBlocks;
          v11 = *(_QWORD *)(a1 + 16);
          RtlpLDNumBlocks = 1;
          *((_QWORD *)RtlpTempBlocks + 2) = v11;
          v10[8] = 0;
          *((_QWORD *)v10 + 3) = *(_QWORD *)(a1 + 32);
          if ( v6 - RtlpLDCrtPage > 1 )
            RtlpPushPageDescriptor(RtlpLDCrtPage + 1, v6 - RtlpLDCrtPage - 1);
          RtlpLDPreviousPage = v6;
        }
      }
    }
    else
    {
      RtlpSetBlockInfo(RtlpProcessMemoryMap, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0LL);
    }
  }
  else
  {
    if ( RtlpLDPreviousPage )
      RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
    RtlpLDPreviousPage = 0LL;
    v12 = *(_QWORD *)(a1 + 16);
    RtlpLDNumBlocks = 0;
    RtlpCrtHeapAddress = v12;
  }
  return 0LL;
}
