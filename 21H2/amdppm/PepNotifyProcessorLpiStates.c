/*
 * XREFs of PepNotifyProcessorLpiStates @ 0x1C0033BFC
 * Callers:
 *     QueryPepCapabilites @ 0x1C0036A50 (QueryPepCapabilites.c)
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall PepNotifyProcessorLpiStates(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *PoolWithTag; // rax
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  _BYTE *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  _BYTE *v10; // r8

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 528) + 16LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * v2 + 8), 0x72637250u);
  v4 = 0;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(80 * v2 + 8));
    *v5 = v2;
    if ( (_DWORD)v2 )
    {
      v6 = (char *)v5 + 34;
      v7 = -34LL - (_QWORD)v5;
      v8 = v2;
      do
      {
        v9 = *(_QWORD *)(a1 + 528);
        v10 = &v6[v7];
        *(_DWORD *)(v6 - 26) = *(_DWORD *)&v6[v7 + 24 + v9];
        *(_DWORD *)(v6 - 22) = *(_DWORD *)&v6[v7 + 28 + v9];
        *(_DWORD *)(v6 - 18) = *(_DWORD *)&v6[v7 + 32 + v9];
        *(_DWORD *)(v6 - 14) = *(_DWORD *)&v6[v7 + 36 + v9];
        *(_DWORD *)(v6 - 10) = *(_DWORD *)&v6[v7 + 40 + v9];
        *(v6 - 2) = v6[v7 + 48 + v9];
        *(v6 - 1) = v6[v7 + 49 + v9];
        *v6 = v6[v7 + 50 + v9];
        v6 += 80;
        *(v6 - 79) = v10[v9 + 51];
        *(_QWORD *)(v6 - 74) = *(_QWORD *)&v10[v9 + 52];
        *(v6 - 66) = v10[v9 + 60];
        *(v6 - 65) = v10[v9 + 61];
        *(v6 - 64) = v10[v9 + 62];
        *(v6 - 63) = v10[v9 + 63];
        *(_QWORD *)(v6 - 58) = *(_QWORD *)&v10[v9 + 64];
        *(v6 - 50) = v10[v9 + 72];
        *(v6 - 49) = v10[v9 + 73];
        *(v6 - 48) = v10[v9 + 74];
        *(v6 - 47) = v10[v9 + 75];
        *(_QWORD *)(v6 - 42) = *(_QWORD *)&v10[v9 + 76];
        *(_QWORD *)(v6 - 34) = *(_QWORD *)&v10[v9 + 96];
        --v8;
      }
      while ( v8 );
    }
    PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 35LL, v5);
    ExFreePoolWithTag(v5, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
