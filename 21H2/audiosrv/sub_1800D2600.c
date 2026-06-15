/*
 * XREFs of sub_1800D2600 @ 0x1800D2600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4B04 @ 0x1800B4B04 (sub_1800B4B04.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 */

__int64 __fastcall sub_1800D2600(__int64 a1)
{
  DWORD v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  DWORD v6; // edi
  __int64 v7; // rcx
  DWORD v8; // eax
  __int64 v9; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 312), 0x3E8u, 0);
  if ( v2 == 258 )
  {
    sub_18004BD84((int)retaddr, 1360, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147467259);
  }
  else
  {
    if ( v2 )
    {
      sub_1800B4B04((int)retaddr, 2569);
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 160LL))(a1 - 8);
    if ( !*(_QWORD *)(a1 + 64) )
      return 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1);
    v4 = v3;
    if ( v3 < 0 )
    {
      sub_18004BD84((int)retaddr, 1372, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v3);
      return v4;
    }
    v6 = 1;
    v7 = *(_QWORD *)(a1 + 72);
    Handles[0] = *(HANDLE *)(a1 + 304);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) )
    {
      Handles[1] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 176LL))(*(_QWORD *)(a1 + 72));
      v6 = 2;
    }
    v8 = WaitForMultipleObjects(v6, Handles, 0, 0x3E8u);
    if ( v8 != -1 && v8 != 258 )
      return 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(*(_QWORD *)(a1 + 72));
    sub_1800BC6FC(
      (int)retaddr,
      1391,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      -2147467259,
      "Application Id: %ws",
      v9);
  }
  return 2147500037LL;
}
