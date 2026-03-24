/*
 * XREFs of ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1C00D6190
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0173D40 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0173E88 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0174054 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0004404 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

struct _OPM_HANDLE_MAPPING *__fastcall ADAPTER_DISPLAY::FindOpmAdapterMapping(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _OPM_HANDLE_MAPPING *result; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 6494LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((struct _KTHREAD **)this + 43) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 6495LL;
    WdLogEvent5_WdAssertion(v7);
  }
  for ( result = (struct _OPM_HANDLE_MAPPING *)*((_QWORD *)this + 38);
        result != (ADAPTER_DISPLAY *)((char *)this + 304);
        result = *(struct _OPM_HANDLE_MAPPING **)result )
  {
    if ( *((_QWORD *)result + 3) == a2 )
      return result;
  }
  return 0LL;
}
