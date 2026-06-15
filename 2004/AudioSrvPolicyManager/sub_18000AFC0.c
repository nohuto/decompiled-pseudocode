/*
 * XREFs of sub_18000AFC0 @ 0x18000AFC0
 * Callers:
 *     sub_180007130 @ 0x180007130 (sub_180007130.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000D198 @ 0x18000D198 (sub_18000D198.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000AFC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  _QWORD *v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( *(_DWORD *)(a1 + 488) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0xAu, &MessageGuid);
    }
    return 0LL;
  }
  try
  {
    if ( (*(unsigned int (**)(void))(*(_QWORD *)a2 + 40LL))() )
      return 0LL;
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10)
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10) )
    {
      if ( a4 == 1 )
      {
        v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
        v8 = sub_180009F20(0x10uLL);
        v8[1] = v10;
        *v8 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = v8;
      }
      else
      {
        if ( a4 )
          return 0LL;
        v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
        sub_18000D198(a1 + 64, &v10);
      }
      if ( v7 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           274LL,
                           "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp");
  }
  return result;
}
