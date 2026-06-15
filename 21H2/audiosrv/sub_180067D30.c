/*
 * XREFs of sub_180067D30 @ 0x180067D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067DCC @ 0x180067DCC (sub_180067DCC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067D30(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = sub_180067DCC(&v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12[5] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v8)(v8, a3, a4);
    v9 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v8[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
      }
      else
      {
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
