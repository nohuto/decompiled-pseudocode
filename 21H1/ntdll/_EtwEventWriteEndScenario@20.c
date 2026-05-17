/*
 * XREFs of _EtwEventWriteEndScenario@20 @ 0x4B380AB0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwEventEnabled@12 @ 0x4B2E6910 (_EtwEventEnabled@12.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpGetKmRegHandle@12 @ 0x4B38077C (_EtwpGetKmRegHandle@12.c)
 */

NTSTATUS __stdcall EtwEventWriteEndScenario(int a1, __int16 a2, int a3, int a4, int a5)
{
  NTSTATUS result; // eax
  int v6; // ecx
  _GUID *p_ActivityId; // esi
  int v9; // [esp+10h] [ebp-40h] BYREF
  int v10; // [esp+14h] [ebp-3Ch]
  _QWORD v11[6]; // [esp+18h] [ebp-38h] BYREF

  v9 = 0;
  v10 = a5;
  if ( !a3 )
    return 87;
  if ( !EtwEventEnabled(a1, a2, a3) )
    return 6;
  memset(v11, 0, sizeof(v11));
  result = EtwpGetKmRegHandle(v11, a1, a2);
  if ( !result )
  {
    v11[1] = *(_QWORD *)a3;
    v11[2] = *(_QWORD *)(a3 + 8);
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    LODWORD(v11[3]) = p_ActivityId->Data1;
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    HIDWORD(v11[3]) = p_ActivityId->Data1;
    v11[4] = *(_QWORD *)&p_ActivityId->Data2;
    LODWORD(v11[5]) = 11;
    ZwTraceControl(13, v6, 48, 0, 0, (int)&v9);
    return EtwEventWrite(a1, a2, (int *)a3, a4, v10);
  }
  return result;
}
