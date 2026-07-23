/*
 * XREFs of MiLargePageFault @ 0x140548CF4
 * Callers:
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 * Callees:
 *     MiCheckSystemNxFault @ 0x140245F28 (MiCheckSystemNxFault.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiNoFaultFound @ 0x14031CF18 (MiNoFaultFound.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCanGrantExecute @ 0x140548318 (MiCanGrantExecute.c)
 *     MiGetVirtualFaultPageInfo @ 0x1405489AC (MiGetVirtualFaultPageInfo.c)
 *     MiValidVirtualizationFault @ 0x14054919C (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2)
{
  int v4; // r15d
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax
  __int64 v8; // r9
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  _KPROCESS *v11; // rdx
  unsigned __int64 v12; // rdi
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  _BYTE *v18; // r14
  unsigned __int64 v19; // rbx
  _QWORD *VirtualFaultPageInfo; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  __int64 i; // rcx
  __int16 v27; // ax
  __int64 v28; // rax
  _QWORD v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v31[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v31, 0, 0xB8uLL);
  v4 = 1;
  v5 = 0x200000LL;
  v6 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++v4;
    v6 = (__int64)(v6 << 25) >> 16;
    v5 <<= 9;
  }
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7;
  v30[0] = v7;
  if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v7 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, (volatile signed __int64 *)a2, *(_QWORD *)a1, v8, 0, v7) )
      {
        LODWORD(v31[0]) = 1;
        v10 = *(_QWORD *)a1 & -v5;
        WORD2(v31[0]) = 0;
        v31[2] = 0LL;
        LODWORD(v31[1]) = 20;
        v31[3] = 0LL;
        MiInsertTbFlushEntry((__int64)v31, v10, 1LL, v4);
        MiFlushTbList((__int64)v31, v11);
      }
    }
    v12 = v9;
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
    {
LABEL_35:
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v17 & 1) != 0 )
      {
        v18 = (_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v18 == 5 )
        {
          if ( (unsigned int)MiValidVirtualizationFault(a1, v18, a2) )
          {
            v19 = *(_QWORD *)a1;
            VirtualFaultPageInfo = (_QWORD *)MiGetVirtualFaultPageInfo((__int64)v18, *(_QWORD *)a1);
            if ( MiPteInShadowRange((unsigned __int64)v30)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v12 & 1) != 0
              && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v22 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v30 >> 3) & 0x1FF));
                v23 = v12 | 0x20;
                if ( (v22 & 0x20) == 0 )
                  v23 = v12;
                v12 = v23;
                if ( (v22 & 0x42) != 0 )
                  v12 = v23 | 0x42;
              }
            }
            v24 = (v12 >> 12) & 0xFFFFFFFFFLL;
            v25 = v19 >> 12;
            for ( i = 1LL; v4; --v4 )
            {
              v27 = v25;
              v25 >>= 9;
              v28 = i * (v27 & 0x1FF);
              i <<= 9;
              v24 += v28;
            }
            *VirtualFaultPageInfo ^= (v24 ^ *VirtualFaultPageInfo) & 0xFFFFFFFFFFFFFLL;
          }
        }
      }
      return 0LL;
    }
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        MiCheckSystemNxFault(a1, v9, 7u);
      goto LABEL_35;
    }
    if ( MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)a1) )
    {
      if ( MiPteInShadowRange((unsigned __int64)v30)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v13 )
        {
          v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)v30 >> 3) & 0x1FF));
          v15 = v9 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v9;
          v9 = v15;
          if ( (v14 & 0x42) != 0 )
            v9 = v15;
        }
      }
      if ( ((*(_QWORD *)(48 * (((unsigned __int64)v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v12 = v30[0] & 0x7FFFFFFFFFFFFFFFLL;
        v16 = v30[0] & 0x7FFFFFFFFFFFFFFFLL;
        v30[0] &= ~0x8000000000000000uLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        {
          v12 |= 0x20uLL;
          v16 = v12;
          v30[0] = v12;
        }
        MiWriteValidPteNewProtection(a2, v16);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(*(_QWORD *)a1, 1u, 0);
        goto LABEL_35;
      }
    }
  }
  return 3221225477LL;
}
