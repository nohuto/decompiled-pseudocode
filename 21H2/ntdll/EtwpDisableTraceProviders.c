/*
 * XREFs of EtwpDisableTraceProviders @ 0x180044FF4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18004F8C0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpGetNextRegistration @ 0x18004563C (EtwpGetNextRegistration.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  __int64 v2; // rcx
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  _BYTE *v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  _QWORD v16[15]; // [rsp+20h] [rbp-88h] BYREF

  memset(v16, 0, sizeof(v16));
  LODWORD(v16[3]) = -1;
  LODWORD(v16[9]) = 0;
  LODWORD(v16[14]) = 0;
  v2 = 0LL;
  v16[0] = 0x7800000003LL;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v11 = result;
    if ( !result )
      return result;
    v3 = (_BYTE *)(result + 150);
    v4 = 0LL;
    v5 = (_BYTE *)(result + 150);
    while ( !*(v5 - 2) || *v5 != (_BYTE)a1 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 24;
      if ( (unsigned int)v4 >= 4 )
      {
        v6 = 0LL;
        goto LABEL_6;
      }
    }
    v6 = v11 + 8 * (v4 + 2 * (v4 + 8));
LABEL_6:
    if ( v6 )
    {
      v12 = 0;
      if ( *(_DWORD *)(v11 + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      {
        RtlAcquireSRWLockExclusive(v11 + 64, v8, v9, v10);
        v12 = 1;
        *(_DWORD *)(v11 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      }
      v13 = 0LL;
      do
      {
        if ( *(v3 - 2) && *v3 == (_BYTE)a1 )
        {
          v14 = v11 + 8 * (3 * v13 + 16);
          goto LABEL_18;
        }
        v13 = (unsigned int)(v13 + 1);
        v3 += 24;
      }
      while ( (unsigned int)v13 < 4 );
      v14 = 0LL;
LABEL_18:
      if ( v14 )
      {
        v15 = *(_OWORD *)(v11 + 32);
        LODWORD(v16[9]) = 0;
        *(_OWORD *)&v16[5] = v15;
        HIWORD(v16[9]) = a1 | 0x8000;
        EtwpUpdateEnableInfoAndCallback(v11, (__int64)v16, v9, v10);
      }
      if ( v12 )
      {
        *(_DWORD *)(v11 + 80) = 0;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 64));
      }
    }
    v2 = v11;
  }
}
