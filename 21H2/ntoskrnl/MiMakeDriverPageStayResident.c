/*
 * XREFs of MiMakeDriverPageStayResident @ 0x14052E094
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiRemoveSystemImagePage @ 0x14023FB28 (MiRemoveSystemImagePage.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiMakeDriverPageStayResident(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  signed __int32 *v6; // rcx
  char result; // al
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v5 = (a3 - *(_QWORD *)(a1 + 48)) >> 12;
  v6 = *(signed __int32 **)(*(_QWORD *)(a1 + 272) + 8LL);
  result = v5;
  if ( !_bittest64((const signed __int64 *)v6, (unsigned int)v5) )
  {
    _bittestandset(v6, v5);
    result = MiGetWsleContents((__int64)v6, a3) & 0xF;
    if ( result != 9 )
    {
      v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = MI_READ_PTE_LOCK_FREE(v8);
      v9 = v15;
      if ( MiPteInShadowRange((unsigned __int64)&v15)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v15 >> 3) & 0x1FF)) & 0x20) != 0 )
          v9 |= 0x20uLL;
      }
      v13 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14, (__int64)Flink, v11, v12);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      MiRemoveSystemImagePage(a2, v8, v13);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
