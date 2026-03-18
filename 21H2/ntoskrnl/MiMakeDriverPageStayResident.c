/*
 * XREFs of MiMakeDriverPageStayResident @ 0x140582214
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiRemoveSystemImagePage @ 0x140247A74 (MiRemoveSystemImagePage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 */

char __fastcall MiMakeDriverPageStayResident(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  signed __int32 *v6; // rcx
  char result; // al
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

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
      v14 = MI_READ_PTE_LOCK_FREE(v8);
      v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13, v9, v11, v12);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiRemoveSystemImagePage(a2, v8, v10);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
