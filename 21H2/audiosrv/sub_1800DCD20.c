/*
 * XREFs of sub_1800DCD20 @ 0x1800DCD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DD840 @ 0x1800DD840 (sub_1800DD840.c)
 */

__int64 __fastcall sub_1800DCD20(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // r9d
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v5 = -2004287487;
    v6 = 2136;
    v7 = -2004287487;
LABEL_10:
    sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v7);
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v5 = -2004287487;
    v6 = 2137;
    v7 = -2004287487;
    goto LABEL_10;
  }
  v8 = sub_1800DD840(a1, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
    v5 = v10;
    if ( v10 < 0 )
    {
      v7 = v10;
      v6 = 2141;
      goto LABEL_10;
    }
    v5 = 0;
  }
  else
  {
    v5 = -2005139336;
    if ( v8 != -2005139336 )
    {
      sub_18004BD84((int)retaddr, 2138, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v8);
      v5 = v9;
    }
  }
LABEL_12:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
