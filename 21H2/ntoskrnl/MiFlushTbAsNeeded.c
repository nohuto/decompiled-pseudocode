/*
 * XREFs of MiFlushTbAsNeeded @ 0x140336010
 * Callers:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiLinkPoolCommitChain @ 0x14030B540 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1402B03EC (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  __int64 Flink; // rdx
  int v9; // r12d
  int v10; // r15d
  unsigned __int64 v11; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v13; // rdi
  ULONG_PTR v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-108h] BYREF
  __int16 v20; // [rsp+34h] [rbp-104h]
  __int16 v21; // [rsp+36h] [rbp-102h]
  __int64 v22; // [rsp+38h] [rbp-100h]
  __int64 v23; // [rsp+40h] [rbp-F8h]
  __int64 v24; // [rsp+48h] [rbp-F0h]
  _BYTE v25[152]; // [rsp+50h] [rbp-E8h] BYREF

  v21 = 0;
  memset(v25, 0, sizeof(v25));
  v22 = 20LL;
  v19 = a3;
  v9 = 0;
  v20 = 0;
  v10 = 0;
  v23 = 0LL;
  v11 = 0LL;
  v24 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v18 = *(_QWORD *)(Flink + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          Flink = BugCheckParameter4 | 0x20;
          if ( (v18 & 0x20) == 0 )
            Flink = *(_QWORD *)BugCheckParameter2;
          BugCheckParameter4 = Flink;
          if ( (v18 & 0x42) != 0 )
            BugCheckParameter4 = Flink | 0x42;
        }
      }
      if ( (BugCheckParameter4 & 0xC01) == 0 && (BugCheckParameter4 & 0x3E0) == 0 )
        break;
      if ( !a4 )
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v11, BugCheckParameter4);
LABEL_13:
      ++v11;
      BugCheckParameter2 += 8LL;
      if ( v11 >= a2 )
        return MiFlushTbList(&v19);
    }
    if ( qword_140C4DF40 && (BugCheckParameter4 & 0x10) == 0 )
      BugCheckParameter4 &= ~qword_140C4DF40;
    v13 = ZeroPte;
    v14 = HIDWORD(BugCheckParameter4);
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2, Flink) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v13 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)BugCheckParameter2 = v13;
        MiWritePteShadow(BugCheckParameter2, v13, v15);
        goto LABEL_11;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v13 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)BugCheckParameter2 = v13;
LABEL_11:
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == v9 )
      {
        if ( v10 == 1 )
          MiInsertTbFlushEntry((__int64)&v19, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
      }
      else
      {
        if ( MiCompareTbFlushTimeStamp(v14, 0xFFFFFFFFLL, v15, v16) )
        {
          MiInsertTbFlushEntry((__int64)&v19, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
          v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        v9 = v14;
      }
    }
    else
    {
      v10 = 0;
      v9 = 0;
    }
    goto LABEL_13;
  }
  return MiFlushTbList(&v19);
}
