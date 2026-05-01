/*
 * XREFs of ??1?$optional@UExeData@@@std@@QEAA@XZ @ 0x1804387A8
 * Callers:
 *     _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$2 @ 0x18043A7F9 (_Win32AppStateManager--UpdateAppViewWorker_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::optional<ExeData>::~optional<ExeData>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 72) )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 40));
    return std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
  }
  return result;
}
