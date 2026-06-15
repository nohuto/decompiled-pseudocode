/*
 * XREFs of sub_1800CD7AC @ 0x1800CD7AC
 * Callers:
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 */

_QWORD *__fastcall sub_1800CD7AC(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v6; // rsi
  bool v8; // r14
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v6 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( (int)sub_1800CD4DC(v6, &v11) < 0 )
        goto LABEL_7;
      if ( v11 )
        break;
LABEL_9:
      v8 = 0;
LABEL_10:
      if ( !v8 && ++v6 != a3 )
        continue;
      goto LABEL_12;
    }
    v12 = 0LL;
    if ( (int)sub_1800CD548(&v11, &v12) >= 0 )
    {
      v8 = v12 == *a4;
      sub_1800461B8(&v12);
      sub_180071C14(&v11);
      goto LABEL_10;
    }
    sub_1800461B8(&v12);
LABEL_7:
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_9;
  }
LABEL_12:
  result = a1;
  *a1 = v6;
  return result;
}
