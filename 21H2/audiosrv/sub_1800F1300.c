/*
 * XREFs of sub_1800F1300 @ 0x1800F1300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EFC8C @ 0x1800EFC8C (sub_1800EFC8C.c)
 */

__int64 __fastcall sub_1800F1300(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  const WCHAR *v6; // rdi
  const WCHAR *v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v14 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v4 = *(__int64 **)(a1 + 56);
  v13 = &v14;
  while ( v4 != *(__int64 **)(a1 + 64) )
  {
    v5 = *v4;
    switch ( *(_DWORD *)(*v4 + 12) )
    {
      case 1:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 176LL))(v14)
          && *(_DWORD *)(*v4 + 8) )
        {
          v11 = *v4;
          v9 = *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14);
LABEL_18:
          if ( !v9 )
            break;
LABEL_19:
          sub_1800EFC8C(&v13, v4);
        }
        break;
      case 2:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 176LL))(v14)
          && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 112LL))(
               v14,
               *(unsigned int *)(*v4 + 8)) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 176LL))(v14) )
        {
          v10 = *v4;
          if ( *(_DWORD *)(v10 + 8) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14) )
          {
            v9 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 112LL))(
                   v14,
                   *(unsigned int *)(*v4 + 8)) == 0;
            goto LABEL_18;
          }
        }
        break;
      case 4:
        v6 = *(const WCHAR **)v5;
        v7 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 168LL))(v14);
        if ( CompareStringOrdinal(v6, -1, v7, -1, 1) == 2 )
        {
          v8 = *v4;
          v9 = *(_DWORD *)(v8 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 176LL))(v14);
          goto LABEL_18;
        }
        break;
    }
    ++v4;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
