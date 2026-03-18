/*
 * XREFs of sub_1C003DF14 @ 0x1C003DF14
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C00410FC @ 0x1C00410FC (sub_1C00410FC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 */

__int64 __fastcall sub_1C003DF14(struct _DEVICE_OBJECT *a1, IRP *a2, int a3)
{
  int v6; // r14d
  struct _IRP *MasterIrp; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // r8
  char v14; // bl
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+54h] [rbp-44h] BYREF
  char v21; // [rsp+A8h] [rbp+10h] BYREF
  char v22; // [rsp+B8h] [rbp+20h] BYREF

  v22 = 0;
  v19 = 0;
  v21 = 0;
  v6 = 0;
  sub_1C000FD80((__int64)a1, 32, 1768898097, (__int64)a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0xFu, (__int64)&unk_1C0062E18);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v20 = 7;
  sub_1C000FD80((__int64)a1, 32, 1768898098, (__int64)a2, (__int64)MasterIrp);
  v8 = sub_1C000F050((__int64)a1);
  v9 = (_QWORD *)sub_1C0004060((__int64)a1, (__int64)(v8 + 434), (__int64)a2, 1430414185, 1);
  if ( v9 )
  {
    v10 = sub_1C003D9B0((__int64)a1, 0xF00D0002, &v22);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = sub_1C0040CF4((_DWORD)a1, 7, (_DWORD)a2, a3, 4, 8);
      if ( (v10 & 0xC0000000) != 0xC0000000 )
      {
        v11 = sub_1C0016B5C((__int64)a1, MasterIrp->Type, (__int64)a2, 0x496F3034u);
        if ( v11 )
        {
          v12 = sub_1C00410FC();
          LOBYTE(v13) = 1;
          v14 = v12;
          sub_1C005B7C4(a1, v11, v13, &v21);
          if ( LODWORD(stru_1C006B480.Dpc.ProcessorHistory) || v21 || v14 )
          {
            v15 = sub_1C0036CFC(a1, v11, &v19);
            v6 = v19;
            v10 = v15;
          }
          else
          {
            v10 = -1073741637;
          }
          sub_1C00171A0((__int64)a1, v11, (__int64)a2, 0x496F3034u);
        }
        else
        {
          sub_1C000FD80((__int64)a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v10 = -1073741667;
          v6 = -1073713152;
        }
        a2->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v6;
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  sub_1C000FD80((__int64)a1, 32, 1768897586, (__int64)a2, v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v18) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x10u, (__int64)&unk_1C0062E18, v18);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v10) )
    sub_1C004A608((_DWORD)a1, 0, 91, (unsigned int)&v20, 4, v10, 0, (__int64)aIoctlC, 384, 0);
  if ( v22 )
    sub_1C0041094(a1, 4027383810LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050((__int64)a1);
  sub_1C0003610((__int64)a1, v16, v9);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
