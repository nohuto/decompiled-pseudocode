/*
 * XREFs of sub_180011A50 @ 0x180011A50
 * Callers:
 *     sub_180009FE4 @ 0x180009FE4 (sub_180009FE4.c)
 *     sub_18000DB04 @ 0x18000DB04 (sub_18000DB04.c)
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_18000F6E4 @ 0x18000F6E4 (sub_18000F6E4.c)
 *     sub_18000F7B4 @ 0x18000F7B4 (sub_18000F7B4.c)
 *     sub_18000F894 @ 0x18000F894 (sub_18000F894.c)
 *     sub_1800125A0 @ 0x1800125A0 (sub_1800125A0.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800149E4 @ 0x1800149E4 (sub_1800149E4.c)
 *     sub_1800156F4 @ 0x1800156F4 (sub_1800156F4.c)
 *     sub_1800157C4 @ 0x1800157C4 (sub_1800157C4.c)
 *     sub_1800158A4 @ 0x1800158A4 (sub_1800158A4.c)
 *     sub_18001ACD0 @ 0x18001ACD0 (sub_18001ACD0.c)
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 *     sub_18001E62C @ 0x18001E62C (sub_18001E62C.c)
 *     sub_18001ED44 @ 0x18001ED44 (sub_18001ED44.c)
 *     sub_18001EE90 @ 0x18001EE90 (sub_18001EE90.c)
 *     sub_18002005C @ 0x18002005C (sub_18002005C.c)
 *     sub_1800241C8 @ 0x1800241C8 (sub_1800241C8.c)
 *     sub_180024564 @ 0x180024564 (sub_180024564.c)
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_18002CE7C @ 0x18002CE7C (sub_18002CE7C.c)
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 *     sub_18002E6C8 @ 0x18002E6C8 (sub_18002E6C8.c)
 *     sub_18002FBB8 @ 0x18002FBB8 (sub_18002FBB8.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_1800319F8 @ 0x1800319F8 (sub_1800319F8.c)
 *     sub_180031FC0 @ 0x180031FC0 (sub_180031FC0.c)
 *     sub_180032388 @ 0x180032388 (sub_180032388.c)
 *     sub_180032BB8 @ 0x180032BB8 (sub_180032BB8.c)
 *     sub_180032C88 @ 0x180032C88 (sub_180032C88.c)
 *     sub_180032D68 @ 0x180032D68 (sub_180032D68.c)
 *     sub_180034F94 @ 0x180034F94 (sub_180034F94.c)
 *     sub_18003648C @ 0x18003648C (sub_18003648C.c)
 *     sub_180036DB0 @ 0x180036DB0 (sub_180036DB0.c)
 *     sub_18003BCD8 @ 0x18003BCD8 (sub_18003BCD8.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003E47C @ 0x18003E47C (sub_18003E47C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180011A50(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = a1 + 3;
  *a1 = &off_180048698;
  a1[3] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, void *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &unk_180051250,
      v1);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  return a1;
}
