/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x14055BB38
 * Callers:
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v9; // rdi
  int v10; // ebp
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r8

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
      if ( !HIBYTE(word_140C4E008) )
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
    MiWritePteShadow(a3, v9, v11);
  v12 = *(_QWORD *)(a3 + 16) & 0xF800000000000001uLL;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_QWORD *)(a3 + 16) = v12 | 1;
  v13 = *(unsigned __int16 *)(a1 + 1838);
  ++a5[1];
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_140C4E648 + 8 * v13) + 7624LL), 1uLL);
LABEL_13:
  v14 = MiSwizzleInvalidPte((a3 << 16) | 0x400) | 8;
  v15 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_20;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v15 = 1;
    if ( HIBYTE(word_140C4E008) )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_20;
  }
  if ( (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
LABEL_20:
  *a4 = v14;
  if ( v15 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v14, v17);
  return (char)CurrentThread;
}
