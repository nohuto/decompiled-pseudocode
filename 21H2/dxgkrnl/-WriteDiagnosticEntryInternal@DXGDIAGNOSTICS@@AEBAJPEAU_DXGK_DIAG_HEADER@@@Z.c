/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012520
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00124C0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00126E0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C0052AFC (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C0052BB0 (-ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ.c)
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0052DD8 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  DXGDIAGNOSTICS *v10; // r13
  unsigned __int64 v11; // rax
  __int64 i; // rcx
  int EventOrder; // eax
  unsigned int v14; // ecx
  int v15; // r12d
  __int64 v16; // rdx
  unsigned int v17; // eax
  void *v18; // rbx
  unsigned int v19; // r15d
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int DiagnosticsInternal; // ebx
  unsigned int v24; // r8d
  unsigned int v25; // ebx
  BOOL v26; // r8d
  unsigned int v27; // edx
  int v28; // [rsp+30h] [rbp-89h]
  unsigned __int8 v29[16]; // [rsp+38h] [rbp-81h] BYREF
  __int128 v30; // [rsp+48h] [rbp-71h]
  __m128i v31; // [rsp+58h] [rbp-61h]
  _OWORD v32[3]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v33; // [rsp+98h] [rbp-21h]
  _DWORD v34[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-11h]
  __int128 v36; // [rsp+B0h] [rbp-9h]
  __m128i v37; // [rsp+C0h] [rbp+7h]

  v33 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 9);
  v7 = a2;
  v8 = *((_DWORD *)this + 8);
  v9 = v6 + v5;
  if ( v8 <= v6 )
    v9 = *((_DWORD *)this + 9);
  v10 = 0LL;
  v28 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)this )
  {
    v21 = *((_QWORD *)this + 1);
    v10 = this;
    v28 = 1;
    if ( v21 )
    {
      if ( v4 == *(_DWORD *)(v21 + 4) && RtlCompareMemory((char *)a2 + 48, (const void *)(v21 + 48), v4 - 48) == v4 - 48 )
      {
        v7 = (struct _DXGK_DIAG_HEADER *)v32;
        v28 = 0;
        *((_QWORD *)&v32[0] + 1) = *((_QWORD *)a2 + 1);
        v22 = *((_QWORD *)this + 1);
        *(_QWORD *)&v32[0] = 0x380000001CLL;
        LODWORD(v33) = *(_DWORD *)(v22 + 40);
      }
    }
  }
  v11 = *((unsigned int *)this + 4);
  for ( i = *((_DWORD *)v7 + 1) + v9 - v8; ; i = v9 + *((_DWORD *)v7 + 1) - v8 )
  {
    if ( i + 48 < v11 )
    {
      *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
      EventOrder = WdLogGetEventOrder();
      v14 = *((_DWORD *)v7 + 1);
      v15 = 0;
      *((_DWORD *)v7 + 11) = EventOrder;
      v16 = *((unsigned int *)this + 9);
      v17 = *((_DWORD *)this + 4);
      v18 = (void *)(v16 + *((_QWORD *)this + 7));
      v19 = v16 + v14;
      if ( (unsigned int)v16 + v14 > v17 )
      {
        memmove((void *)(v16 + *((_QWORD *)this + 7)), v7, v17 - (unsigned int)v16);
        memmove(
          *((void **)this + 7),
          (char *)v7 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
          v19 - *((_DWORD *)this + 4));
        v15 = 1;
      }
      else
      {
        memmove(v18, v7, v14);
      }
      *((_DWORD *)this + 9) = v19 % *((_DWORD *)this + 4);
      if ( v28 )
      {
        if ( !v15 )
          *((_QWORD *)v10 + 1) = v18;
      }
      WriteDxgDiagnosticsEvent(a2);
      return 0LL;
    }
    *(_OWORD *)v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v29, 0LL);
    if ( DiagnosticsInternal < 0 )
    {
      WdLogSingleEntry3(3LL, v8, v7, *((unsigned int *)v7 + 1));
      *((_DWORD *)this + 9) = 0;
      result = (unsigned int)DiagnosticsInternal;
      *((_DWORD *)this + 8) = 0;
      return result;
    }
    if ( *((_QWORD *)v7 + 1) - *(_QWORD *)&v29[8] < *((_QWORD *)this + 3)
      && !(unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
    {
      v8 = *((_DWORD *)this + 8);
      v9 = *((_DWORD *)this + 9);
      v24 = *((_DWORD *)this + 4);
      goto LABEL_25;
    }
    v24 = *((_DWORD *)this + 4);
    if ( *((_QWORD *)this + 7) + *((unsigned int *)this + 8) == *((_QWORD *)this + 1) )
      break;
    v8 += *(_DWORD *)&v29[4];
    *((_DWORD *)this + 8) = (*((_DWORD *)this + 8) + *(_DWORD *)&v29[4]) % v24;
LABEL_25:
    v11 = v24;
  }
  v35 = *(_QWORD *)&v29[8];
  v34[1] = v8 + v24 - v9;
  v34[0] = 27;
  v36 = v30;
  v37 = v31;
  v37.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8)) - 1;
  DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v34, 1);
  v25 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v29, 0LL) >= 0 )
  {
    v26 = *((_QWORD *)this + 7) + *((unsigned int *)this + 8) == *((_QWORD *)this + 1);
    v27 = (unsigned int)(*((_DWORD *)this + 8) + *(_DWORD *)&v29[4]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v27;
    if ( !v26 )
      goto LABEL_31;
    v25 = v27;
  }
  WdLogSingleEntry3(3LL, v8, v7, *((unsigned int *)v7 + 1));
LABEL_31:
  *((_DWORD *)this + 9) = v25;
  return 3221226029LL;
}
