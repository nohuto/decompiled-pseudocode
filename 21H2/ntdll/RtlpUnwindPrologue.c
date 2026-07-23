/*
 * XREFs of RtlpUnwindPrologue @ 0x1800314A0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1800725D0 (RtlLocateExtendedFeature2.c)
 *     RtlpUnwindOpSlots @ 0x180088B78 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned int v9; // r8d
  __int64 v11; // rax
  _BYTE *v12; // rdi
  __int64 v13; // rbx
  char v14; // r12
  unsigned int v15; // ebp
  unsigned __int8 v16; // cl
  _BYTE *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // edx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 ExtendedFeature2; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // r9
  _QWORD *v36; // rax
  unsigned __int64 v37; // rcx
  _QWORD *v38; // r9
  _QWORD *v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  int v43; // [rsp+68h] [rbp+10h]
  unsigned int v44; // [rsp+78h] [rbp+20h]

  v43 = a2;
  v9 = 0;
  v44 = 0;
  v11 = a1;
  while ( 1 )
  {
    v12 = (_BYTE *)(v11 + (unsigned int)a4[2]);
    v13 = 0LL;
    v14 = 0;
    v15 = a2 - *a4 - v11;
    v16 = v12[2];
    if ( v16 )
    {
      do
      {
        v17 = &v12[2 * v13];
        v18 = (unsigned __int8)v17[5] >> 4;
        if ( v15 < (unsigned __int8)v17[4] )
        {
          v13 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v17 + 2), v17) + (unsigned int)v13;
        }
        else
        {
          if ( (v12[2 * v13 + 5] & 0xF) != 0 )
          {
            if ( (v12[2 * v13 + 5] & 0xF) == 4 )
            {
              v13 = (unsigned int)(v13 + 1);
              v23 = (_QWORD *)(a3 + 8LL * *(unsigned __int16 *)&v12[2 * v13 + 4]);
              if ( *(_QWORD *)a8
                && ((unsigned __int64)v23 < **(_QWORD **)a8 || (unsigned __int64)v23 > **(_QWORD **)(a8 + 8) - 8LL) )
              {
                return 3221225512LL;
              }
              *(_QWORD *)(a5 + 8 * v18 + 120) = *v23;
              v24 = *(_QWORD *)(a8 + 16);
              if ( v24 )
                *(_QWORD *)(v24 + 8 * v18 + 128) = v23;
            }
            else
            {
              switch ( v12[2 * v13 + 5] & 0xF )
              {
                case 1:
                  v13 = (unsigned int)(v13 + 1);
                  v25 = *(unsigned __int16 *)&v12[2 * v13 + 4];
                  if ( (_DWORD)v18 )
                  {
                    v13 = (unsigned int)(v13 + 1);
                    v26 = (*(unsigned __int16 *)&v12[2 * v13 + 4] << 16) + v25;
                  }
                  else
                  {
                    v26 = 8 * v25;
                  }
                  *(_QWORD *)(a5 + 152) += v26;
                  break;
                case 2:
                  *(_QWORD *)(a5 + 152) += (unsigned int)(8 * v18 + 8);
                  break;
                case 3:
                  v28 = *(_QWORD *)(a5 + 8LL * (v12[3] & 0xF) + 120);
                  *(_QWORD *)(a5 + 152) = v28;
                  *(_QWORD *)(a5 + 152) = v28 - (v12[3] & 0xF0);
                  break;
                case 5:
                  v13 = (unsigned int)(v13 + 2);
                  v38 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v12[2 * v13 + 4] << 16)
                                 + a3
                                 + *(unsigned __int16 *)&v12[2 * (unsigned int)(v13 - 1) + 4]);
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v38 < **(_QWORD **)a8 || (unsigned __int64)v38 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  *(_QWORD *)(a5 + 8 * v18 + 120) = *v38;
                  break;
                case 6:
                  LODWORD(v13) = v13 + 1;
                  break;
                case 7:
                  LODWORD(v13) = v13 + 2;
                  break;
                case 8:
                  v13 = (unsigned int)(v13 + 1);
                  v31 = (_QWORD *)(a3 + 16LL * *(unsigned __int16 *)&v12[2 * v13 + 4]);
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v31 < **(_QWORD **)a8 || (unsigned __int64)v31 > **(_QWORD **)(a8 + 8) - 16LL) )
                  {
                    return 3221225512LL;
                  }
                  v32 = 2LL * (unsigned int)v18;
                  *(_QWORD *)(a5 + 8 * v32 + 416) = *v31;
                  *(_QWORD *)(a5 + 8 * v32 + 424) = v31[1];
                  v33 = *(_QWORD *)(a8 + 16);
                  if ( v33 )
                    *(_QWORD *)(v33 + 8 * v18) = v31;
                  break;
                case 9:
                  v13 = (unsigned int)(v13 + 2);
                  v39 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v12[2 * v13 + 4] << 16)
                                 + a3
                                 + *(unsigned __int16 *)&v12[2 * (unsigned int)(v13 - 1) + 4]);
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v39 < **(_QWORD **)a8 || (unsigned __int64)v39 > **(_QWORD **)(a8 + 8) - 16LL) )
                  {
                    return 3221225512LL;
                  }
                  v40 = 2LL * (unsigned int)v18;
                  *(_QWORD *)(a5 + 8 * v40 + 416) = *v39;
                  *(_QWORD *)(a5 + 8 * v40 + 424) = v39[1];
                  v41 = *(_QWORD *)(a8 + 16);
                  if ( v41 )
                    *(_QWORD *)(v41 + 8 * v18) = v39;
                  break;
                case 0xA:
                  v34 = *(_QWORD **)(a5 + 152);
                  v14 = 1;
                  v35 = v34 + 3;
                  if ( (_DWORD)v18 )
                  {
                    ++v34;
                    ++v35;
                  }
                  v36 = *(_QWORD **)a8;
                  if ( *(_QWORD *)a8 )
                  {
                    if ( (unsigned __int64)v34 < *v36 )
                      return 3221225512LL;
                    v37 = **(_QWORD **)(a8 + 8) - 8LL;
                    if ( (unsigned __int64)v34 > v37 || (unsigned __int64)v35 < *v36 || (unsigned __int64)v35 > v37 )
                      return 3221225512LL;
                  }
                  *(_QWORD *)(a5 + 248) = *v34;
                  *(_QWORD *)(a5 + 152) = *v35;
                  break;
                default:
                  goto LABEL_71;
              }
            }
          }
          else
          {
            v19 = *(_QWORD **)(a5 + 152);
            if ( *(_QWORD *)a8
              && ((unsigned __int64)v19 < **(_QWORD **)a8 || (unsigned __int64)v19 > **(_QWORD **)(a8 + 8) - 8LL) )
            {
              return 3221225512LL;
            }
            *(_QWORD *)(a5 + 8 * v18 + 120) = *v19;
            v20 = *(_QWORD *)(a8 + 16);
            if ( v20 )
              *(_QWORD *)(v20 + 8 * v18 + 128) = v19;
            *(_QWORD *)(a5 + 152) += 8LL;
          }
          v13 = (unsigned int)(v13 + 1);
        }
        v16 = v12[2];
      }
      while ( (unsigned int)v13 < v16 );
      a2 = v43;
      v9 = v44;
    }
    if ( (*v12 & 0x20) == 0 )
      break;
    v30 = v16;
    if ( (v16 & 1) != 0 )
      v30 = (unsigned int)v16 + 1;
    v44 = ++v9;
    a4 = &v12[2 * v30 + 4];
    v11 = a1;
    if ( v9 > 0x20 )
LABEL_71:
      RtlRaiseStatus(-1073741569);
  }
  if ( !v14 )
  {
    if ( *(_QWORD *)a8 )
    {
      v27 = *(_QWORD *)(a5 + 152);
      if ( v27 < **(_QWORD **)a8 || v27 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    v21 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v21;
    *(_QWORD *)(a5 + 152) = v21 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a5 + 1232, 11LL, 2147353560LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
  }
  if ( a6 )
    *a6 = v14;
  *a7 = a4;
  return 0LL;
}
