/*
 * XREFs of EtwEventWriteStartScenario @ 0x180089E00
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18004F1F0 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180050D00 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180050D50 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x18005B6E0 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int KmRegHandle; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF

  v10 = 0;
  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v11, 0, sizeof(v11));
      KmRegHandle = EtwpGetKmRegHandle(a1, v11);
      if ( !KmRegHandle )
      {
        *(_OWORD *)((char *)v11 + 8) = *a2;
        *(_GUID *)((char *)&v11[1] + 8) = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)((char *)&v11[1] + 8))
          || HIDWORD(v11[1])
          || LOBYTE(v11[2])
          || __PAIR16__(BYTE1(v11[2]), 0) != BYTE2(v11[2])
          || *(_WORD *)((char *)&v11[2] + 3)
          || __PAIR16__(BYTE5(v11[2]), 0) != BYTE6(v11[2])
          || BYTE7(v11[2])
          || (KmRegHandle = EtwEventActivityIdControl(3, (_GUID *)((char *)&v11[1] + 8))) == 0
          && (KmRegHandle = EtwEventActivityIdControl(2, (_GUID *)((char *)&v11[1] + 8))) == 0 )
        {
          DWORD2(v11[2]) = 10;
          KmRegHandle = EtwEventWrite(a1, (int)a2, a3, a4);
          NtTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
        }
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 87;
  }
  return KmRegHandle;
}
