/*
 * XREFs of sub_18004B850 @ 0x18004B850
 * Callers:
 *     sub_180074780 @ 0x180074780 (sub_180074780.c)
 *     sub_180074790 @ 0x180074790 (sub_180074790.c)
 *     sub_1800747A0 @ 0x1800747A0 (sub_1800747A0.c)
 *     sub_1800747B0 @ 0x1800747B0 (sub_1800747B0.c)
 * Callees:
 *     sub_18004B970 @ 0x18004B970 (sub_18004B970.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004B850(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx

  if ( (unsigned __int8)sub_18004B970(&unk_18015BAC0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    result = 0LL;
    *a3 = a1;
  }
  else if ( (unsigned __int8)sub_18004B970(&unk_18015C150) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1 + 8;
    return 0LL;
  }
  else if ( (unsigned __int8)sub_18004B970(&unk_18015E0A0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1 + 24;
    return 0LL;
  }
  else
  {
    v8 = a1 + 32;
    if ( a3 )
    {
      if ( *v6 || v6[1] != 0x46000000000000C0LL )
      {
        *v7 = 0LL;
        return 2147500034LL;
      }
      else
      {
        *v7 = v8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        return 0LL;
      }
    }
    else
    {
      return 2147500035LL;
    }
  }
  return result;
}
