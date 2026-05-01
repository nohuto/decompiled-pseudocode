/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@std@@EEAAXXZ @ 0x1802E79B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@0AEAV?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@0@@Z @ 0x1802D7784 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@.c)
 */

void __fastcall std::_Ref_count_obj<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::_Destroy(
        __int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)a1[2];
  if ( v1 )
  {
    std::_Destroy_range<std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
      a1[2],
      a1[3]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[4] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFE0uLL));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
