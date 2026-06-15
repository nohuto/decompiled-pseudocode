/*
 * XREFs of sub_180027C70 @ 0x180027C70
 * Callers:
 *     sub_180074A10 @ 0x180074A10 (sub_180074A10.c)
 *     sub_180074A20 @ 0x180074A20 (sub_180074A20.c)
 *     sub_180074A30 @ 0x180074A30 (sub_180074A30.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027C70(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // r10

  v3 = 0;
  *a3 = 0LL;
  v5 = *a2;
  if ( !__PAIR64__(a2[1], v5) && a2[2] == 192 && a2[3] == 1174405120
    || v5 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    goto LABEL_8;
  }
  if ( (unsigned int)sub_180027D40(a2, &unk_18015B850) )
    goto LABEL_6;
  if ( (unsigned int)sub_180027D40(v6, &xmmword_18015B860) )
  {
    *v7 = v10;
    v13 = 0;
    goto LABEL_15;
  }
  if ( !(unsigned int)sub_180027D40(v9, &unk_18015B870) )
  {
    if ( (unsigned int)sub_180027D40(v11, &unk_18015B850) )
    {
      *v7 = v14 + 8;
      v13 = 0;
    }
    else
    {
      v13 = -2147467262;
    }
LABEL_15:
    v3 = v13;
    if ( v13 < 0 )
      return v3;
    goto LABEL_7;
  }
LABEL_6:
  *v7 = v8;
LABEL_7:
  a1 = *v7;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
