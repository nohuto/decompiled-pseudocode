/*
 * XREFs of ?clear@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAXXZ @ 0x18008C254
 * Callers:
 *     ??1?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18008BFF0 (--1-$unordered_set@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U-$hash@V-$b.c)
 *     ??1?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18008C170 (--1-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$basic.c)
 * Callees:
 *     <none>
 */

void __fastcall std::list<std::wstring>::clear(__int64 a1)
{
  void **v2; // rbx
  void **v3; // rsi

  v2 = **(void ****)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(void ***)a1 )
  {
    do
    {
      v3 = (void **)*v2;
      if ( (unsigned __int64)v2[5] >= 8 )
        operator delete(v2[2]);
      v2[5] = (void *)7;
      v2[4] = 0LL;
      *((_WORD *)v2 + 8) = 0;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *(void ***)a1 );
  }
}
