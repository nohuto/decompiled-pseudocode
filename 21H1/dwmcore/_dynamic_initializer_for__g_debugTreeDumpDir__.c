/*
 * XREFs of _dynamic_initializer_for__g_debugTreeDumpDir__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180090978 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

int dynamic_initializer_for__g_debugTreeDumpDir__()
{
  std::wstring::wstring(&g_debugTreeDumpDir, L"C:\\temp\\");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_debugTreeDumpDir__);
}
