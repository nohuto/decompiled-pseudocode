/*
 * XREFs of sub_18001C890 @ 0x18001C890
 * Callers:
 *     sub_18001B060 @ 0x18001B060 (sub_18001B060.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E1D8 @ 0x18001E1D8 (sub_18001E1D8.c)
 *     sub_18001ED44 @ 0x18001ED44 (sub_18001ED44.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001C890(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  int v7; // eax
  __int64 v8; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_10:
    sub_180003268(retaddr, 453, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
    return (unsigned int)v6;
  }
  v11 = 0LL;
  v7 = sub_18001ED44(a2, &v11);
  v8 = v11;
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( !v11 )
    {
      v6 = -2147024809;
      goto LABEL_9;
    }
    v6 = sub_18001E1D8(a1 + 104, v11, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_9:
  if ( v6 < 0 )
    goto LABEL_10;
  return (unsigned int)v6;
}
