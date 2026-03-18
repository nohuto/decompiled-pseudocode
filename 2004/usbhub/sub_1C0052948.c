/*
 * XREFs of sub_1C0052948 @ 0x1C0052948
 * Callers:
 *     sub_1C0052F2C @ 0x1C0052F2C (sub_1C0052F2C.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00526A8 @ 0x1C00526A8 (sub_1C00526A8.c)
 *     sub_1C00528A8 @ 0x1C00528A8 (sub_1C00528A8.c)
 *     sub_1C0052B34 @ 0x1C0052B34 (sub_1C0052B34.c)
 *     sub_1C0052D94 @ 0x1C0052D94 (sub_1C0052D94.c)
 *     sub_1C0052ED0 @ 0x1C0052ED0 (sub_1C0052ED0.c)
 */

char __fastcall sub_1C0052948(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  char v6; // dl
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v6 = 1;
  if ( *a2 < 3u )
  {
    sub_1C000FD80(a1, 256, 1447183409, *a2, 0LL);
    return 0;
  }
  switch ( a2[2] )
  {
    case 2u:
      v6 = sub_1C0052ED0(a1, a2);
      if ( !v6 )
        return 0;
      v15 = *(_QWORD **)(a3 + 24);
      if ( !*v15 )
      {
        *v15 = a2;
        return v6;
      }
      v9 = 1447183410;
      goto LABEL_35;
    case 3u:
      v6 = sub_1C0052D94(a1, a2);
      if ( !v6 )
        return 0;
      v14 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v14 + 8) )
      {
        v9 = 1447183411;
        goto LABEL_35;
      }
      *(_QWORD *)(v14 + 8) = a2;
      break;
    case 4u:
      v6 = sub_1C00528A8(a1, a2);
      if ( !v6 )
        return 0;
      v13 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v13 + 16) )
      {
        v9 = 1447183412;
        goto LABEL_35;
      }
      *(_QWORD *)(v13 + 16) = a2;
      break;
    case 5u:
      v16 = 0LL;
      v6 = sub_1C0052B34(a1, a2, &v16);
      if ( !v6 )
        return 0;
      if ( v16 )
      {
        v10 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v10 + 24) )
        {
          sub_1C000FD80(a1, 256, 1447183414, 0LL, 0LL);
          v6 = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 24) = v16;
        }
      }
      v11 = *(_QWORD *)(a2 + 4) - 0x480D5E2FA6C10D69LL;
      if ( *(_QWORD *)(a2 + 4) == 0x480D5E2FA6C10D69LL )
        v11 = *(_QWORD *)(a2 + 12) + 0x4B2B05A93FADDC5BLL;
      if ( !v11 )
      {
        v12 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v12 + 32) )
        {
          v9 = 1447183415;
          goto LABEL_35;
        }
        *(_QWORD *)(v12 + 32) = a2;
      }
      break;
    case 0xDu:
      v6 = sub_1C00526A8(a1, a2);
      if ( !v6 )
        return 0;
      v8 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v8 + 40) )
      {
        v9 = 1447183416;
LABEL_35:
        sub_1C000FD80(a1, 256, v9, 0LL, 0LL);
        return 0;
      }
      *(_QWORD *)(v8 + 40) = a2;
      break;
  }
  return v6;
}
