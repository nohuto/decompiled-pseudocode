/*
 * XREFs of sub_1C003E230 @ 0x1C003E230
 * Callers:
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 */

__int64 __fastcall sub_1C003E230(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        char *a6,
        char a7,
        char a8)
{
  int v12; // r10d
  __int64 v13; // rbx
  _DWORD *v14; // r14
  __int64 v15; // r15
  int v16; // r10d
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  char v19; // al
  __int64 v20; // rdx
  unsigned __int16 v21; // bp
  unsigned __int16 v22; // bp
  int v23; // r10d
  char *v24; // r9
  int v25; // r8d
  int v26; // r8d
  char v27; // al
  __int64 v29; // [rsp+20h] [rbp-48h]

  sub_1C000FD80(a1, 32, 1195659313, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x21u, (__int64)&unk_1C0062E18);
    v12 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    sub_1C000FD80(a1, v12, 1195659314, a2, 0LL);
    LODWORD(v13) = -1073741789;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(a4 + 1) != 6 )
  {
    sub_1C000FD80(a1, v12, 1195659315, a2, *(unsigned __int8 *)(a4 + 1));
LABEL_8:
    LODWORD(v13) = -1073741811;
    goto LABEL_59;
  }
  if ( *(char *)a4 >= 0 )
  {
    sub_1C000FD80(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_8;
  }
  v14 = sub_1C0011220(a2);
  v15 = sub_1C0015C80(a1, a2, a3, 0x48446E67u);
  sub_1C000FD80(a1, 32, 1919304753, 0LL, v15);
  if ( v15 && !a8 )
  {
    if ( a7 )
    {
      v17 = sub_1C000F050(a1);
      sub_1C00317D8(a1, (__int64)(v17 + 434));
    }
    v13 = (int)sub_1C00177A8(a1, a2, (_BYTE *)a4, (__int64)a6, a5);
    sub_1C0016670(a1, v15, a3, 0x48446E67u);
    if ( a7 )
    {
      v18 = sub_1C000F050(a1);
      sub_1C0031714(a1, (__int64)(v18 + 434), 11, -267583477, 0);
    }
    sub_1C000FD80(a1, 32, 1195659316, v13, 0LL);
    goto LABEL_59;
  }
  v19 = *(_BYTE *)(a4 + 3);
  if ( v19 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v20 = *((_QWORD *)v14 + 299);
      goto LABEL_21;
    }
    goto LABEL_56;
  }
  if ( v19 == 1 )
  {
    if ( *(_BYTE *)(a4 + 2) )
      goto LABEL_56;
    v22 = *a5;
    if ( *a5 > 0x12u )
      v22 = 18;
    sub_1C000FD80(a1, v16, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
    {
      sub_1C001D080(a6, (char *)v14 + 1400, v22);
      v24 = a6;
      v25 = 1195659317;
      v29 = v22;
LABEL_37:
      *a5 = v22;
      sub_1C000FD80(a1, 32, v25, (__int64)v24, v29);
      LODWORD(v13) = 0;
      goto LABEL_57;
    }
    v26 = 1195659318;
    goto LABEL_54;
  }
  if ( v19 != 15 )
  {
    if ( v19 != 3 )
      goto LABEL_56;
    v27 = *(_BYTE *)(a4 + 2);
    if ( !v27 || v27 != *((_BYTE *)v14 + 1416) || !*((_QWORD *)v14 + 267) || !v14[533] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_56;
    v22 = *((_WORD *)v14 + 1066);
    if ( *(unsigned __int8 *)a5 <= v22 )
      v22 = *(unsigned __int8 *)a5;
    sub_1C000FD80(a1, v16, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
    {
      *a6 = v22;
      a6[1] = 3;
      sub_1C001D080(a6 + 2, *((char **)v14 + 267), (unsigned int)v14[533] - 2LL);
      v24 = a6;
      v29 = v22;
      v25 = 1195659320;
      goto LABEL_37;
    }
    v26 = 1195659321;
LABEL_54:
    sub_1C000FD80(a1, v23, v26, (__int64)a6, v22);
LABEL_55:
    *a5 = 0;
    goto LABEL_56;
  }
  if ( !*(_BYTE *)(a4 + 2) )
  {
    v20 = *((_QWORD *)v14 + 300);
LABEL_21:
    if ( v20 )
    {
      v21 = *(_WORD *)(v20 + 2);
      if ( *a5 <= v21 )
        v21 = *a5;
      if ( v21 <= *(_WORD *)(a4 + 6) && v21 <= *a5 && v21 )
      {
        sub_1C001D080(a6, (char *)v20, v21);
        LODWORD(v13) = 0;
      }
      else
      {
        LODWORD(v13) = -1073741823;
        v21 = 0;
      }
      *a5 = v21;
      goto LABEL_57;
    }
    goto LABEL_55;
  }
LABEL_56:
  LODWORD(v13) = -1073741823;
LABEL_57:
  if ( v15 )
    sub_1C0016670(a1, v15, a3, 0x48446E67u);
LABEL_59:
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x22u, (__int64)&unk_1C0062E18, v13);
  return (unsigned int)v13;
}
