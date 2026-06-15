/*
 * XREFs of sub_180115240 @ 0x180115240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1801157F4 @ 0x1801157F4 (sub_1801157F4.c)
 */

BOOL sub_180115240()
{
  HANDLE v0; // rbx
  char *v1; // rcx
  int v2; // ebx
  DWORD CurrentProcessId; // eax
  DWORD ThreadId; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+34h] [rbp-5h] BYREF
  char v7[32]; // [rsp+40h] [rbp+7h] BYREF
  DWORD *p_ThreadId; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v0 = 0LL;
  qword_18019FAA0 = CreateEventW(0LL, 1, 0, 0LL);
  if ( qword_18019FAA0 )
    v0 = CreateThread(0LL, 0LL, sub_180115400, 0LL, 0, &ThreadId);
  sub_1801157F4();
  if ( WaitHandle )
    UnregisterWaitEx(WaitHandle, 0LL);
  if ( qword_18019E648 )
    CloseHandle(qword_18019E648);
  v1 = (char *)qword_18019FAA0;
  if ( qword_18019FAA0 )
  {
    SetEvent(qword_18019FAA0);
    v1 = (char *)qword_18019FAA0;
  }
  if ( v0 )
  {
    WaitForSingleObject(v0, 0xFFFFFFFF);
    if ( v0 != (HANDLE)-1LL )
      CloseHandle(v0);
    v1 = (char *)qword_18019FAA0;
  }
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v1);
    qword_18019FAA0 = 0LL;
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v2 = dword_18019FAA8;
    CurrentProcessId = GetCurrentProcessId();
    v13 = 0;
    v10 = 0;
    ThreadId = CurrentProcessId;
    v6 = v2;
    v11 = &v6;
    v12 = 4;
    p_ThreadId = &ThreadId;
    v9 = 4;
    sub_1800521E8((__int64)&dword_18019C4B8, byte_180169B25, 0LL, 0LL, 4, (__int64)v7);
  }
  return sub_180061D94(1, dword_18019FAA8, 0);
}
