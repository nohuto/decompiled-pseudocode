/*
 * XREFs of sub_1C003E6C4 @ 0x1C003E6C4
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003E6C4(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 MasterIrp; // r14
  _DWORD *v7; // rax
  _QWORD *v8; // r13
  int v9; // ebx
  int v10; // eax
  __int64 v11; // r15
  _DWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // r10
  __int64 v15; // rdx
  char v17; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x23u, (__int64)&unk_1C0062E18);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v18 = *(_WORD *)(a3 + 8);
  v19 = 260;
  sub_1C000FD80(a1, 32, 1768898146, (__int64)a2, MasterIrp);
  v7 = sub_1C000F050(a1);
  v8 = (_QWORD *)sub_1C0004060(a1, (__int64)(v7 + 434), (__int64)a2, 1430414185, 1);
  if ( v8 )
  {
    v9 = sub_1C003D9B0(a1, 0xF00D000B, &v17);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
    {
      v10 = sub_1C0040CF4(a1, 260, (_DWORD)a2, a3, 4, 13);
      v9 = v10;
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C000FD80(a1, 32, 1764899938, v10, 0LL);
        v9 = -1073741810;
      }
      else
      {
        *(_WORD *)(MasterIrp + 4) = 1664;
        v11 = sub_1C0016B5C(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3062u);
        if ( v11 )
        {
          v12 = sub_1C000F050(a1);
          sub_1C00176F8(a1, (__int64)(v12 + 346), 126, 1903322197);
          v13 = sub_1C0011220(v11)[282];
          sub_1C0018364(a1, (__int64)(v12 + 346));
          v18 -= 12;
          v9 = sub_1C003E230(a1, v11, (__int64)a2, MasterIrp + 4, &v18, (char *)(MasterIrp + 12), v17, v13 != 1);
          sub_1C000FD80(a1, 32, 1764834402, v9, v18);
          if ( v9 >= 0 )
            a2->IoStatus.Information = v14 + 12;
          sub_1C00171A0(a1, v11, (__int64)a2, 0x496F3062u);
        }
      }
    }
  }
  else
  {
    v9 = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897634, (__int64)a2, v9);
  if ( (v9 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v9) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v19, 4, v9, 0, (__int64)aIoctlC, 1548, 0);
  if ( v17 )
    sub_1C0041094(a1, 4027383819LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v15, v8);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
