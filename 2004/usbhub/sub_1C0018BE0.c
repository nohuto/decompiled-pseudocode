/*
 * XREFs of sub_1C0018BE0 @ 0x1C0018BE0
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012EFC @ 0x1C0012EFC (sub_1C0012EFC.c)
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C0016EC0 @ 0x1C0016EC0 (sub_1C0016EC0.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0018BE0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbp
  _DWORD *v8; // r15
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // r9d
  char v15; // r13
  _DWORD *v16; // rbx
  KIRQL v17; // dl
  unsigned int v18; // ebx
  int v20; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+88h] [rbp+20h]

  v6 = sub_1C0011220(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  sub_1C000F050(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v22 = v10;
  v20 = *(_DWORD *)(v9 + 8);
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000FD80(v7, 16, 1346651256, a3, a2);
  v8[355] &= ~0x2000000u;
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v11 = sub_1C000F050(*(_QWORD *)(a1 + 8))[1043];
  if ( v11 == 201 )
  {
    v14 = sub_1C0011220(a2)[282];
    if ( v14 == 1 )
    {
      sub_1C0017660(a1, a2, v13, 4, 4);
      v15 = v10 == 4;
      v16 = sub_1C000F050(v7);
      sub_1C000F050(*(_QWORD *)(a1 + 8));
      *(_DWORD *)(a1 + 32) = 1734964085;
      v17 = *((_BYTE *)v16 + 5064);
      *((_QWORD *)v16 + 168) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
      sub_1C0016EC0(v7, a2);
      if ( !v8[700] || (v20 & 0xF000) != 0x5000 )
        sub_1C0014C0C(a1, a2, v15);
      v8[596] = v22 != 4;
LABEL_6:
      sub_1C0012EFC(v7, a2, a3);
      v18 = 0;
      if ( !v15 )
        return v18;
      goto LABEL_7;
    }
    if ( v14 > 1 )
    {
      if ( v14 <= 3 )
        goto LABEL_28;
      if ( v14 <= 5 )
      {
        v15 = v10 == 4;
        v8[596] = v10 != 4;
        sub_1C0017660(a1, a2, v13, v14, 4);
        sub_1C0018364(v7, a1);
        goto LABEL_6;
      }
      if ( v14 == 6 )
LABEL_28:
        sub_1C0017660(a1, a2, v13, v14, 5);
    }
    sub_1C0018364(v7, a1);
    v18 = -1073741101;
LABEL_7:
    sub_1C001507C(v7, *((_QWORD *)v8 + 105), -1073741101);
    if ( (v8[355] & 0x100000) == 0 )
      sub_1C0018D98(v7, *((_QWORD *)v8 + 105), 3221226195LL);
    return v18;
  }
  if ( v11 <= 201 )
    goto LABEL_23;
  if ( v11 <= 206 )
    goto LABEL_15;
  if ( v11 <= 208 )
  {
LABEL_23:
    sub_1C0018364(v7, a1);
    return (unsigned int)-1073741823;
  }
  if ( v11 > 211 )
  {
    if ( v11 == 212 )
    {
LABEL_15:
      v18 = -1073741101;
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 19, (__int64)&unk_1C0062DF8, *((_WORD *)v8 + 714));
      sub_1C0017660(a1, a2, v12, 4, 5);
      sub_1C0018364(v7, a1);
      return v18;
    }
    goto LABEL_23;
  }
  sub_1C0017660(a1, a2, v12, 5, 4);
  sub_1C000FD80(v7, 16, 1349862520, a3, a2);
  sub_1C0018364(v7, a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 20, (__int64)&unk_1C0062DF8, *((_WORD *)v8 + 714));
  return 0;
}
