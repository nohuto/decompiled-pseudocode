/*
 * XREFs of sub_18002B430 @ 0x18002B430
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     sub_1800053AC @ 0x1800053AC (sub_1800053AC.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18002B5E0 @ 0x18002B5E0 (sub_18002B5E0.c)
 *     sub_18002BDA0 @ 0x18002BDA0 (sub_18002BDA0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18002B430(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned __int16 *v11; // rcx
  unsigned __int16 i; // ax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  volatile signed __int32 *v17; // rdx
  volatile signed __int32 *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = (volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24);
  if ( (int)sub_18001B6A0(a2, &v18) < 0 )
  {
    v17 = v18 - 6;
    if ( _InterlockedExchangeAdd(v18 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17);
    v10 = 0;
  }
  else
  {
    v7 = v18;
    v8 = *((int *)v18 - 4);
    if ( ((1 - *((_DWORD *)v18 - 2)) | (*((_DWORD *)v18 - 3) - (int)v8)) < 0 )
    {
      sub_18001B550((__int64 *)&v18, v8);
      v7 = v18;
    }
    o__wcsupr_s(v7, (int)v8 + 1);
    if ( (int)v8 < 0 || (int)v8 > *((_DWORD *)v7 - 3) )
      sub_1800B8610(2147942487LL);
    *((_DWORD *)v7 - 4) = v8;
    v9 = v8;
    v10 = 0;
    *((_WORD *)v7 + v9) = 0;
    v11 = (unsigned __int16 *)v7;
    for ( i = *(_WORD *)v7; *v11; i = *v11 )
    {
      v10 = i + 33 * v10;
      ++v11;
    }
    sub_180006A30(v7 - 6);
  }
  if ( *((_DWORD *)a1 + 4) == 17 )
    v13 = v10 % 0x11;
  else
    v13 = v10 % *((_DWORD *)a1 + 4);
  v14 = *a1;
  if ( !*a1 )
    goto LABEL_19;
  v15 = *(_QWORD *)(v14 + 8LL * v13);
  if ( v15 )
  {
    do
    {
      if ( *(_DWORD *)(v15 + 96) == v10 && sub_1800053AC(v15, a2) )
      {
        *(_QWORD *)(v15 + 80) = *a3;
        return v15;
      }
      v15 = *(_QWORD *)(v15 + 88);
    }
    while ( v15 );
    v14 = *a1;
  }
  if ( !v14 )
  {
LABEL_19:
    LOBYTE(v6) = 1;
    if ( !(unsigned __int8)sub_18002BDA0(a1, *((unsigned int *)a1 + 4), v6) )
      sub_1800B8610(2147942414LL);
  }
  v15 = sub_18002B5E0(a1, a2, v13, v10);
  v18 = (volatile signed __int32 *)v15;
  *(_QWORD *)(v15 + 80) = *a3;
  return v15;
}
