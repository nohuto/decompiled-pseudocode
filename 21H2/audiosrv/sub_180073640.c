/*
 * XREFs of sub_180073640 @ 0x180073640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_180133808 @ 0x180133808 (sub_180133808.c)
 *     sub_180136264 @ 0x180136264 (sub_180136264.c)
 */

void __fastcall sub_180073640(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v4 = 0LL;
    if ( (int)sub_1800CD4DC(a1 + 8, &v4) >= 0 )
    {
      if ( !v4 )
        return;
      if ( (unsigned int)dword_18019C4F0 > 5 )
        sub_180133808(v2, &unk_18016C6B0);
      *(_BYTE *)(*(_QWORD *)(v1 + 8) + 265LL) = 1;
      sub_180136264(*(_QWORD *)(v1 + 8));
    }
    v3 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
