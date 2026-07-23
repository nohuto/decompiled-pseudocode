/*
 * XREFs of MiCheckKernelShadow @ 0x140226740
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x140226600 (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140226A60 (MiReadWriteAnyLevelShadowPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckKernelShadow(char a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r14
  ULONG_PTR v8; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v10; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  ULONG_PTR v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFFFFFLL;
  v7 = 0LL;
  while ( v4 <= v5 )
  {
    v8 = MiReadWriteAnyLevelShadowPte(v4, 0LL, 0LL, ZeroPte);
    v15 = v8;
    BugCheckParameter4 = v8;
    if ( (v8 & 1) == 0 )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3602uLL, v4, v8, v8);
      return v7 + a2;
    }
    v16 = MiVaToPfn(v7 + a2);
    v10 = BugCheckParameter4;
    if ( (unsigned int)MiPteInShadowRange(&v15) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (BugCheckParameter4 & 0x20) != 0 && (BugCheckParameter4 & 0x42) != 0 )
      {
        BugCheckParameter4 = v15;
      }
      else
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v10 = BugCheckParameter4 | 0x20;
          v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v15 >> 3) & 0x1FF));
          if ( (v13 & 0x20) == 0 )
            v10 = BugCheckParameter4;
          BugCheckParameter4 = v15;
          if ( (v13 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
        else
        {
          BugCheckParameter4 = v15;
          v10 = v15;
        }
      }
    }
    if ( v16 != ((v10 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3603uLL, v4, BugCheckParameter4, BugCheckParameter4);
      return v7 + a2;
    }
    v4 += 8LL;
    v7 += 4096LL;
  }
  return v6;
}
