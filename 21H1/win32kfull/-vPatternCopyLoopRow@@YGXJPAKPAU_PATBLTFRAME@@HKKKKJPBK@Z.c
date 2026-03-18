/*
 * XREFs of ?vPatternCopyLoopRow@@YGXJPAKPAU_PATBLTFRAME@@HKKKKJPBK@Z @ 0x22EB22
 * Callers:
 *     ?vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DACA (-vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vPatternCopyLoopRow(
        ULONG *a1@<edx>,
        int a2@<ecx>,
        int a3,
        unsigned int *a4,
        struct _PATBLTFRAME *a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        const unsigned int *a12)
{
  int v13; // ecx
  ULONG v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax

  v13 = (a2 - *(_DWORD *)(a3 + 24)) & 7;
  v14 = *(_DWORD *)(a10 + 4 * v13);
  switch ( (unsigned int)a4 )
  {
    case 0u:
      *a1 = a6 & v14 | a8 & *a1;
      RtlFillMemoryUlong(a1 + 1, 4 * a9, v14);
      v15 = (unsigned int)a5 & v14 | a7 & a1[a9 + 1];
      goto LABEL_3;
    case 1u:
      *a1 = a6 & v14 | a8 & *a1;
      RtlFillMemoryUlong(a1 + 1, 4 * a9, v14);
      return;
    case 2u:
      RtlFillMemoryUlong(a1, 4 * a9, *(_DWORD *)(a10 + 4 * v13));
      v16 = (unsigned int)a5 & v14 | a7 & a1[a9];
      goto LABEL_7;
    case 3u:
      RtlFillMemoryUlong(a1, 4 * a9, *(_DWORD *)(a10 + 4 * v13));
      return;
    case 4u:
      *a1 = a6 & v14 | a8 & *a1;
      switch ( a9 )
      {
        case 1u:
          goto LABEL_18;
        case 2u:
          goto LABEL_17;
        case 3u:
          goto LABEL_16;
        case 4u:
          goto LABEL_15;
        case 5u:
          goto LABEL_14;
        case 6u:
          goto LABEL_13;
        case 7u:
          goto LABEL_12;
        case 8u:
          goto LABEL_11;
        case 9u:
          a1[9] = v14;
LABEL_11:
          a1[8] = v14;
LABEL_12:
          a1[7] = v14;
LABEL_13:
          a1[6] = v14;
LABEL_14:
          a1[5] = v14;
LABEL_15:
          a1[4] = v14;
LABEL_16:
          a1[3] = v14;
LABEL_17:
          a1[2] = v14;
LABEL_18:
          a1[1] = v14;
          break;
        default:
          break;
      }
      v15 = (unsigned int)a5 & v14 | a7 & a1[a9 + 1];
LABEL_3:
      a1[a9 + 1] = v15;
      break;
    case 5u:
      *a1 = a6 & v14 | a8 & *a1;
      switch ( a9 )
      {
        case 1u:
          goto LABEL_29;
        case 2u:
          goto LABEL_28;
        case 3u:
          goto LABEL_27;
        case 4u:
          goto LABEL_26;
        case 5u:
          goto LABEL_25;
        case 6u:
          goto LABEL_24;
        case 7u:
          goto LABEL_23;
        case 8u:
          goto LABEL_22;
        case 9u:
          a1[9] = v14;
LABEL_22:
          a1[8] = v14;
LABEL_23:
          a1[7] = v14;
LABEL_24:
          a1[6] = v14;
LABEL_25:
          a1[5] = v14;
LABEL_26:
          a1[4] = v14;
LABEL_27:
          a1[3] = v14;
LABEL_28:
          a1[2] = v14;
          goto LABEL_29;
        default:
          return;
      }
    case 6u:
      switch ( a9 )
      {
        case 1u:
          goto LABEL_39;
        case 2u:
          goto LABEL_38;
        case 3u:
          goto LABEL_37;
        case 4u:
          goto LABEL_36;
        case 5u:
          goto LABEL_35;
        case 6u:
          goto LABEL_34;
        case 7u:
          goto LABEL_33;
        case 8u:
          goto LABEL_32;
        case 9u:
          a1[8] = v14;
LABEL_32:
          a1[7] = v14;
LABEL_33:
          a1[6] = v14;
LABEL_34:
          a1[5] = v14;
LABEL_35:
          a1[4] = v14;
LABEL_36:
          a1[3] = v14;
LABEL_37:
          a1[2] = v14;
LABEL_38:
          a1[1] = v14;
LABEL_39:
          *a1 = v14;
          break;
        default:
          break;
      }
      v16 = (unsigned int)a5 & v14 | a7 & a1[a9];
LABEL_7:
      a1[a9] = v16;
      break;
    case 7u:
      switch ( a9 )
      {
        case 1u:
          goto LABEL_50;
        case 2u:
          goto LABEL_49;
        case 3u:
          goto LABEL_48;
        case 4u:
          goto LABEL_47;
        case 5u:
          goto LABEL_46;
        case 6u:
          goto LABEL_45;
        case 7u:
          goto LABEL_44;
        case 8u:
          goto LABEL_43;
        case 9u:
          a1[8] = v14;
LABEL_43:
          a1[7] = v14;
LABEL_44:
          a1[6] = v14;
LABEL_45:
          a1[5] = v14;
LABEL_46:
          a1[4] = v14;
LABEL_47:
          a1[3] = v14;
LABEL_48:
          a1[2] = v14;
LABEL_49:
          a1[1] = v14;
LABEL_50:
          *a1 = v14;
          break;
        default:
          return;
      }
      break;
    case 8u:
      v17 = a1[1] & a7;
      *a1 = a6 & v14 | a8 & *a1;
      v14 = v17 | (unsigned int)a5 & v14;
LABEL_29:
      a1[1] = v14;
      break;
    case 9u:
      *a1 = a6 & v14 | a8 & *a1;
      break;
    default:
      return;
  }
}
