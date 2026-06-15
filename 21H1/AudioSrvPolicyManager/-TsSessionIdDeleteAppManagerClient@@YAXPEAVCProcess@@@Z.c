/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002EBE8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800241A8 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180029320 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18002B4B0 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18002E084 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x180030D78 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdDeleteAppManagerClient(DWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct CProcess *v3; // rdx
  struct TSSession *v4; // rbx
  __int64 v5; // rcx
  struct TSSession *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h]

  v6 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = v2;
  if ( !(unsigned int)TsSessionFromSessionId(a1[49], 0, &v7, &v6) )
  {
    v3 = (struct CProcess *)a1;
    v4 = v6;
    if ( (int)TsSessionDeleteAppManagerClient(v6, v3) >= 0
      && *((_DWORD *)v4 + 12)
      && *((_DWORD *)v4 + 1) == 0xFFFF
      && !*((_DWORD *)v4 + 8)
      && !*((_QWORD *)v4 + 9) )
    {
      EnterCriticalSection(&stru_180056188);
      TList<TSSession>::RemoveAt(v5, v7);
      TSSession::~TSSession(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x160);
      LeaveCriticalSection(&stru_180056188);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
