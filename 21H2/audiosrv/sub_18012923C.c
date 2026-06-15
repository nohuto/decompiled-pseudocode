/*
 * XREFs of sub_18012923C @ 0x18012923C
 * Callers:
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 *     sub_180129E00 @ 0x180129E00 (sub_180129E00.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012C318 @ 0x18012C318 (sub_18012C318.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18012923C(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v22[160]; // [rsp+68h] [rbp-A0h] BYREF

  v21[1] = -2LL;
  v21[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
  v7 = v4;
  if ( v4 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v22);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), v22);
      v7 = v8;
      if ( v8 >= 0 )
      {
        sub_1800461B8(v21);
        v8 = sub_18012C318(v11, &unk_180160868, v12, v21);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(
                 *(_QWORD *)(a1 + 88),
                 v21[0]);
          v7 = v8;
          if ( v8 >= 0 )
          {
            sub_1800461B8(v21);
            v8 = sub_18012C318(v13, &unk_180160848, v14, v21);
            v7 = v8;
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(
                     *(_QWORD *)(a1 + 88),
                     v21[0]);
              v7 = v8;
              if ( v8 >= 0 )
              {
                sub_1800461B8(v21);
                v8 = sub_18012C318(v15, &unk_180160838, v16, v21);
                v7 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(
                         *(_QWORD *)(a1 + 88),
                         v21[0]);
                  v7 = v8;
                  if ( v8 >= 0 || (unsigned int)dword_18019C480 <= 2 )
                    goto LABEL_29;
                  v18 = 370;
                }
                else
                {
                  if ( (unsigned int)dword_18019C480 <= 2 )
                    goto LABEL_29;
                  v18 = 367;
                }
              }
              else
              {
                if ( (unsigned int)dword_18019C480 <= 2 )
                  goto LABEL_29;
                v18 = 364;
              }
            }
            else
            {
              if ( (unsigned int)dword_18019C480 <= 2 )
                goto LABEL_29;
              v18 = 361;
            }
          }
          else
          {
            if ( (unsigned int)dword_18019C480 <= 2 )
              goto LABEL_29;
            v18 = 358;
          }
        }
        else
        {
          if ( (unsigned int)dword_18019C480 <= 2 )
            goto LABEL_29;
          v18 = 355;
        }
      }
      else
      {
        if ( (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_29;
        v18 = 352;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_29;
      v18 = 349;
    }
    v19 = v8;
    v20 = (__int64)"SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder";
    sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v9, v10, (const CHAR **)&v20, (__int64)&v18, (__int64)&v19);
    goto LABEL_29;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v18 = v4;
    v19 = 346;
    v20 = (__int64)"SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder";
    sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v5, v6, (const CHAR **)&v20, (__int64)&v19, (__int64)&v18);
  }
LABEL_29:
  sub_1800461B8(v21);
  return v7;
}
