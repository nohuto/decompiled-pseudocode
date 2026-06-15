/*
 * XREFs of sub_180035D60 @ 0x180035D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180035D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rsi
  const WCHAR *v6; // rsi
  const WCHAR *v7; // rax
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rsi
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v13 = a2;
  try
  {
    if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)a2 + 120LL))() )
      return 0LL;
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v15);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 232LL))(v15) )
    {
      sub_18000F708(&v15);
      return 0LL;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v14 = &v13;
    v4 = *(__int64 **)(a1 + 56);
    while ( v4 != *(__int64 **)(a1 + 64) )
    {
      v5 = *v4;
      if ( *(_DWORD *)(*v4 + 12) == 1 )
      {
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13) )
        {
          if ( *(_DWORD *)(*v4 + 8) )
          {
            v11 = *v4;
            if ( *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) )
              sub_1800EFD8C(&v14, v4);
          }
        }
        goto LABEL_26;
      }
      if ( *(_DWORD *)(*v4 + 12) == 2 )
      {
        if ( *(_DWORD *)(v5 + 16) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13)
          || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 112LL))(
                v13,
                *(unsigned int *)(*v4 + 8)) )
        {
          goto LABEL_26;
        }
LABEL_15:
        sub_1800EFD8C(&v14, v4++);
      }
      else
      {
        if ( *(_DWORD *)(*v4 + 12) == 3 )
        {
          if ( *(_DWORD *)(v5 + 16) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13) )
            goto LABEL_26;
          v10 = *v4;
          if ( *(_DWORD *)(v10 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) )
            goto LABEL_26;
          v9 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 112LL))(
                 v13,
                 *(unsigned int *)(*v4 + 8)) == 0;
        }
        else
        {
          if ( *(_DWORD *)(*v4 + 12) != 4 )
            goto LABEL_26;
          v6 = *(const WCHAR **)v5;
          v7 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 168LL))(v13);
          if ( CompareStringOrdinal(v6, -1, v7, -1, 1) != 2 )
            goto LABEL_26;
          v8 = *v4;
          v9 = *(_DWORD *)(v8 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13);
        }
        if ( v9 )
          goto LABEL_15;
LABEL_26:
        ++v4;
      }
    }
    if ( a1 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           retaddr,
                           614LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp");
  }
  return result;
}
