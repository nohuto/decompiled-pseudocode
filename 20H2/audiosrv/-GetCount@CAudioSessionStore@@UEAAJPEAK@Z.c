/*
 * XREFs of ?GetCount@CAudioSessionStore@@UEAAJPEAK@Z @ 0x1800D6E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::GetCount(CAudioSessionStore *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edx
  bool v8; // zf
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v6 = *((_QWORD *)this + 5);
    v7 = 0;
    while ( v6 )
    {
      v8 = *(_WORD *)(v6 + 24) == 0;
      v9 = v7 + 1;
      v6 = *(_QWORD *)(v6 + 48);
      if ( v8 )
        v9 = v7;
      v7 = v9;
    }
    *a2 = v7;
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
