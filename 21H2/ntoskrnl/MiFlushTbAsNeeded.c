/*
 * XREFs of MiFlushTbAsNeeded @ 0x140352EB0
 * Callers:
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x14022BAE0 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x140233738 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiCompareTbFlushTimeStamp @ 0x140238E78 (MiCompareTbFlushTimeStamp.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  int v6; // edi
  int v7; // r13d
  int v8; // r12d
  unsigned __int64 v9; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rbx
  int v13; // edx
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 *v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  __int64 v26; // rax
  bool v27; // zf
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v30; // [rsp+44h] [rbp-BCh]
  __int16 v31; // [rsp+46h] [rbp-BAh]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+58h] [rbp-A8h] BYREF

  v31 = 0;
  v6 = a4;
  v32 = 20LL;
  v29 = a3;
  v7 = 0;
  v30 = 0;
  v8 = 0;
  v33 = 0LL;
  v9 = 0LL;
  memset(Base, 0, 160);
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v23 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
          v24 = BugCheckParameter4 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = *(_QWORD *)BugCheckParameter2;
          BugCheckParameter4 = v24;
          if ( (v23 & 0x42) != 0 )
            BugCheckParameter4 = v24 | 0x42;
        }
      }
      if ( (BugCheckParameter4 & 0xC01) != 0 || (BugCheckParameter4 & 0x3E0) != 0 )
      {
        if ( !v6 )
          KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v9, BugCheckParameter4);
        goto LABEL_15;
      }
      if ( qword_140C50780 && (BugCheckParameter4 & 0x10) == 0 )
        BugCheckParameter4 &= ~qword_140C50780;
      v11 = ZeroPte;
      v12 = HIDWORD(BugCheckParameter4);
      if ( MiPteInShadowRange(BugCheckParameter2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
            v11 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)BugCheckParameter2 = v11;
          MiWritePteShadow(BugCheckParameter2, v11);
          goto LABEL_12;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v11 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)BugCheckParameter2 = v11;
LABEL_12:
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 == v7 )
        {
          if ( v8 )
          {
            v14 = 1LL;
            v15 = (__int64)(BugCheckParameter2 << 25) >> 16;
            if ( v29 != 1 && (v30 & 8) == 0 && v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
              LOBYTE(v30) = v30 | 8;
            if ( !HIDWORD(v32)
              || (v30 & 4) != 0
              || (v16 = &Base[HIDWORD(v32) - 1], v17 = *v16, (*v16 & 0xC00) != 0)
              || (v18 = *v16 & 0x3FF, (v17 & 0xFFFFFFFFFFFFF000uLL) + ((v18 + 1) << 12) != v15)
              || v18 + 1 < v18
              || v18 + 1 > 0x3FF )
            {
              if ( MiCanMergeTbFlushEntryBackwards((__int64)&v29, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0) )
              {
                v25 = &Base[HIDWORD(v32) - 1];
                v26 = *v25;
                ++v33;
                *v25 = (v26 - 4096) ^ ((unsigned __int16)(v26 - 4096) ^ (unsigned __int16)(v26 - 4096 + 1)) & 0x3FF;
              }
              else
              {
                if ( HIDWORD(v32) < (unsigned int)v32 )
                {
                  while ( 1 )
                  {
                    v19 = (unsigned __int64)(v14 - 1) > 0x3FF ? 1024LL : v14;
                    v20 = v15 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v19 - 1) & 0x3FF;
                    v14 -= v19;
                    v15 += v19 << 12;
                    Base[HIDWORD(v32)] = v20;
                    v33 += v19;
                    v21 = HIDWORD(v32) + 1;
                    HIDWORD(v32) = v21;
                    if ( v21 == (_DWORD)v32 && (v30 & 4) == 0 )
                    {
                      qsort(Base, v21, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                      MiCompressTbFlushList((__int64)&v29);
                      if ( HIDWORD(v32) == (_DWORD)v32 )
                        break;
                    }
                    if ( !v14 )
                      goto LABEL_14;
                  }
                  v27 = v14 == 0;
                  v6 = a4;
                  if ( !v27 )
                  {
                    v33 = HIDWORD(v32);
                    HIBYTE(v30) = 1;
                  }
                  goto LABEL_15;
                }
                HIBYTE(v30) = 1;
              }
            }
            else
            {
              ++v33;
              *v16 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v17 + 1)) & 0x3FF;
            }
          }
        }
        else
        {
          if ( MiCompareTbFlushTimeStamp(v12, v13) )
          {
            MiInsertTbFlushEntry((__int64)&v29, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
            v8 = 1;
          }
          else
          {
            v8 = 0;
          }
          v7 = v12;
        }
      }
      else
      {
        v8 = 0;
        v7 = 0;
      }
LABEL_14:
      v6 = a4;
LABEL_15:
      ++v9;
      BugCheckParameter2 += 8LL;
    }
    while ( v9 < a2 );
  }
  MiFlushTbList((__int64)&v29);
}
