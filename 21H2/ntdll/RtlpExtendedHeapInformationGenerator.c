/*
 * XREFs of RtlpExtendedHeapInformationGenerator @ 0x1800F3870
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationGenerator(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // rax
  char *v10; // rcx
  char *v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  _OWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  _OWORD *v24; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v24 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v24;
      if ( (unsigned __int64)(v24 + 2) <= a2[11] )
      {
        *v24 = *(_OWORD *)(a1 + 16);
        v24[1] = *(_OWORD *)(a1 + 32);
        v24 = (_OWORD *)a2[10];
        a2[1] = v24;
      }
      a2[10] = v24 + 2;
      return 0LL;
    case 2:
      v20 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v20;
      if ( (unsigned __int64)(v20 + 3) <= a2[11] )
      {
        *v20 = *(_OWORD *)(a1 + 16);
        v20[1] = *(_OWORD *)(a1 + 32);
        v20[2] = *(_OWORD *)(a1 + 48);
        v21 = a2[1];
        if ( v21 )
        {
          v22 = a2[10] - a2[9];
          v23 = a2[2];
          if ( v23 )
            *(_QWORD *)(v23 + 40) = v22;
          else
            *(_QWORD *)(v21 + 24) = v22;
          v20 = (_OWORD *)a2[10];
          a2[2] = v20;
        }
        else
        {
          v20 = (_OWORD *)a2[10];
        }
        a2[3] = v20;
      }
      v9 = v20 + 3;
      break;
    case 3:
      v18 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v18;
      if ( v18 + 40 <= a2[11] )
      {
        *(_OWORD *)v18 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v18 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v18 + 32) = *(_QWORD *)(a1 + 48);
        v19 = a2[4];
        if ( !v19 )
          v19 = a2[3];
        *(_QWORD *)(v19 + 32) = a2[10] - a2[9];
        v18 = a2[10];
        a2[4] = v18;
        a2[5] = v18;
      }
      v9 = (_OWORD *)(v18 + 40);
      goto LABEL_45;
    case 4:
      v15 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v15;
      if ( v15 + 40 <= a2[11] )
      {
        *(_OWORD *)v15 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v15 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 48);
        v16 = a2[10] - a2[9];
        v17 = a2[6];
        if ( v17 )
          *(_QWORD *)(v17 + 32) = v16;
        else
          *(_QWORD *)(a2[5] + 24LL) = v16;
        v15 = a2[10];
        a2[6] = v15;
        a2[7] = v15;
      }
      v9 = (_OWORD *)(v15 + 40);
      goto LABEL_46;
    case 5:
      v10 = (char *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v10;
      v11 = v10;
      v12 = *(_QWORD *)(a1 + 8) - 16LL;
      if ( (unsigned __int64)&v10[v12] >= v12 && (unsigned __int64)&v10[v12] <= a2[11] )
      {
        memmove(v10, (const void *)(a1 + 16), *(_QWORD *)(a1 + 8) - 16LL);
        v13 = a2[10] - a2[9];
        v14 = a2[8];
        if ( v14 )
          *(_QWORD *)(v14 + 32) = v13;
        else
          *(_QWORD *)(a2[7] + 24LL) = v13;
        v11 = (char *)a2[10];
        a2[8] = v11;
      }
      a2[10] = &v11[v12];
      return 0LL;
    case 0x80000000:
      v5 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v5;
      if ( v5 + 152 <= a2[11] )
      {
        *(_OWORD *)v5 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 96);
        *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 112);
        *(_OWORD *)(v5 + 112) = *(_OWORD *)(a1 + 128);
        *(_OWORD *)(v5 + 128) = *(_OWORD *)(a1 + 144);
        *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 160);
        v6 = a2[1];
        if ( v6 )
        {
          v7 = a2[10] - a2[9];
          v8 = a2[2];
          if ( v8 )
            *(_QWORD *)(v8 + 40) = v7;
          else
            *(_QWORD *)(v6 + 24) = v7;
          v5 = a2[10];
          a2[2] = v5;
        }
        else
        {
          v5 = a2[10];
        }
        a2[3] = v5;
      }
      v9 = (_OWORD *)(v5 + 152);
      break;
    default:
      return 3221225485LL;
  }
  a2[4] = 0LL;
  a2[5] = 0LL;
LABEL_45:
  a2[6] = 0LL;
  a2[7] = 0LL;
LABEL_46:
  a2[10] = v9;
  a2[8] = 0LL;
  return 0LL;
}
