/*
 * XREFs of ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C001A64C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001A86C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreBatchTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct tagRECT v14; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-40h] BYREF

  result = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 >= 0x28 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *a2;
    *(struct tagRECT *)v15 = a2[1];
    *(_QWORD *)&v15[16] = *(_QWORD *)&a2[2].left;
    v5 = *(_QWORD *)a1;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    v7 = *(_DWORD *)(v6 + 176);
    v8 = *(_DWORD *)(v6 + 180);
    if ( v7 != v14.top )
    {
      *(_DWORD *)(v6 + 176) = v14.top;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)&v15[20];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
      v5 = *(_QWORD *)a1;
    }
    v9 = *(_QWORD *)(v5 + 976);
    v10 = *(_QWORD *)(v9 + 324);
    if ( v10 != *(_QWORD *)&v15[12] )
    {
      *(_DWORD *)(v9 + 324) = *(_DWORD *)&v15[12];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)&v15[16];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
    }
    ExtTextOutRect(a1, (struct tagRECT *)&v14.bottom);
    v11 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( *(_DWORD *)(v12 + 176) != v7 )
    {
      *(_DWORD *)(v12 + 176) = v7;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
      v11 = *(_QWORD *)a1;
    }
    v13 = *(_QWORD *)(v11 + 976);
    if ( v10 != *(_QWORD *)(v13 + 324) )
    {
      *(_DWORD *)(v13 + 324) = v10;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v10);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
    }
    return 1LL;
  }
  return result;
}
