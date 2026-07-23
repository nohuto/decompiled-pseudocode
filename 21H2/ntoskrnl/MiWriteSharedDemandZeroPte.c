/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x14055BD78
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v9; // rdi
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax

  v5 = *(_QWORD *)(a3 + 24);
  if ( v5 )
  {
    ++*(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 24) = v5 + 1;
    ++*a5;
    goto LABEL_13;
  }
  v9 = MiSwizzleInvalidPte((*(_QWORD *)(a3 + 16) >> 54) & 0x3E0LL);
  v10 = 0;
  if ( MiPteInShadowRange(a3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
LABEL_7:
        if ( (v9 & 1) != 0 )
          v9 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_7;
    }
  }
  *(_QWORD *)a3 = v9;
  if ( v10 )
    MiWritePteShadow(a3, v9);
  v11 = *(_QWORD *)(a3 + 16) & 0xF800000000000001uLL;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_QWORD *)(a3 + 16) = v11 | 1;
  v12 = *(unsigned __int16 *)(a1 + 1838);
  ++a5[1];
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_140C4E688 + 8 * v12) + 7624LL), 1uLL);
LABEL_13:
  v13 = MiSwizzleInvalidPte((a3 << 16) | 0x400) | 8;
  v14 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_20;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v14 = 1;
    if ( HIBYTE(word_140C4E048) )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_20;
  }
  if ( (v13 & 1) != 0 )
    v13 |= 0x8000000000000000uLL;
LABEL_20:
  *a4 = v13;
  if ( v14 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v13);
  return (char)CurrentThread;
}
