/*
 * XREFs of sub_18010D840 @ 0x18010D840
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 */

__int64 __fastcall sub_18010D840(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v5 = *(_DWORD *)(a1 + 360);
  if ( a2 == v5 )
  {
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 368) )
      {
        v9 = 0;
        (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)qword_18019E618 + 48LL))(qword_18019E618, a2, &v9);
        if ( *(_DWORD *)(a1 + 364) != v9 )
        {
          *(_DWORD *)(a1 + 364) = v9;
          v6 = sub_18010E270(a1 - 8);
          if ( v6 < 0 )
            sub_18006D26C(
              (int)retaddr,
              603,
              (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
              v6);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
