/*
 * XREFs of ?vPatternCopyLoop@@YGXPAU_RECTL@@PAKPAU_PATBLTFRAME@@HKKKKJJJPBK3@Z @ 0x22E796
 * Callers:
 *     ?vPatCpyRect1_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D41E (-vPatCpyRect1_8x8@@YGXPAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRect4_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D5D4 (-vPatCpyRect4_8x8@@YGXPAU_PATBLTFRAME@@H@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vPatternCopyLoop(
        unsigned int *a1@<edx>,
        int a2@<ecx>,
        struct _RECTL *a3,
        unsigned int *a4,
        struct _PATBLTFRAME *a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        ULONG *a12,
        ULONG *a13,
        const unsigned int *a14,
        const unsigned int *a15)
{
  unsigned int v16; // ecx
  struct _RECTL *v17; // edx
  int i; // ebx
  unsigned int *v19; // edi
  int v20; // ebx
  ULONG v21; // esi
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // edx
  unsigned int *v25; // ecx
  ULONG *v26; // edi
  ULONG *v27; // edi
  unsigned int v28; // edx
  unsigned int *v29; // ecx
  ULONG *v30; // edi
  ULONG *v31; // edi
  int v32; // ecx
  unsigned int v33; // esi
  int v34; // esi
  int v35; // [esp+Ch] [ebp-1Ch]
  int v36; // [esp+18h] [ebp-10h]
  ULONG *v38; // [esp+20h] [ebp-8h]
  unsigned int Length; // [esp+24h] [ebp-4h]
  struct _RECTL *v40; // [esp+30h] [ebp+8h]

  v16 = a9;
  Length = 4 * a9;
  v17 = *(struct _RECTL **)(a2 + 4);
  i = 8;
  v36 = a2;
  v38 = &a12[((unsigned int)v17 - a3[1].right) & 7];
  if ( *(_DWORD *)(a2 + 12) - (int)v17 >= 8 )
    goto LABEL_3;
  for ( i = *(_DWORD *)(a2 + 12) - (_DWORD)v17; i; i = v35 )
  {
LABEL_3:
    v19 = a1;
    v35 = i - 1;
    a1 = (unsigned int *)((char *)a1 + a10);
    v20 = (*(_DWORD *)(v36 + 12) - (int)v17 + 7) >> 3;
    v17 = (struct _RECTL *)((char *)v17 + 1);
    v40 = v17;
    v21 = *v38++;
    if ( v38 == a13 )
      v38 = a12;
    switch ( (unsigned int)a4 )
    {
      case 0u:
        v22 = a6 & v21;
        do
        {
          *v19 = v22 | a8 & *v19;
          RtlFillMemoryUlong(v19 + 1, Length, v21);
          v19[a9 + 1] = (unsigned int)a5 & v21 | a7 & v19[a9 + 1];
          v19 = (unsigned int *)((char *)v19 + a11);
          v22 = a6 & v21;
          --v20;
        }
        while ( v20 );
        goto LABEL_8;
      case 1u:
        v23 = a6 & v21;
        do
        {
          *v19 = v23 | a8 & *v19;
          RtlFillMemoryUlong(v19 + 1, Length, v21);
          v19 = (unsigned int *)((char *)v19 + a11);
          v23 = a6 & v21;
          --v20;
        }
        while ( v20 );
        goto LABEL_8;
      case 2u:
        do
        {
          RtlFillMemoryUlong(v19, Length, v21);
          v16 = a9;
          v19[a9] = (unsigned int)a5 & v21 | a7 & v19[a9];
          v19 = (unsigned int *)((char *)v19 + a11);
          --v20;
        }
        while ( v20 );
        goto LABEL_9;
      case 3u:
        do
        {
          RtlFillMemoryUlong(v19, Length, v21);
          v19 = (unsigned int *)((char *)v19 + a11);
          --v20;
        }
        while ( v20 );
        goto LABEL_8;
      case 4u:
        v24 = v16 - 1;
        v25 = &v19[v16 + 1];
        v26 = v19 + 8;
        do
        {
          *(v26 - 8) = a6 & v21 | a8 & *(v26 - 8);
          switch ( v24 )
          {
            case 0u:
              goto LABEL_27;
            case 1u:
              goto LABEL_26;
            case 2u:
              goto LABEL_25;
            case 3u:
              goto LABEL_24;
            case 4u:
              goto LABEL_23;
            case 5u:
              goto LABEL_22;
            case 6u:
              goto LABEL_21;
            case 7u:
              goto LABEL_20;
            case 8u:
              v26[1] = v21;
LABEL_20:
              *v26 = v21;
LABEL_21:
              *(v26 - 1) = v21;
LABEL_22:
              *(v26 - 2) = v21;
LABEL_23:
              *(v26 - 3) = v21;
LABEL_24:
              *(v26 - 4) = v21;
LABEL_25:
              *(v26 - 5) = v21;
LABEL_26:
              *(v26 - 6) = v21;
LABEL_27:
              *(v26 - 7) = v21;
              break;
            default:
              break;
          }
          v26 = (ULONG *)((char *)v26 + a11);
          *v25 = (unsigned int)a5 & v21 | a7 & *v25;
          v25 = (unsigned int *)((char *)v25 + a11);
          --v20;
        }
        while ( v20 );
        goto LABEL_8;
      case 5u:
        v27 = v19 + 8;
        do
        {
          *(v27 - 8) = a6 & v21 | *(v27 - 8) & a8;
          switch ( a9 )
          {
            case 1u:
              goto LABEL_40;
            case 2u:
              goto LABEL_39;
            case 3u:
              goto LABEL_38;
            case 4u:
              goto LABEL_37;
            case 5u:
              goto LABEL_36;
            case 6u:
              goto LABEL_35;
            case 7u:
              goto LABEL_34;
            case 8u:
              goto LABEL_33;
            case 9u:
              v27[1] = v21;
LABEL_33:
              *v27 = v21;
LABEL_34:
              *(v27 - 1) = v21;
LABEL_35:
              *(v27 - 2) = v21;
LABEL_36:
              *(v27 - 3) = v21;
LABEL_37:
              *(v27 - 4) = v21;
LABEL_38:
              *(v27 - 5) = v21;
LABEL_39:
              *(v27 - 6) = v21;
LABEL_40:
              *(v27 - 7) = v21;
              break;
            default:
              break;
          }
          v27 = (ULONG *)((char *)v27 + a11);
          --v20;
        }
        while ( v20 );
        goto LABEL_8;
      case 6u:
        v28 = v16 - 1;
        v29 = &v19[v16];
        v30 = v19 + 7;
        do
        {
          switch ( v28 )
          {
            case 0u:
              goto LABEL_53;
            case 1u:
              goto LABEL_52;
            case 2u:
              goto LABEL_51;
            case 3u:
              goto LABEL_50;
            case 4u:
              goto LABEL_49;
            case 5u:
              goto LABEL_48;
            case 6u:
              goto LABEL_47;
            case 7u:
              goto LABEL_46;
            case 8u:
              v30[1] = v21;
LABEL_46:
              *v30 = v21;
LABEL_47:
              *(v30 - 1) = v21;
LABEL_48:
              *(v30 - 2) = v21;
LABEL_49:
              *(v30 - 3) = v21;
LABEL_50:
              *(v30 - 4) = v21;
LABEL_51:
              *(v30 - 5) = v21;
LABEL_52:
              *(v30 - 6) = v21;
LABEL_53:
              *(v30 - 7) = v21;
              break;
            default:
              break;
          }
          v30 = (ULONG *)((char *)v30 + a11);
          *v29 = (unsigned int)a5 & v21 | a7 & *v29;
          v29 = (unsigned int *)((char *)v29 + a11);
          --v20;
        }
        while ( v20 );
LABEL_8:
        v16 = a9;
LABEL_9:
        v17 = v40;
        break;
      case 7u:
        v31 = v19 + 7;
        do
        {
          switch ( v16 )
          {
            case 1u:
              goto LABEL_66;
            case 2u:
              goto LABEL_65;
            case 3u:
              goto LABEL_64;
            case 4u:
              goto LABEL_63;
            case 5u:
              goto LABEL_62;
            case 6u:
              goto LABEL_61;
            case 7u:
              goto LABEL_60;
            case 8u:
              goto LABEL_59;
            case 9u:
              v31[1] = v21;
LABEL_59:
              *v31 = v21;
LABEL_60:
              *(v31 - 1) = v21;
LABEL_61:
              *(v31 - 2) = v21;
LABEL_62:
              *(v31 - 3) = v21;
LABEL_63:
              *(v31 - 4) = v21;
LABEL_64:
              *(v31 - 5) = v21;
LABEL_65:
              *(v31 - 6) = v21;
LABEL_66:
              *(v31 - 7) = v21;
              break;
            default:
              break;
          }
          v31 = (ULONG *)((char *)v31 + a11);
          --v20;
        }
        while ( v20 );
        break;
      case 8u:
        v32 = a6 & v21;
        v33 = (unsigned int)a5 & v21;
        do
        {
          *v19 = v32 | a8 & *v19;
          v19[1] = v33 | a7 & v19[1];
          v19 = (unsigned int *)((char *)v19 + a11);
          --v20;
        }
        while ( v20 );
        v16 = a9;
        break;
      case 9u:
        v34 = a6 & v21;
        do
        {
          *v19 = v34 | a8 & *v19;
          v19 = (unsigned int *)((char *)v19 + a11);
          --v20;
        }
        while ( v20 );
        break;
      default:
        continue;
    }
  }
}
