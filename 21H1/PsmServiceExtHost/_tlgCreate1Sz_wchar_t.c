/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x18002E750
 * Callers:
 *     CrmSrvRegister @ 0x180004E94 (CrmSrvRegister.c)
 *     CrmSrvActivityStart @ 0x18002EB68 (CrmSrvActivityStart.c)
 *     CrmLogSrvActivityStopStop @ 0x18002EE8C (CrmLogSrvActivityStopStop.c)
 *     CrmSrvActivityAllocate @ 0x18002F840 (CrmSrvActivityAllocate.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &unk_180095550;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
