/*
 * XREFs of sub_180012258 @ 0x180012258
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_18001BD14 @ 0x18001BD14 (sub_18001BD14.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180012258(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 96LL))(a1, &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v9;
    if ( !v9 )
    {
      v4 = 0;
      goto LABEL_10;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 72LL))(v9, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_9;
    }
    v5 = 26;
  }
  else
  {
    v5 = 24;
  }
  sub_180003268(retaddr, v5, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\FindAllOperation.h", v3);
LABEL_9:
  v6 = v9;
LABEL_10:
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
