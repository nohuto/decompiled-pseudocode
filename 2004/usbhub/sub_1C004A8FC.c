/*
 * XREFs of sub_1C004A8FC @ 0x1C004A8FC
 * Callers:
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E288 @ 0x1C002E288 (sub_1C002E288.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0041184 @ 0x1C0041184 (sub_1C0041184.c)
 *     sub_1C00412A8 @ 0x1C00412A8 (sub_1C00412A8.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 *     sub_1C004B170 @ 0x1C004B170 (sub_1C004B170.c)
 *     sub_1C004B238 @ 0x1C004B238 (sub_1C004B238.c)
 *     sub_1C004B378 @ 0x1C004B378 (sub_1C004B378.c)
 *     sub_1C004B440 @ 0x1C004B440 (sub_1C004B440.c)
 */

void __fastcall sub_1C004A8FC(char a1, __int64 a2, __int64 a3, int a4)
{
  __int128 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  __int128 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0064998);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(DeviceObject->DeviceType) )
          sub_1C004B378(DeviceObject->DeviceExtension, a2, a3, a4, v16, a2, a1);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C004B238(DeviceObject->DeviceExtension, a2, a3, a4, v16, *(_DWORD *)a3, *(_QWORD *)(a3 + 8));
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
              sub_1C004B440(
                DeviceObject->DeviceExtension,
                a2,
                a3,
                a4,
                v16,
                *(_QWORD *)(a2 + 592),
                *(_DWORD *)(a2 + 584));
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
                sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)&unk_1C0064998);
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
              {
                if ( LOWORD(DeviceObject->DeviceType) )
                  sub_1C004B170(
                    DeviceObject->DeviceExtension,
                    a2,
                    a3,
                    a4,
                    v16,
                    *(_DWORD *)(a2 + 24),
                    *(_DWORD *)(a2 + 28));
                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                {
                  if ( LOWORD(DeviceObject->DeviceType) )
                  {
                    LODWORD(v17) = *(unsigned __int16 *)(a2 + 32);
                    sub_1C002E55C(
                      (__int64)DeviceObject->DeviceExtension,
                      *(unsigned __int16 *)(a2 + 32),
                      a3,
                      0x10u,
                      (__int64)&unk_1C0064998,
                      v17,
                      *(_QWORD *)(a2 + 40));
                  }
                  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                  {
                    v7 = sub_1C00412A8(&v20, *(unsigned __int16 *)(a2 + 32), *(_QWORD *)(a2 + 40));
                    v9 = *(_QWORD *)(v8 + 64);
                    v19 = *v7;
                    sub_1C0041184(v9, v10, 1u, 0x11u, (__int64)&unk_1C0064998, (__int64)&v19);
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( *(_DWORD *)a3 == 4 )
    {
      v11 = *(_DWORD **)(a2 + 40);
      if ( v11 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x12u, (__int64)&unk_1C0064998);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              LODWORD(v17) = *v11;
              sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0064998, v17);
            }
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
              {
                LODWORD(v18) = v11[1];
                LODWORD(v17) = v18;
                sub_1C002E288((__int64)DeviceObject->DeviceExtension, a2, a3, 0x14u, (__int64)&unk_1C0064998, v17, v18);
              }
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
              {
                if ( LOWORD(DeviceObject->DeviceType) )
                {
                  LODWORD(v18) = v11[3];
                  LODWORD(v17) = v11[2];
                  sub_1C004815C(
                    (__int64)DeviceObject->DeviceExtension,
                    a2,
                    a3,
                    0x15u,
                    (__int64)&unk_1C0064998,
                    v17,
                    v18,
                    v11[4]);
                }
                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                {
                  if ( LOWORD(DeviceObject->DeviceType) )
                  {
                    v12 = sub_1C00412A8(&v20, 0x40uLL, (__int64)(v11 + 5));
                    v14 = *(_QWORD *)(v13 + 64);
                    v19 = *v12;
                    sub_1C0041184(v14, v15, 1u, v15 - 42, (__int64)&unk_1C0064998, (__int64)&v19);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
