/*
 * XREFs of sub_180143320 @ 0x180143320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801436B4 @ 0x1801436B4 (sub_1801436B4.c)
 */

__int64 __fastcall sub_180143320(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r10d
  int v7; // r8d
  int v8; // r11d
  __int64 v9; // rcx
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]
  char v13; // [rsp+78h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = 0LL;
  if ( !a2 )
    return 2147500035LL;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = 2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      LODWORD(v14) = 1;
    }
    else
    {
      if ( *a2 != 2 )
        return 2147943568LL;
      LODWORD(v14) = 2;
    }
  }
  if ( a3 )
  {
    v7 = a3 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 2147943568LL;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 44);
      HIDWORD(v14) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 44) = v5;
      result = sub_1801436B4(a1, a2);
      if ( (int)result < 0 )
        return result;
      HIDWORD(v14) = v8;
    }
  }
  else
  {
    HIDWORD(v14) = 0;
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = xmmword_180178F08;
  v11 = 3;
  v12 = v6;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int, char *))(*(_QWORD *)v9 + 24LL))(
             v9,
             &v10,
             24LL,
             &v14,
             8,
             &v13);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 40) = v5;
  return result;
}
