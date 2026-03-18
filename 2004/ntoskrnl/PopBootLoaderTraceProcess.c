/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1407671AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1403A4FCC (BapdWriteEtwEvents.c)
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 *     BapdRecordFirmwareBootStats @ 0x140997F00 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  REGHANDLE v1; // rcx
  __int64 v2; // rax
  _DWORD *v3; // rax
  __int64 v4; // rdx

  v0 = qword_140C22E80;
  if ( qword_140C22E80 )
  {
    BapdRecordFirmwareBootStats();
    v1 = qword_140C02E50;
    qword_140C02E50 = 0LL;
    dword_140C02E30 = 0;
    EtwUnregister(v1);
    v2 = *(_QWORD *)(v0 + 216);
    if ( v2 )
    {
      v3 = *(_DWORD **)(v2 + 32);
      if ( *v3 == 1281517896 )
      {
        v4 = (unsigned int)v3[3];
        if ( (_DWORD)v4 )
          BapdWriteEtwEvents((unsigned __int64)v3 + (unsigned int)v3[2], v4);
      }
    }
  }
}
