/*
 * XREFs of MiCreateFreePfns @ 0x140A44D50
 * Callers:
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memset @ 0x140414300 (memset.c)
 *     MxReleaseFreeDescriptor @ 0x140A44A14 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 */

void __fastcall MiCreateFreePfns(__int128 *a1)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r8
  __int128 *v8; // rcx
  __int128 v9; // xmm3
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int128 v12; // xmm1
  unsigned __int64 v13; // r14
  unsigned __int64 **v14; // r15
  unsigned __int64 *v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // edx
  __int128 v19; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v22; // [rsp+50h] [rbp-B8h]
  __int128 v23; // [rsp+58h] [rbp-B0h]
  _OWORD v24[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-80h]
  _QWORD Base[64]; // [rsp+98h] [rbp-70h] BYREF

  memset(Base, 0, sizeof(Base));
  v2 = *((_DWORD *)a1 + 4);
  v3 = 0LL;
  v4 = *((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 4);
  if ( (v2 & 0x40000000) != 0 )
  {
    v6 = qword_140D5BD60;
    *((_DWORD *)a1 + 4) = v2 & 0xBFFFFFFF;
  }
  else
  {
    v6 = MxBootFreeDescriptor;
  }
  v7 = &v6[5 * (unsigned __int16)KeNumberNodes];
  if ( v6 >= v7 )
    goto LABEL_10;
  do
  {
    if ( v6[1] && *v6 >= v4 && *v6 < v5 + v4 )
    {
      Base[v3] = v6;
      v3 = (unsigned int)(v3 + 1);
    }
    v6 += 5;
  }
  while ( v6 < v7 );
  if ( (_DWORD)v3 )
  {
    qsort(Base, (unsigned int)v3, 8uLL, MxDescriptorSort);
    v9 = *a1;
    v10 = 0;
    v21 = *((_QWORD *)a1 + 4);
    v11 = v21;
    v12 = a1[1];
    v23 = v9;
    v19 = v9;
    v20 = v12;
    v13 = *((_QWORD *)&v12 + 1);
    v14 = (unsigned __int64 **)Base;
    while ( 1 )
    {
      v15 = *v14;
      v16 = **v14;
      if ( v16 > v13 )
      {
        v22 = v16 - v13;
        v25 = v16 - v13;
        v24[0] = v9;
        v24[1] = v12;
        MxCreateFreePfns(v24);
        v11 -= v22;
        v13 = *v15;
      }
      v17 = v15[1];
      v18 = *((_DWORD *)a1 + 4);
      v11 -= v17;
      v13 += v17;
      v21 = v11;
      *((_QWORD *)&v20 + 1) = v13;
      MxReleaseFreeDescriptor(v15, v18);
      if ( !v11 )
        break;
      ++v10;
      ++v14;
      if ( v10 >= (unsigned int)v3 )
      {
        v8 = &v19;
        goto LABEL_11;
      }
      v12 = v20;
      v9 = v23;
    }
  }
  else
  {
LABEL_10:
    v8 = a1;
LABEL_11:
    MxCreateFreePfns(v8);
  }
}
