/*
 * XREFs of sub_180038A00 @ 0x180038A00
 * Callers:
 *     sub_1800389B4 @ 0x1800389B4 (sub_1800389B4.c)
 * Callees:
 *     sub_180038AC8 @ 0x180038AC8 (sub_180038AC8.c)
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_180038A00()
{
  int v0; // eax
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h]

  EnterCriticalSection(&stru_18019F7F0);
  v7 = &stru_18019F7F0;
  v0 = dword_18019E4B8 + 1;
  dword_18019E4B8 = v0;
  if ( v0 == 1 )
  {
    v1 = (__int64 *)sub_180038AC8(&v6);
    v2 = 0LL;
    if ( &v5 != v1 )
    {
      v2 = *v1;
      *v1 = 0LL;
    }
    v5 = qword_18019F7E8;
    qword_18019F7E8 = v2;
    sub_180047278(&v5);
    sub_180047278(&v6);
    v3 = qword_18019F7E8;
    if ( qword_18019F7E8 )
    {
      if ( (int)sub_18005EF08((PVOID)qword_18019F7E8) < 0 )
      {
        sub_180047278(&qword_18019F7E8);
        dword_18019E4B8 = 0;
      }
      v3 = qword_18019F7E8;
    }
  }
  else
  {
    v3 = qword_18019F7E8;
    dword_18019E4B8 = qword_18019F7E8 != 0 ? v0 : 0;
  }
  LeaveCriticalSection(&stru_18019F7F0);
  return v3;
}
