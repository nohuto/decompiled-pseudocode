/*
 * XREFs of _EtwEventWriteStartScenario@20 @ 0x4B380B90
 * Callers:
 *     <none>
 * Callees:
 *     _EtwEventActivityIdControl@8 @ 0x4B2DC160 (_EtwEventActivityIdControl@8.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwEventEnabled@12 @ 0x4B2E6910 (_EtwEventEnabled@12.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpGetKmRegHandle@12 @ 0x4B38077C (_EtwpGetKmRegHandle@12.c)
 */

int __stdcall EtwEventWriteStartScenario(int a1, __int16 a2, int a3, int a4, int a5)
{
  int KmRegHandle; // esi
  _GUID *p_ActivityId; // esi
  int v9; // [esp+14h] [ebp-3Ch] BYREF
  _QWORD v10[6]; // [esp+18h] [ebp-38h] BYREF

  v9 = 0;
  if ( !a3 )
    return 87;
  if ( !EtwEventEnabled(a1, a2, a3) )
    return 6;
  memset(v10, 0, sizeof(v10));
  KmRegHandle = EtwpGetKmRegHandle(v10, a1, a2);
  if ( !KmRegHandle )
  {
    v10[1] = *(_QWORD *)a3;
    v10[2] = *(_QWORD *)(a3 + 8);
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    LODWORD(v10[3]) = p_ActivityId->Data1;
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    HIDWORD(v10[3]) = p_ActivityId->Data1;
    v10[4] = *(_QWORD *)&p_ActivityId->Data2;
    if ( LODWORD(v10[3])
      || __PAIR32__(WORD2(v10[3]), 0) != HIWORD(v10[3])
      || __PAIR16__(v10[4], 0) != BYTE1(v10[4])
      || WORD1(v10[4])
      || __PAIR32__(__PAIR16__(BYTE6(v10[4]), 0), 0) != __PAIR32__(HIBYTE(v10[4]), WORD2(v10[4]))
      || (KmRegHandle = EtwEventActivityIdControl(3, (int)&v10[3])) == 0
      && (KmRegHandle = EtwEventActivityIdControl(2, (int)&v10[3])) == 0 )
    {
      LODWORD(v10[5]) = 10;
      KmRegHandle = EtwEventWrite(a1, a2, (int *)a3, a4, a5);
      ZwTraceControl(13, (int)v10, 48, 0, 0, (int)&v9);
    }
  }
  return KmRegHandle;
}
