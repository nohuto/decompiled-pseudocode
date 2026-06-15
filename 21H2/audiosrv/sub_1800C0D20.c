/*
 * XREFs of sub_1800C0D20 @ 0x1800C0D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C0D20(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx

  v4 = a1;
  if ( a3 )
  {
    v5 = *a2;
    if ( !*a2 )
      v5 = a2[1] - 0x46000000000000C0LL;
    if ( !v5 )
      goto LABEL_8;
    v6 = *a2 - 0x4D21C709A09513EDLL;
    if ( *a2 == 0x4D21C709A09513EDLL )
      v6 = a2[1] - 0x47397FC4345F7BBDLL;
    if ( v6 )
    {
      v7 = -2147467262;
      v4 = 0LL;
    }
    else
    {
LABEL_8:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v7 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v7 < 0 )
    sub_18005E8F8((__int64)"CVolumeHardware::QueryInterface", 1123, v7);
  return (unsigned int)v7;
}
