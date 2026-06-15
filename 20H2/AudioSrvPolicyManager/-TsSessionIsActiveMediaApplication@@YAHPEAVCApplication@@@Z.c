/*
 * XREFs of ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x1800290D8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001F228 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall TsSessionIsActiveMediaApplication(struct CApplication *a1)
{
  BOOL v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 **i; // rcx
  struct TSSession *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = v3;
  if ( !(unsigned int)TsSessionFromSessionId(*((_DWORD *)a1 + 53), 0, 0LL, &v6) )
  {
    for ( i = (__int64 **)*((_QWORD *)v6 + 13); i && i[2] != (__int64 *)a1; i = (__int64 **)*i )
      ;
    v2 = i != 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
