/*
 * XREFs of sub_180031760 @ 0x180031760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031EC0 @ 0x180031EC0 (sub_180031EC0.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031760(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  char v8; // si
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = a1;
  v9 = 0LL;
  if ( !*(_BYTE *)(a1 + 109) )
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
LABEL_3:
    *a3 = 0LL;
    v6 = v9;
    goto LABEL_4;
  }
  v8 = 0;
  v5 = 0;
  while ( !v8 )
  {
    if ( !v4 || !*(_DWORD *)(v4 + 104) )
    {
      v5 = -2147483637;
      break;
    }
    v5 = sub_180032108(v4);
    if ( v5 < 0 )
      break;
    v8 = 0;
    v5 = sub_180031EC0(*(_QWORD *)(v4 + 80), v10, &v9);
    if ( v5 < 0 )
    {
      if ( v5 == -2147483637 )
        v5 = 0;
    }
    else
    {
      v8 = 1;
    }
    if ( v5 < 0 )
      goto LABEL_3;
    v4 = *(_QWORD *)(v4 + 88);
  }
  if ( v5 < 0 )
    goto LABEL_3;
  *a3 = v9;
  v6 = 0LL;
  v9 = 0LL;
LABEL_4:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}
