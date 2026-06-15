/*
 * XREFs of sub_18000BA80 @ 0x18000BA80
 * Callers:
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 * Callees:
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000C694 @ 0x18000C694 (sub_18000C694.c)
 *     sub_18000F01C @ 0x18000F01C (sub_18000F01C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000BA80(__int64 a1, const wchar_t *a2, __int64 a3, int a4)
{
  int v5; // esi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  SIZE_T v12; // r15
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  void *v15; // rbx
  __int64 (__fastcall ***v16)(); // rdx
  HANDLE v17; // rax
  _DWORD *v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h]
  __int128 v20; // [rsp+30h] [rbp-39h]
  __int64 (__fastcall **v21)(); // [rsp+40h] [rbp-29h] BYREF
  __int128 v22; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v23)(); // [rsp+78h] [rbp+Fh]

  v19 = a3;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v8 = *(_QWORD *)(a1 + 120);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  if ( !v8 )
    return 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x19u, &MessageGuid, a2);
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = 2 * v10 + 2;
  v12 = 2 * v10 + 74;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 0, v12);
  v18 = v14;
  v15 = v14;
  if ( v14 )
  {
    *v14 = v12;
    v18[1] = 512;
    v18[6] = v11;
    *((_BYTE *)v18 + 60) = 1;
    v18[14] = a4;
    sub_18000F01C(v18 + 18, v11, a2);
    *((_QWORD *)&v20 + 1) = &v18;
    *(_QWORD *)&v20 = a1;
    v21 = off_18003EBE0;
    v23 = &v21;
    v22 = v20;
    v5 = sub_18000C694(a1, v19, &v21);
    if ( v23 )
    {
      v16 = &v21;
      LOBYTE(v16) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v16);
    }
    v15 = v18;
  }
  v17 = GetProcessHeap();
  HeapFree(v17, 0, v15);
  v18 = 0LL;
  if ( v5 < 0 )
    sub_180005724("CDuckingManager::NotifyFilteredClientsAutoDuck", 697, v5);
  return (unsigned int)v5;
}
