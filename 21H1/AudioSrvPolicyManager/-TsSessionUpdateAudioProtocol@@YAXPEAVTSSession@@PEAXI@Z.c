/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18002E2C8
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002ECD4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18002EEAC (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800300F0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18002B4B0 (--1TSSession@@QEAA@XZ.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x180030D78 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *this, void *a2, int a3)
{
  int v3; // edi
  _QWORD *v7; // r14
  unsigned int *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD v11[8]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  if ( a3 != 0xFFFF && a3 )
    v3 = ++dword_180056248;
  if ( *((_DWORD *)this + 1) != a3 || *((_DWORD *)this + 2) != v3 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 1) = a3;
    *((_DWORD *)this + 2) = v3;
    while ( v7 )
    {
      v8 = (unsigned int *)v7[2];
      v7 = (_QWORD *)*v7;
      v11[0] = 32;
      v11[1] = 0x2000;
      v9 = *v8;
      v11[6] = a3;
      v11[7] = v3;
      GenerateMediaEvent(v11, v9);
    }
  }
  if ( *((_DWORD *)this + 12) && *((_DWORD *)this + 1) == 0xFFFF && !*((_DWORD *)this + 8) && !*((_QWORD *)this + 9) )
  {
    EnterCriticalSection(&stru_180056188);
    TList<TSSession>::RemoveAt(v10, a2);
    TSSession::~TSSession(this);
    operator delete(this, (const struct std::nothrow_t *)0x160);
    LeaveCriticalSection(&stru_180056188);
  }
}
