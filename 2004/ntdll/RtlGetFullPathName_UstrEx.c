/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18001D890
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DAA0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        _BYTE *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r12
  _QWORD *v12; // r13
  __int64 *v13; // r15
  _WORD *StringRoutine; // rsi
  unsigned __int16 v15; // bx
  _WORD *v16; // r8
  unsigned int FullPathName_Ustr; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  StringRoutine = 0LL;
  LODWORD(a5) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v19 = -1073741811;
      goto LABEL_22;
    }
    v15 = *(_WORD *)(a2 + 2);
    v16 = *(_WORD **)(a2 + 8);
    v30 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, v15, v16, &v29, a6, (__int64)&a5);
    LOWORD(v18) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( a2 && FullPathName_Ustr < (unsigned int)a8 )
      {
        *(_WORD *)a2 = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v29 )
            v24 = (v29 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v24 = 0LL;
          *v13 = v24;
        }
        if ( a4 )
          *a4 = a2;
        v19 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v30;
          *(_WORD *)a3 = FullPathName_Ustr;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)FullPathName_Ustr >> 1)) = 0;
          if ( v13 )
          {
            if ( v29 )
              v26 = (v29 - v11) >> 1;
            else
              v26 = 0LL;
            *v13 = v26;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v19 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)FullPathName_Ustr + 2 > 0xFFFE )
        {
LABEL_56:
          v19 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v21 = v18 + 2;
            v22 = v21;
            StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v21);
            if ( !StringRoutine )
            {
              v19 = -1073741801;
              goto LABEL_18;
            }
            v23 = RtlGetFullPathName_Ustr(a1, (unsigned int)v21 - 2, StringRoutine, &v29, a6, (__int64)&a5);
            v18 = v23;
            if ( !v23 )
              goto LABEL_47;
            if ( v23 <= (unsigned __int64)(v22 - 2) )
              break;
            NtdllpFreeStringRoutine(StringRoutine);
            if ( (unsigned __int64)(v18 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v29 )
              v27 = (v29 - (__int64)StringRoutine) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          StringRoutine[(unsigned __int64)(unsigned int)v18 >> 1] = 0;
          *(_QWORD *)(a3 + 8) = StringRoutine;
          *(_WORD *)a3 = v18;
          *(_WORD *)(a3 + 2) = v22;
          if ( a4 )
            *a4 = a3;
          v19 = 0;
        }
        StringRoutine = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v19 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
LABEL_22:
    *a7 = (_DWORD)a5;
    return v19;
  }
  v15 = 520;
  v30 = 520LL;
  v25 = NtdllpAllocateStringRoutine(520LL);
  v11 = v25;
  if ( v25 )
  {
    v16 = (_WORD *)v25;
    goto LABEL_11;
  }
  return 3221225495LL;
}
