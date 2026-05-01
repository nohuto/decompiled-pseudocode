/*
 * XREFs of sub_180031430 @ 0x180031430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031430(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( a3 >= 0 )
    v3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && v3 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 24) == *(_DWORD *)(v5 + 144) )
      return 0;
    v10[0] = 0LL;
    v6 = sub_18002A4F4(v5, (__int64)v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 56LL))(v10[0], *(unsigned int *)(a1 + 24));
      v3 = v6;
      if ( v6 >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = *(_DWORD *)(a1 + 24);
        v8 = v10[0];
        if ( v10[0] )
        {
          v10[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        return 0;
      }
    }
    sub_180003268(retaddr, 1382, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
    v7 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v3;
}
