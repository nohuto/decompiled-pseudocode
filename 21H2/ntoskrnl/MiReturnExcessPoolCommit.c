/*
 * XREFs of MiReturnExcessPoolCommit @ 0x140352D04
 * Callers:
 *     MiCommitPoolMemory @ 0x1403525F0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x1402287C8 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiFreeLargePageChain @ 0x140263068 (MiFreeLargePageChain.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 78);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
      MiReturnCommit(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)), v4 - v3);
  }
  else if ( (v1 & 4) != 0 )
  {
    v6 = *(__int64 **)(a1 + 16);
    if ( v6 )
      MiFreeLargePageChain(v6);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 8);
    if ( v7 != v8 )
    {
      v9[0] = (unsigned __int64)(v8 - v7);
      v9[2] = v9[0];
      v9[1] = 0LL;
      v10 = 0LL;
      MiReturnPoolCharges((unsigned __int64 *)v9, 0, 0);
    }
  }
  else if ( (v1 & 0x100) == 0 )
  {
    v5 = *(volatile signed __int32 **)(a1 + 16);
    if ( v5 )
      MiReturnPhysicalPoolPages(v5, 0);
  }
}
