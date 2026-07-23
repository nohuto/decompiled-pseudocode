/*
 * XREFs of GetPrintableOperandValue @ 0x14066849C
 * Callers:
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x14066849C (GetPrintableOperandValue.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ULongAddStringSize @ 0x1406683F8 (ULongAddStringSize.c)
 *     GetPrintableOperandValue @ 0x14066849C (GetPrintableOperandValue.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x140926240 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x140926B4C (SddlpReAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int PrintableOperandValue; // edi
  unsigned __int8 v13; // al
  unsigned int v14; // r13d
  _WORD *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned int v18; // r12d
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  wchar_t *v23; // rax
  unsigned int v24; // r13d
  _WORD *v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r8d
  __int64 v28; // rdx
  char *v29; // r10
  unsigned int v30; // ecx
  _WORD *v31; // r8
  size_t v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned int v36; // r12d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  _WORD *v40; // rax
  unsigned int v41; // r11d
  __int64 v42; // r13
  int v43; // r9d
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // r13
  char v47; // r12
  char v48; // bl
  __int64 v49; // rax
  wchar_t *v50; // r10
  __int16 v51; // ax
  wchar_t *v52; // rdx
  __int64 v53; // rcx
  wchar_t v54; // ax
  wchar_t *v55; // rax
  __int64 v56; // r9
  wchar_t v57; // ax
  wchar_t v58; // ax
  int v59; // [rsp+20h] [rbp-E0h]
  unsigned int v60; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v62; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+54h] [rbp-ACh]
  unsigned int v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  int v68[2]; // [rsp+78h] [rbp-88h]
  __int64 i; // [rsp+80h] [rbp-80h]
  wchar_t pszFormat[12]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid1[80]; // [rsp+A0h] [rbp-60h] BYREF

  v67 = a6;
  v66 = a7;
  *(_QWORD *)v68 = a5;
  PrintableOperandValue = 0;
  P = 0LL;
  v62 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1;
    if ( !*a1 )
    {
LABEL_92:
      PrintableOperandValue = 1336;
      goto LABEL_12;
    }
    if ( v13 > 4u )
    {
      switch ( v13 )
      {
        case 0x10u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v14 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( a2 - 5 >= v14 )
            {
              if ( v14 + 6 >= v14 )
              {
                v15 = (_WORD *)SddlpAlloc(v14 + 6);
                *(_QWORD *)a3 = v15;
                if ( v15 )
                {
                  *v15 = 34;
                  memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v14);
                  v16 = (unsigned __int64)v14 >> 1;
                  *(_WORD *)(*(_QWORD *)a3 + 2 * v16 + 2) = 34;
                  *(_WORD *)(*(_QWORD *)a3 + 2 * v16 + 4) = 0;
                  *a4 += v14;
                  goto LABEL_12;
                }
                break;
              }
              return 534;
            }
          }
          return 1336;
        case 0x18u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v36 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 < v36 || !v36 )
            return 1336;
          v37 = 2LL * v36;
          if ( v37 > 0xFFFFFFFF )
            return 534;
          if ( (int)v37 + 2 < (unsigned int)v37 )
            return 534;
          v38 = 2LL * (unsigned int)(v37 + 2);
          if ( v38 > 0xFFFFFFFF )
            return 534;
          v39 = (unsigned int)v38;
          v40 = (_WORD *)SddlpAlloc((unsigned int)v38);
          *(_QWORD *)a3 = v40;
          if ( v40 )
          {
            v41 = 0;
            *v40 = 35;
            v42 = 0LL;
            do
            {
              v43 = 2 * v41;
              v44 = v42 + *a4;
              ++v41;
              ++v42;
              v45 = (unsigned __int8)a1[v44];
              *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v43 + 1)) = a0123456789abcd[v45 >> 4];
              *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v43 + 2)) = a0123456789abcd[v45 & 0xF];
            }
            while ( v41 < v36 );
            PrintableOperandValue = 0;
            *(_WORD *)(*(_QWORD *)a3 + 2 * (v39 >> 1) - 2) = 0;
            *a4 += v36;
            goto LABEL_12;
          }
          break;
        case 0x50u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v24 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( !v24 || a2 - 5 < v24 )
            return 1336;
          v65 = 6LL;
          v25 = (_WORD *)SddlpAlloc(6uLL);
          *(_QWORD *)a3 = v25;
          if ( v25 )
          {
            *v25 = 123;
            v26 = 0;
            v27 = *a4;
            v60 = *a4;
            v63 = 0;
            v28 = v27;
            for ( i = v27; ; v28 = i )
            {
              v29 = &a1[v28 + v26];
              if ( *v29 == 80 )
                break;
              PrintableOperandValue = GetPrintableOperandValue(
                                        (_DWORD)v29,
                                        a2 - v26 - v27,
                                        (unsigned int)&P,
                                        (_DWORD)a4,
                                        *(__int64 *)v68,
                                        v67,
                                        v66,
                                        a8);
              if ( PrintableOperandValue )
                goto LABEL_12;
              v63 += *a4;
              if ( (int)ULongAddStringSize(v65, (__int64)P, (int *)&v62) < 0 )
                goto LABEL_30;
              v30 = v62 + 4;
              v64 = v62 + 4;
              if ( v62 + 4 < v62 )
                goto LABEL_30;
              v31 = *(_WORD **)a3;
              v62 += 4;
              v32 = v30;
              v33 = -1LL;
              do
                ++v33;
              while ( v31[v33] );
              v34 = SddlpReAlloc(2 * v33, v32, v31);
              *(_QWORD *)a3 = v34;
              if ( !v34 )
                goto LABEL_64;
              if ( RtlStringCchPrintfW(
                     (NTSTRSAFE_PWSTR)(v34 + 2 * (((unsigned __int64)(unsigned int)v65 >> 1) - 2)),
                     (unsigned __int64)(v64 - (unsigned int)v65 + 4) >> 1,
                     L"%ls, ",
                     P) < 0 )
                goto LABEL_28;
              if ( P )
                ExFreePoolWithTag(P, 0);
              v26 = v63;
              v27 = v60;
              P = 0LL;
              v65 = v64;
              if ( v24 <= v63 )
              {
                v35 = (unsigned __int64)v64 >> 1;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v35 - 8) = 125;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v35 - 6) = 0;
                *a4 = v60 + v24;
                goto LABEL_12;
              }
            }
            goto LABEL_92;
          }
          break;
        case 0x51u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v18 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( v18 > 0x44 || a2 - 5 < v18 )
            return 1336;
          memmove(Sid1, a1 + 5, v18);
          PrintableOperandValue = LocalGetStringForSid(Sid1, v59, a8);
          if ( PrintableOperandValue )
            goto LABEL_12;
          *a4 += v18;
          v19 = -1LL;
          do
            ++v19;
          while ( *((_WORD *)P + v19) );
          v20 = (unsigned int)(v19 + 6);
          if ( (unsigned int)v20 < (unsigned int)v19 || (v21 = 2 * v20, v21 > 0xFFFFFFFF) )
          {
LABEL_30:
            PrintableOperandValue = 534;
            goto LABEL_12;
          }
          v22 = (unsigned int)v21;
          v23 = (wchar_t *)SddlpAlloc((unsigned int)v21);
          *(_QWORD *)a3 = v23;
          if ( !v23 )
            break;
          if ( RtlStringCchPrintfW(v23, v22 >> 1, L"SID(%ls)", P) >= 0 )
            goto LABEL_12;
LABEL_28:
          PrintableOperandValue = 50;
          goto LABEL_12;
        default:
          goto LABEL_92;
      }
LABEL_64:
      PrintableOperandValue = 8;
      goto LABEL_12;
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v46 = *(_QWORD *)(a1 + 1);
    v47 = a1[9];
    v48 = a1[10];
    v49 = SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v49;
    v50 = (wchar_t *)v49;
    if ( !v49 )
      goto LABEL_64;
    if ( v47 == 1 )
    {
      v51 = 43;
    }
    else
    {
      if ( v47 != 2 )
      {
LABEL_68:
        v52 = pszFormat;
        v53 = 8LL;
        if ( v48 == 1 )
        {
          *v50++ = 48;
          do
          {
            if ( v53 == -2147483638 )
              break;
            v54 = *(wchar_t *)((char *)v52 + (char *)L"%I64o" - (char *)pszFormat);
            if ( !v54 )
              break;
            *v52++ = v54;
            --v53;
          }
          while ( v53 );
        }
        else if ( v48 == 3 )
        {
          *(_DWORD *)v50 = 7864368;
          v50 += 2;
          do
          {
            if ( v53 == -2147483638 )
              break;
            v57 = *(wchar_t *)((char *)v52 + (char *)L"%I64x" - (char *)pszFormat);
            if ( !v57 )
              break;
            *v52++ = v57;
            --v53;
          }
          while ( v53 );
        }
        else
        {
          do
          {
            if ( v53 == -2147483638 )
              break;
            v58 = *(wchar_t *)((char *)v52 + (char *)L"%I64u" - (char *)pszFormat);
            if ( !v58 )
              break;
            *v52++ = v58;
            --v53;
          }
          while ( v53 );
        }
        v55 = v52 - 1;
        if ( v53 )
          v55 = v52;
        *v55 = 0;
        if ( !v53 )
          goto LABEL_28;
        if ( v46 || v48 != 1 )
        {
          v56 = -v46;
          if ( v47 != 2 )
            v56 = v46;
          if ( RtlStringCchPrintfW(v50, 32 - (((__int64)v50 - *(_QWORD *)a3) >> 1), pszFormat, v56) < 0 )
            goto LABEL_28;
        }
        *a4 += 10;
LABEL_12:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return PrintableOperandValue;
      }
      v51 = 45;
    }
    *v50++ = v51;
    goto LABEL_68;
  }
  return 87LL;
}
