/*
 * XREFs of _Init_thread_header @ 0x18006A438
 * Callers:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18011CA64 @ 0x18011CA64 (sub_18011CA64.c)
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 * Callees:
 *     _Init_thread_wait @ 0x18006A500 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&stru_18019E198);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 4LL) = dword_18019D1F0;
LABEL_7:
  LeaveCriticalSection(&stru_18019E198);
}
