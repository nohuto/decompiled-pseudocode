/*
 * XREFs of sub_1C002AE10 @ 0x1C002AE10
 * Callers:
 *     sub_1C002BAB8 @ 0x1C002BAB8 (sub_1C002BAB8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0029498 @ 0x1C0029498 (sub_1C0029498.c)
 *     sub_1C0029620 @ 0x1C0029620 (sub_1C0029620.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E288 @ 0x1C002E288 (sub_1C002E288.c)
 */

__int64 __fastcall sub_1C002AE10(__int64 a1, __int64 a2)
{
  __m128 **v4; // r15
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __m128 *PoolWithTag; // rax
  __m128 *v8; // r13
  int v9; // ebx
  __m128 *v10; // rax
  __m128 *v11; // rsi
  _DWORD *v12; // rax
  __m128 *v13; // rax
  _DWORD *v14; // rax
  __int32 *v15; // rcx
  __int64 v16; // r15
  const EVENT_DESCRIPTOR *v17; // r9
  unsigned int v18; // r11d
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  __m128 *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r8d
  unsigned int v30; // ecx
  int v31; // ecx
  __m128 **v32; // r15
  __m128 *v33; // rcx
  __int32 *v34; // [rsp+40h] [rbp-59h]
  int v35; // [rsp+48h] [rbp-51h]
  __int128 v36; // [rsp+50h] [rbp-49h] BYREF
  __m128 **v37; // [rsp+60h] [rbp-39h]
  unsigned __int64 v38; // [rsp+68h] [rbp-31h]
  int v39; // [rsp+70h] [rbp-29h]
  SIZE_T NumberOfBytes[2]; // [rsp+78h] [rbp-21h] BYREF
  int v41; // [rsp+88h] [rbp-11h]
  int v42; // [rsp+90h] [rbp-9h]
  _DWORD v43[7]; // [rsp+94h] [rbp-5h]

  v43[5] = 8;
  v41 = 0;
  v38 = 0LL;
  v39 = 0;
  v42 = 0;
  v43[0] = 1;
  v43[1] = 1;
  v43[2] = 1;
  v43[3] = 4;
  v43[4] = 4;
  v43[6] = 4;
  *(_OWORD *)NumberOfBytes = 0LL;
  v36 = 0LL;
  v37 = (__m128 **)sub_1C000F050(a1);
  v4 = v37;
  result = sub_1C0029498(a1, NumberOfBytes, 0x14u);
  if ( (_DWORD)result == -2147483643 )
  {
    v6 = HIDWORD(NumberOfBytes[0]);
    if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
      return 3222536207LL;
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, HIDWORD(NumberOfBytes[0]), 0x42554855u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      sub_1C001D340(PoolWithTag, 0, v6);
      v9 = sub_1C0029498(a1, v8, v6);
      if ( v9 >= 0 )
      {
        v10 = (__m128 *)ExAllocatePoolWithTag(PoolType, 0x414uLL, 0x42554855u);
        v11 = v10;
        if ( v10 )
        {
          sub_1C001D340(v10, 0, 0x414uLL);
          if ( !v37[378] )
          {
            v12 = sub_1C000F050(a1);
            v13 = (__m128 *)ExAllocatePoolWithTag(PoolType, 28 * (*((unsigned __int8 *)v12 + 2938) + 1LL), 0x42554855u);
            v37[378] = v13;
            if ( v13 )
            {
              v14 = sub_1C000F050(a1);
              sub_1C001D340(v4[378], 0, 28 * (*((unsigned __int8 *)v14 + 2938) + 1LL));
            }
          }
          v15 = &v8->m128_i32[2];
          v35 = 1;
          if ( v8->m128_i32[1] > 1u )
          {
            while ( 1 )
            {
              v15 = (__int32 *)((char *)v15 + (unsigned int)v15[1] + 8);
              v34 = v15;
              if ( (*(_BYTE *)v15 & 1) == 0 || !v15[1] )
                goto LABEL_27;
              *((_QWORD *)&v36 + 1) = v15 + 2;
              WORD1(v36) = *((_WORD *)v15 + 2);
              LOWORD(v36) = WORD1(v36) - 1;
              v9 = sub_1C0029620(a1, (unsigned __int16 *)&v36, 1380204895, v11);
              if ( v9 >= 0 )
                break;
              v9 = 0;
LABEL_26:
              v15 = v34;
LABEL_27:
              if ( (unsigned int)++v35 >= v8->m128_i32[1] )
                goto LABEL_28;
            }
            if ( !v11->m128_i32[2] )
              goto LABEL_26;
            if ( v11->m128_i16[6] )
              goto LABEL_26;
            v16 = v11[1].m128_u16[0];
            if ( !(_WORD)v16 || (unsigned __int16)v16 > *((unsigned __int8 *)sub_1C000F050(a1) + 2938) )
              goto LABEL_26;
            v9 = sub_1C0029620(a1, (unsigned __int16 *)&v36, 1129338207, v11);
            if ( v9 < 0 )
              goto LABEL_20;
            v18 = v11->m128_u32[2];
            if ( !v18 )
            {
              sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062808);
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
              {
                if ( LOWORD(DeviceObject->DeviceType) )
                  sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 38, (__int64)&unk_1C0062088, v16);
              }
              goto LABEL_26;
            }
            v19 = (unsigned __int64)v11 + v11->m128_u32[1];
            v38 = 0LL;
            v39 = 0;
            v20 = (unsigned __int64)&v11->m128_u64[1] + 4;
            v21 = 0;
            if ( (unsigned __int64)&v11->m128_u64[1] + 4 < v19 )
            {
              while ( v21 < v18 )
              {
                if ( v21 >= 4 || *(_WORD *)v20 )
                  goto LABEL_20;
                v22 = v43[2 * v21];
                v23 = (unsigned int)v43[2 * v21 - 1];
                if ( v22 == 1 )
                {
                  *((_BYTE *)&v38 + v23) = *(_BYTE *)(v20 + 4);
                }
                else
                {
                  if ( v22 != 4 )
                  {
                    v9 = -1072431089;
                    break;
                  }
                  *(_DWORD *)((char *)&v38 + v23) = *(_DWORD *)(v20 + 4);
                }
                v24 = *(unsigned __int16 *)(v20 + 2);
                if ( (unsigned __int16)v24 < 4u )
                  v24 = 4LL;
                ++v21;
                v20 += v24 + 4;
                if ( v20 >= v19 )
                  break;
              }
            }
            if ( v9 < 0 )
            {
LABEL_20:
              v17 = &stru_1C0062808;
LABEL_21:
              sub_1C0012400(a1, 0LL, 0LL, v17);
              v9 = 0;
              goto LABEL_26;
            }
            v25 = v16;
            v26 = v37[378];
            if ( v26 )
            {
              v27 = v39;
              v28 = 7 * v16;
              *(unsigned __int64 *)((char *)v26->m128_u64 + v28 * 4) = v38;
              v26->m128_i32[v28 + 2] = v27;
              *(_DWORD *)(a2 + 4 * v16) |= 0x20u;
            }
            if ( !(_BYTE)v38 )
            {
              *(_DWORD *)(a2 + 4 * v16) = *(_DWORD *)(a2 + 4 * v16) & 0xFFFFFFE0 | 0x11;
              goto LABEL_26;
            }
            v29 = BYTE1(v38);
            v30 = *(_DWORD *)(a2 + 4 * v16) & 0xFFFFFFE0;
            *(_DWORD *)(a2 + 4 * v16) = v30;
            if ( v29 )
            {
              switch ( v29 )
              {
                case 1:
                  v31 = v30 | 4;
                  break;
                case 2:
                  v31 = v30 | 2;
                  break;
                case 255:
                  v31 = v30 | 8;
                  break;
                default:
                  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                    sub_1C002E288(DeviceObject->DeviceExtension, v29 - 2, v29, 39, (__int64)&unk_1C0062088, v16, v29);
                  goto LABEL_59;
              }
              *(_DWORD *)(a2 + 4 * v16) = v31;
            }
LABEL_59:
            v9 = sub_1C0029620(a1, (unsigned __int16 *)&v36, 1145851999, v11);
            if ( v9 >= 0 )
            {
              if ( v11->m128_i32[2] && v11->m128_i16[6] == 2 && v11->m128_i16[7] >= 0x10u )
              {
                v32 = v37;
                v33 = v37[378];
                if ( v33 )
                {
                  *(__m128 *)((char *)v33 + 28 * v25 + 12) = v11[1];
                  *(_DWORD *)(a2 + 4 * v25) |= 0x40u;
                }
                if ( (v11[1].m128_i8[8] & 1) == 0 )
                  *(_DWORD *)(a2 + 4 * v25) |= 0x10u;
                *((_DWORD *)v32 + 641) |= 1u;
              }
              else
              {
                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                  sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 40, (__int64)&unk_1C0062088, v16);
                sub_1C0012400(a1, 0LL, 0LL, &stru_1C00628F0);
              }
              goto LABEL_26;
            }
            v17 = &stru_1C00628F0;
            goto LABEL_21;
          }
LABEL_28:
          ExFreePoolWithTag(v11, 0);
        }
        else
        {
          v9 = -1073741670;
        }
      }
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
