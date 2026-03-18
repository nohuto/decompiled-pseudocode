/*
 * XREFs of sub_1C0050274 @ 0x1C0050274
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 *     sub_1C0051AFC @ 0x1C0051AFC (sub_1C0051AFC.c)
 *     sub_1C0051C60 @ 0x1C0051C60 (sub_1C0051C60.c)
 *     sub_1C005A3A0 @ 0x1C005A3A0 (sub_1C005A3A0.c)
 */

__int64 __fastcall sub_1C0050274(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int16 v12; // r15
  _WORD *PoolWithTag; // rbx
  _WORD *v14; // rcx
  unsigned int v15; // eax
  char *v16; // r14
  _WORD *v17; // rcx
  __int64 v18; // r9
  int v19; // r8d
  __m128 *v20; // rbx
  char *v21; // rcx
  SIZE_T v22; // r14
  __m128 *v23; // r15
  char *v24; // rcx
  __int64 v25; // r14
  __m128 *v26; // rax
  char *v27; // r15
  char *v28; // rcx
  int v29; // r8d
  _QWORD *v30; // rax
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r10
  unsigned int v35; // r10d
  unsigned __int64 v36; // [rsp+40h] [rbp-68h]
  unsigned int v37; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  char *v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+68h] [rbp-40h]
  __int64 v43; // [rsp+70h] [rbp-38h]
  unsigned __int16 v44; // [rsp+B8h] [rbp+10h]
  __int16 NumberOfBytes; // [rsp+C8h] [rbp+20h]
  SIZE_T NumberOfBytesa; // [rsp+C8h] [rbp+20h]

  if ( a2 )
  {
    v7 = sub_1C0011220(a2);
    if ( (v7[355] & 0x10004) == 0x10000 )
    {
      v8 = sub_1C005A3A0(v6, a2, a3);
      if ( v8 >= 0 )
      {
        sub_1C000FD80(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C0051C60(
              DeviceObject->DeviceExtension,
              *(_QWORD *)(a3 + 8),
              v9,
              14,
              (__int64)&unk_1C0064FB8,
              *(_QWORD *)(a3 + 8),
              *(_QWORD *)(a3 + 8),
              *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      sub_1C000FD80(a1, 4096, 1752651845, 0LL, v8);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0064FB8);
    }
    v10 = *((unsigned __int16 *)v7 + 704);
    v11 = *((unsigned __int16 *)v7 + 705);
    v12 = *((_WORD *)v7 + 706);
    NumberOfBytes = *((_WORD *)v7 + 704);
    v44 = *((_WORD *)v7 + 705);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C004815C(
        (__int64)DeviceObject->DeviceExtension,
        v11,
        v10,
        0x10u,
        (__int64)&unk_1C0064FB8,
        v10,
        v11,
        *((unsigned __int16 *)v7 + 706));
      LOWORD(v10) = NumberOfBytes;
      LOWORD(v11) = v44;
    }
    v38 = (unsigned __int16)v10;
    sub_1C000FD80(a1, 4096, 1752648004, (unsigned __int16)v10, (unsigned __int16)v11);
    PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x18uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      v14 = PoolWithTag;
      *(_OWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)"U";
      for ( *((_QWORD *)PoolWithTag + 2) = 0x6E006E006E006ELL; *v14 != 110; ++v14 )
        ;
      v41 = v38 >> 12;
      *v14 = (unsigned __int8)a0123456789abcd[v38 >> 12];
      v42 = (v38 >> 8) & 0xF;
      v14[1] = (unsigned __int8)a0123456789abcd[v42];
      v15 = (v38 >> 4) & 0xF;
      v39 = v38 & 0xF;
      v43 = v15;
      v14[2] = (unsigned __int8)a0123456789abcd[v15];
      v14[3] = (unsigned __int8)a0123456789abcd[v39];
      v36 = 42LL;
      v16 = (char *)ExAllocatePoolWithTag(PoolType, 0x2AuLL, 0x42554855u);
      if ( v16 )
      {
        v17 = v16 + 24;
        *(_OWORD *)v16 = 0LL;
        *((_OWORD *)v16 + 1) = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
        *((_WORD *)v16 + 20) = 0;
        *(_OWORD *)v16 = *(_OWORD *)PoolWithTag;
        *((_QWORD *)v16 + 2) = *((_QWORD *)PoolWithTag + 2);
        *(_OWORD *)(v16 + 24) = xmmword_1C0064C00;
        *((_WORD *)v16 + 20) = 110;
        while ( *v17 != 110 )
          ++v17;
        NumberOfBytesa = 62LL;
        *v17 = (unsigned __int8)a0123456789abcd[(unsigned __int64)v44 >> 12];
        v17[1] = (unsigned __int8)a0123456789abcd[HIBYTE(v44) & 0xF];
        v17[2] = (unsigned __int8)a0123456789abcd[(unsigned __int8)v44 >> 4];
        v17[3] = (unsigned __int8)a0123456789abcd[v44 & 0xF];
      }
      else
      {
        v36 = 0LL;
        NumberOfBytesa = 20LL;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v16 )
      {
        v20 = (__m128 *)ExAllocatePoolWithTag(PoolType, NumberOfBytesa, 0x42554855u);
        if ( v20 )
        {
          sub_1C001D340(v20, 0, NumberOfBytesa);
          sub_1C001D080((char *)v20, v16, v36);
          v21 = (char *)v20 + v36;
          *(_OWORD *)v21 = xmmword_1C0064C38;
          *((_WORD *)v21 + 8) = 110;
          while ( *(_WORD *)v21 != 110 )
            v21 += 2;
          *(_WORD *)v21 = (v12 >> 12) + 48;
          *((_WORD *)v21 + 1) = (HIBYTE(v12) & 0xF) + 48;
          *((_WORD *)v21 + 2) = ((unsigned __int8)v12 >> 4) + 48;
          *((_WORD *)v21 + 3) = (v12 & 0xF) + 48;
        }
        else
        {
          LODWORD(NumberOfBytesa) = 0;
        }
        ExFreePoolWithTag(v16, 0);
        v22 = (unsigned int)NumberOfBytesa + 24LL;
        v37 = NumberOfBytesa + 24;
        v23 = (__m128 *)ExAllocatePoolWithTag(PoolType, v22, 0x42554855u);
        v40 = (char *)v23;
        if ( v23 )
        {
          sub_1C001D340(v23, 0, v22);
          sub_1C001D080((char *)v23, (char *)v20, (unsigned int)NumberOfBytesa);
          v24 = (char *)v23 + (unsigned int)NumberOfBytesa;
          *(_OWORD *)v24 = *(_OWORD *)"U";
          *((_QWORD *)v24 + 2) = 0x6E006E006E006ELL;
          while ( *(_WORD *)v24 != 110 )
            v24 += 2;
          *(_WORD *)v24 = (unsigned __int8)a0123456789abcd[v41];
          *((_WORD *)v24 + 1) = (unsigned __int8)a0123456789abcd[v42];
          *((_WORD *)v24 + 2) = (unsigned __int8)a0123456789abcd[v43];
          *((_WORD *)v24 + 3) = (unsigned __int8)a0123456789abcd[v39];
        }
        else
        {
          LODWORD(v22) = 0;
          v37 = 0;
        }
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        if ( v23 )
        {
          v25 = (unsigned int)v22 + 22LL;
          v26 = (__m128 *)ExAllocatePoolWithTag(PoolType, v25, 0x42554855u);
          v27 = (char *)v26;
          if ( v26 )
          {
            sub_1C001D340(v26, 0, v25);
            sub_1C001D080(v27, v40, v37);
            v28 = &v27[v37];
            *(_OWORD *)v28 = xmmword_1C0064C00;
            *((_WORD *)v28 + 8) = 110;
            while ( *(_WORD *)v28 != 110 )
              v28 += 2;
            *(_WORD *)v28 = (unsigned __int8)a0123456789abcd[(unsigned __int64)v44 >> 12];
            *((_WORD *)v28 + 1) = (unsigned __int8)a0123456789abcd[((unsigned __int64)v44 >> 8) & 0xF];
            *((_WORD *)v28 + 2) = (unsigned __int8)a0123456789abcd[((unsigned __int64)v44 >> 4) & 0xF];
            *((_WORD *)v28 + 3) = (unsigned __int8)a0123456789abcd[v44 & 0xF];
          }
          else
          {
            LODWORD(v25) = 0;
          }
          ExFreePoolWithTag(v40, 0);
          if ( v27 )
          {
            *(_QWORD *)(a3 + 8) = v27;
            *(_DWORD *)(a3 + 4) = v25;
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
              sub_1C0051AFC(DeviceObject->DeviceExtension, 0, v29, 18, (__int64)&unk_1C0064FB8, (__int64)v27, v25);
            return 0LL;
          }
          v18 = a2;
          v19 = 1751725089;
        }
        else
        {
          v18 = a2;
          v19 = 1751725345;
        }
      }
      else
      {
        v18 = a2;
        v19 = 1751724321;
      }
    }
    else
    {
      v18 = a2;
      v19 = 1751724577;
    }
  }
  else
  {
    v30 = ExAllocatePoolWithTag(PoolType, 0x1AuLL, 0x42554855u);
    if ( v30 )
    {
      *(_OWORD *)v30 = 0LL;
      v30[2] = 0LL;
      *((_WORD *)v30 + 12) = 0;
      *(_OWORD *)v30 = xmmword_1C0064C18;
      *((_DWORD *)v30 + 4) = 5701711;
      *((_WORD *)v30 + 10) = 78;
      *(_QWORD *)(a3 + 8) = v30;
      *(_DWORD *)(a3 + 4) = 26;
      sub_1C000FD80(a1, 4096, 1751733537, (__int64)v30, 26LL);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C0051C60(DeviceObject->DeviceExtension, v31, v32, 17, (__int64)&unk_1C0064FB8, v33, v33, 26);
      return 0LL;
    }
    v18 = 0LL;
    v19 = 1751724833;
  }
  sub_1C000FD80(a1, 4096, v19, v18, -1073741670LL);
  return v35;
}
