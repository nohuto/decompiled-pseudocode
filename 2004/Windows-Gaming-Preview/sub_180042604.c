/*
 * XREFs of sub_180042604 @ 0x180042604
 * Callers:
 *     sub_18003FB20 @ 0x18003FB20 (sub_18003FB20.c)
 *     sub_18003FBD0 @ 0x18003FBD0 (sub_18003FBD0.c)
 *     sub_1800419F0 @ 0x1800419F0 (sub_1800419F0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042604(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  bool v7; // cf
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  int v11; // edx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-18h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int16 v15; // [rsp+80h] [rbp+30h] BYREF
  __int16 v16; // [rsp+88h] [rbp+38h] BYREF

  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)a2 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)a1 + 48LL))(a1, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v15 != 0;
    v8 = 0;
    while ( v7 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, int *))(*(_QWORD *)a1 + 64LL))(a1, v8, &v16, &v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        sub_180003268(
          retaddr,
          1541,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          v9);
        return v10;
      }
      switch ( v16 )
      {
        case 258:
          if ( v12 )
          {
            v11 = 1545;
LABEL_23:
            sub_180003268(
              retaddr,
              v11,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              -2147418113);
            return 2147549183LL;
          }
          *(_BYTE *)(a2 + 2) = v13 != 0;
          break;
        case 257:
          if ( v12 )
          {
            v11 = 1551;
            goto LABEL_23;
          }
          *(_BYTE *)a2 = v13 != 0;
          break;
        case 256:
          if ( v12 )
          {
            v11 = 1557;
            goto LABEL_23;
          }
          *(_BYTE *)(a2 + 1) = v13 != 0;
          break;
        case 259:
          if ( v12 )
          {
            v11 = 1563;
            goto LABEL_23;
          }
          *(_BYTE *)(a2 + 3) = v13 != 0;
          break;
        case 260:
          if ( v12 )
          {
            v11 = 1569;
            goto LABEL_23;
          }
          *(_BYTE *)(a2 + 4) = v13 != 0;
          break;
      }
      v7 = ++v8 < v15;
    }
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      1534,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v4);
    return v5;
  }
}
