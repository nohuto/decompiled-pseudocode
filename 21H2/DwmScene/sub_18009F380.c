/*
 * XREFs of sub_18009F380 @ 0x18009F380
 * Callers:
 *     sub_1800F46B8 @ 0x1800F46B8 (sub_1800F46B8.c)
 * Callees:
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007B234 @ 0x18007B234 (sub_18007B234.c)
 *     sub_1800A02C8 @ 0x1800A02C8 (sub_1800A02C8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18009F380(__int64 a1, __int64 *a2)
{
  unsigned int v4; // eax
  __int64 *v5; // r8
  unsigned int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rcx

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 )
  {
    v4 = sub_18007040C(*a2);
    v5 = *(__int64 **)(a1 + 112);
    v6 = v4;
    v7 = v5;
    v8 = (__int64 *)v5[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v4 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == v5 || v4 < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = *(__int64 **)(a1 + 112);
    if ( v7 == v5 || !v7[5] )
    {
      LOBYTE(v4) = sub_180067E20(a1, a2);
      v9 = *(_QWORD *)(a1 + 136);
      if ( v9 )
      {
        sub_1800A02C8(a1, v9, *a2);
        sub_180068014(a1, v6);
        LOBYTE(v4) = sub_180067F88(a1, 8);
        if ( (_BYTE)v4 || (v10 = sub_180067F50(a1), LOBYTE(v4) = sub_18007B234(v10, 1, 8), (_BYTE)v4) )
        {
          v11 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( v11 )
            LOBYTE(v4) = (**v11)(v11, 1LL);
        }
      }
    }
  }
  return v4;
}
