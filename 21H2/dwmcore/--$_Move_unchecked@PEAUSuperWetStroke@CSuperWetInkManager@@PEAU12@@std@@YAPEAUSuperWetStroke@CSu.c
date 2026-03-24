/*
 * XREFs of ??$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@00@Z @ 0x180194C68
 * Callers:
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x18019646C (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Move_unchecked<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    do
    {
      *(_QWORD *)a3 = *(v5 - 1);
      v6 = *v5;
      *v5 = 0LL;
      v7 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v6;
      if ( v7 )
      {
        v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 1);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v5 + 3);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(v5 + 5);
      *(_QWORD *)(a3 + 64) = v5[7];
      v9 = *((_BYTE *)v5 + 64);
      v5 += 10;
      *(_BYTE *)(a3 + 72) = v9;
      a3 += 80LL;
    }
    while ( v5 - 1 != a2 );
  }
  return a3;
}
