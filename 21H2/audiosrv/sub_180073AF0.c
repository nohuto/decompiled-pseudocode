/*
 * XREFs of sub_180073AF0 @ 0x180073AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_180133808 @ 0x180133808 (sub_180133808.c)
 *     sub_180136264 @ 0x180136264 (sub_180136264.c)
 */

__int64 __fastcall sub_180073AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v3 = a1 + 64;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v7 = 0LL;
    if ( (int)sub_1800CD4DC(a1 + 64, &v7) >= 0 )
    {
      if ( !v7 )
        return 0LL;
      if ( (unsigned int)dword_18019C4F0 > 5 )
        sub_180133808(v4, &unk_18016CC56);
      *(_BYTE *)(*(_QWORD *)(v3 + 8) + 264LL) = 1;
      sub_180136264(*(_QWORD *)(v3 + 8));
    }
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return 0LL;
}
