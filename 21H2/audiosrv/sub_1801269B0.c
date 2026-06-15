/*
 * XREFs of sub_1801269B0 @ 0x1801269B0
 * Callers:
 *     sub_180126830 @ 0x180126830 (sub_180126830.c)
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_180126864 @ 0x180126864 (sub_180126864.c)
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_1801269B0()
{
  void *v0; // rbx
  __int64 v1; // rdx
  int v2; // eax
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  v4 = 0LL;
  EnterCriticalSection(&stru_18019F7F0);
  v2 = dword_18019E4B8;
  if ( dword_18019E4B8 && qword_18019F7E8 )
  {
    --dword_18019E4B8;
    if ( v2 == 1 )
    {
      sub_180126864((__int64 *)&v4, v1);
      sub_180047278(&qword_18019F7E8);
      v0 = v4;
    }
  }
  else
  {
    dword_18019E4B8 = 0;
    sub_180047278(&qword_18019F7E8);
  }
  LeaveCriticalSection(&stru_18019F7F0);
  if ( v0 )
    sub_180137110(v0);
  return sub_180047278((__int64 *)&v4);
}
