/*
 * XREFs of _Init_thread_header @ 0x180124678
 * Callers:
 *     sub_1800424A0 @ 0x1800424A0 (sub_1800424A0.c)
 *     sub_180043910 @ 0x180043910 (sub_180043910.c)
 *     sub_1800496D0 @ 0x1800496D0 (sub_1800496D0.c)
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 *     sub_18005A984 @ 0x18005A984 (sub_18005A984.c)
 *     sub_18005AA38 @ 0x18005AA38 (sub_18005AA38.c)
 *     sub_18005AB60 @ 0x18005AB60 (sub_18005AB60.c)
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061C70 @ 0x180061C70 (sub_180061C70.c)
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 *     sub_180062078 @ 0x180062078 (sub_180062078.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_1800642AC @ 0x1800642AC (sub_1800642AC.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     sub_1800D492C @ 0x1800D492C (sub_1800D492C.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_18010F6E0 @ 0x18010F6E0 (sub_18010F6E0.c)
 *     sub_18011B2BC @ 0x18011B2BC (sub_18011B2BC.c)
 *     sub_18011B344 @ 0x18011B344 (sub_18011B344.c)
 *     sub_18011B3F0 @ 0x18011B3F0 (sub_18011B3F0.c)
 *     sub_18011B478 @ 0x18011B478 (sub_18011B478.c)
 *     sub_18011B4F0 @ 0x18011B4F0 (sub_18011B4F0.c)
 *     sub_180121CE0 @ 0x180121CE0 (sub_180121CE0.c)
 * Callees:
 *     _Init_thread_wait @ 0x180124730 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
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
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 44LL) = dword_180214F20;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
