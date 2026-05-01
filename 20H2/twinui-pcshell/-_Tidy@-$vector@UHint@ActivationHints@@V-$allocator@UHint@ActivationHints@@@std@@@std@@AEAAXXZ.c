/*
 * XREFs of ?_Tidy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXXZ @ 0x1803CA4B0
 * Callers:
 *     ??_GActivationHints@@UEAAPEAXI@Z @ 0x1803C9BE0 (--_GActivationHints@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803C9A40 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

void __fastcall std::vector<ActivationHints::Hint>::_Tidy(__int64 a1)
{
  ActivationHints::Hint *v1; // rbx
  ActivationHints::Hint *v3; // rbp
  ActivationHints::Hint *v4; // rdi

  v1 = *(ActivationHints::Hint **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(ActivationHints::Hint **)(a1 + 8);
    v4 = *(ActivationHints::Hint **)a1;
    if ( v1 != v3 )
    {
      do
      {
        ActivationHints::Hint::~Hint(v4);
        v4 = (ActivationHints::Hint *)((char *)v4 + 80);
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(80 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 80LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
