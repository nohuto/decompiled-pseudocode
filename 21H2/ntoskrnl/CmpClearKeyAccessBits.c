/*
 * XREFs of CmpClearKeyAccessBits @ 0x14060759C
 * Callers:
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpLogClearAccessBitsEvent @ 0x140607704 (CmpLogClearAccessBitsEvent.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v5; // rbp
  unsigned int v6; // ecx
  int v7; // r12d
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  int SubKeyByNumber; // ebx
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF
  int v16; // [rsp+7Ch] [rbp+24h]

  v14 = 0;
  v16 = 0;
  v15 = -1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  *PoolWithTag = v6;
  if ( v6 == -1 )
  {
    SubKeyByNumber = 0;
  }
  else
  {
    v7 = *(_DWORD *)(BugCheckParameter2 + 104);
    v8 = 0;
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             LODWORD(PoolWithTag[v5]),
             &v15);
      v10 = v9;
      if ( !v9 )
        break;
      if ( *(_BYTE *)(v9 + 12) )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, LODWORD(PoolWithTag[v5])) )
        {
          SubKeyByNumber = -1073741670;
          goto LABEL_14;
        }
        *(_BYTE *)(v10 + 12) = 0;
        ++v8;
      }
      v11 = HIDWORD(PoolWithTag[v5]);
      if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 20) || (_DWORD)v5 == 511 )
      {
        if ( !(_DWORD)v5 )
        {
          CmpLogClearAccessBitsEvent(a2, v8, (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 104) - v7) >> 3);
          SubKeyByNumber = 0;
LABEL_14:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
          goto LABEL_15;
        }
        v5 = (unsigned int)(v5 - 1);
      }
      else
      {
        SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, v10, v11, &v14);
        if ( SubKeyByNumber < 0 )
          goto LABEL_14;
        ++HIDWORD(PoolWithTag[v5]);
        v5 = (unsigned int)(v5 + 1);
        PoolWithTag[v5] = v14;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
    }
    SubKeyByNumber = -1073741670;
  }
LABEL_15:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SubKeyByNumber;
}
