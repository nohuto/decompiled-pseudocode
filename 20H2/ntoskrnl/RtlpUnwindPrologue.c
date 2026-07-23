/*
 * XREFs of RtlpUnwindPrologue @ 0x140228760
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpUnwindOpSlots @ 0x140330330 (RtlpUnwindOpSlots.c)
 *     RtlLocateExtendedFeature2 @ 0x140380F00 (RtlLocateExtendedFeature2.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned int v12; // r11d
  char v13; // r13
  unsigned int v14; // ebp
  __int64 (__fastcall *v15)(int, int, int, int, int, int, int, __int64); // rdi
  __int64 v16; // rbx
  unsigned __int8 v17; // cl
  _BYTE *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 (__fastcall **v35)(int, int, int, int, int, int, int, __int64); // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 ExtendedFeature2; // rax
  __int64 v43; // [rsp+60h] [rbp+8h]
  unsigned int v44; // [rsp+68h] [rbp+10h]

  v43 = a1;
  v9 = 0LL;
  v10 = a3;
  v44 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = 0;
    v14 = a2 - *a4 - a1;
    v15 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(a1 + (unsigned int)a4[2]);
    LODWORD(v16) = 0;
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v15 & 3) != 0 )
      goto LABEL_87;
    v17 = *((_BYTE *)v15 + 2);
    if ( v17 )
    {
      do
      {
        v18 = (char *)v15 + 2 * (unsigned int)v16;
        v19 = (unsigned __int8)v18[5] >> 4;
        if ( v14 < (unsigned __int8)v18[4] )
        {
          LODWORD(v16) = RtlpUnwindOpSlots(*((unsigned __int16 *)v18 + 2), v18, v19, v9) + v16;
        }
        else
        {
          if ( (*((_BYTE *)v15 + 2 * (unsigned int)v16 + 5) & 0xF) != 0 )
          {
            if ( (*((_BYTE *)v15 + 2 * (unsigned int)v16 + 5) & 0xF) == 4 )
            {
              v16 = (unsigned int)(v16 + 1);
              v25 = v10 + 8LL * *((unsigned __int16 *)v15 + v16 + 2);
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v25 & 3) != 0 )
                goto LABEL_87;
              if ( *(_QWORD *)a8 && (v25 < **(_QWORD **)a8 || v25 > **(_QWORD **)(a8 + 8) - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(a5 + 8 * v19 + 120) = *(_QWORD *)v25;
              v26 = *(_QWORD *)(a8 + 16);
              if ( v26 )
                *(_QWORD *)(v26 + 8 * v19 + 128) = v25;
            }
            else
            {
              switch ( *((_BYTE *)v15 + 2 * (unsigned int)v16 + 5) & 0xF )
              {
                case 1:
                  v16 = (unsigned int)(v16 + 1);
                  v27 = *((unsigned __int16 *)v15 + v16 + 2);
                  if ( (_DWORD)v19 )
                  {
                    v16 = (unsigned int)(v16 + 1);
                    v28 = (*((unsigned __int16 *)v15 + v16 + 2) << 16) + v27;
                  }
                  else
                  {
                    v28 = 8 * v27;
                  }
                  *(_QWORD *)(a5 + 152) += v28;
                  break;
                case 2:
                  *(_QWORD *)(a5 + 152) += (unsigned int)(8 * v19 + 8);
                  break;
                case 3:
                  v30 = *(_QWORD *)(a5 + 8LL * (*((_BYTE *)v15 + 3) & 0xF) + 120);
                  *(_QWORD *)(a5 + 152) = v30;
                  *(_QWORD *)(a5 + 152) = v30 - (*((_BYTE *)v15 + 3) & 0xF0);
                  break;
                case 5:
                  v16 = (unsigned int)(v16 + 2);
                  v9 = v10
                     + ((unsigned __int64)*((unsigned __int16 *)v15 + v16 + 2) << 16)
                     + *((unsigned __int16 *)v15 + (unsigned int)(v16 - 1) + 2);
                  if ( a2 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v10 + (unsigned __int8)*((_WORD *)v15 + (unsigned int)(v16 - 1) + 2)) & 3) != 0 )
                  {
                    goto LABEL_87;
                  }
                  if ( *(_QWORD *)a8 && (v9 < **(_QWORD **)a8 || v9 > **(_QWORD **)(a8 + 8) - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(a5 + 8 * v19 + 120) = *(_QWORD *)v9;
                  break;
                case 6:
                  LODWORD(v16) = v16 + 1;
                  break;
                case 7:
                  LODWORD(v16) = v16 + 2;
                  break;
                case 8:
                  v16 = (unsigned int)(v16 + 1);
                  v31 = v10 + 16LL * *((unsigned __int16 *)v15 + v16 + 2);
                  if ( a2 <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
                    goto LABEL_87;
                  if ( *(_QWORD *)a8 && (v31 < **(_QWORD **)a8 || v31 > **(_QWORD **)(a8 + 8) - 16LL) )
                    return 3221225512LL;
                  v32 = 2LL * (unsigned int)v19;
                  *(_QWORD *)(a5 + 8 * v32 + 416) = *(_QWORD *)v31;
                  *(_QWORD *)(a5 + 8 * v32 + 424) = *(_QWORD *)(v31 + 8);
                  v33 = *(_QWORD *)(a8 + 16);
                  if ( v33 )
                    *(_QWORD *)(v33 + 8 * v19) = v31;
                  break;
                case 9:
                  v16 = (unsigned int)(v16 + 2);
                  v9 = v10
                     + ((unsigned __int64)*((unsigned __int16 *)v15 + v16 + 2) << 16)
                     + *((unsigned __int16 *)v15 + (unsigned int)(v16 - 1) + 2);
                  if ( a2 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v10 + (unsigned __int8)*((_WORD *)v15 + (unsigned int)(v16 - 1) + 2)) & 3) != 0 )
                  {
                    goto LABEL_87;
                  }
                  if ( *(_QWORD *)a8 && (v9 < **(_QWORD **)a8 || v9 > **(_QWORD **)(a8 + 8) - 16LL) )
                    return 3221225512LL;
                  v40 = 2LL * (unsigned int)v19;
                  *(_QWORD *)(a5 + 8 * v40 + 416) = *(_QWORD *)v9;
                  *(_QWORD *)(a5 + 8 * v40 + 424) = *(_QWORD *)(v9 + 8);
                  v41 = *(_QWORD *)(a8 + 16);
                  if ( v41 )
                    *(_QWORD *)(v41 + 8 * v19) = v9;
                  break;
                case 0xA:
                  v36 = *(_QWORD *)(a5 + 152);
                  v37 = 32LL;
                  if ( !(_DWORD)v19 )
                    v37 = 24LL;
                  v38 = v36 + v37;
                  v13 = 1;
                  v9 = v36 + 8;
                  if ( !(_DWORD)v19 )
                    v9 = *(_QWORD *)(a5 + 152);
                  if ( a2 <= 0x7FFFFFFEFFFFLL && (v9 & 3) != 0 )
                    goto LABEL_87;
                  v39 = *(unsigned __int64 **)a8;
                  if ( *(_QWORD *)a8 && (v9 < *v39 || v9 > **(_QWORD **)(a8 + 8) - 8LL) )
                    return 3221225512LL;
                  if ( a2 > 0x7FFFFFFEFFFFLL )
                    goto LABEL_73;
                  if ( (v38 & 3) != 0 )
                    goto LABEL_87;
                  v39 = *(unsigned __int64 **)a8;
LABEL_73:
                  if ( v39 && (v38 < *v39 || v38 > **(_QWORD **)(a8 + 8) - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)v9;
                  *(_QWORD *)(a5 + 152) = *(_QWORD *)v38;
                  break;
                default:
                  goto LABEL_103;
              }
            }
          }
          else
          {
            v20 = *(_QWORD *)(a5 + 152);
            if ( a2 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
              goto LABEL_87;
            if ( *(_QWORD *)a8 && (v20 < **(_QWORD **)a8 || v20 > **(_QWORD **)(a8 + 8) - 8LL) )
              return 3221225512LL;
            *(_QWORD *)(a5 + 8 * v19 + 120) = *(_QWORD *)v20;
            v21 = *(_QWORD *)(a8 + 16);
            if ( v21 )
              *(_QWORD *)(v21 + 8 * v19 + 128) = v20;
            *(_QWORD *)(a5 + 152) += 8LL;
          }
          LODWORD(v16) = v16 + 1;
        }
        v10 = a3;
        v17 = *((_BYTE *)v15 + 2);
      }
      while ( (unsigned int)v16 < v17 );
      v12 = v44;
      v9 = 0LL;
    }
    if ( (*(_BYTE *)v15 & 0x20) == 0 )
      break;
    v29 = v17;
    if ( (v17 & 1) != 0 )
      v29 = v17 + 1;
    a4 = (_DWORD *)((char *)v15 + 2 * v29 + 4);
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_87;
    a1 = v43;
    v44 = ++v12;
    if ( v12 > 0x20 )
LABEL_103:
      RtlRaiseStatus(-1073741569);
  }
  if ( v13 )
  {
    if ( !a6 )
    {
LABEL_28:
      *a7 = a4;
      return 0LL;
    }
    v35 = &RtlpSafeMachineFrameEntries;
    while ( v15 != *v35 )
    {
      LODWORD(v9) = v9 + 1;
      ++v35;
      if ( (unsigned int)v9 >= 3 )
        goto LABEL_26;
    }
    v13 = 0;
LABEL_26:
    if ( a6 )
      *a6 = v13;
    goto LABEL_28;
  }
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    v34 = *(_QWORD *)(a5 + 152);
    if ( (v34 & 3) != 0 )
LABEL_87:
      ExRaiseDatatypeMisalignment();
  }
  if ( !*(_QWORD *)a8 || (v22 = *(_QWORD *)(a5 + 152), v22 >= **(_QWORD **)a8) && v22 <= **(_QWORD **)(a8 + 8) - 8LL )
  {
    v23 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v23;
    *(_QWORD *)(a5 + 152) = v23 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a5 + 1232, 11LL, 0xFFFFF780000003D8uLL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
    goto LABEL_26;
  }
  return 3221225512LL;
}
