/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AB2C
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AAD8 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C00016AC (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00017B4 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AD7C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C000B00C (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C0045B04 (-ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  int DiagnosticsInternal; // r13d
  char *v12; // r15
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  __int64 i; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // ebx
  int IsPersistentPacket; // eax
  int v25; // r8d
  unsigned int v26; // edx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // [rsp+30h] [rbp-89h]
  unsigned __int8 v30[16]; // [rsp+38h] [rbp-81h] BYREF
  __int128 v31; // [rsp+48h] [rbp-71h]
  __m128i v32; // [rsp+58h] [rbp-61h]
  _OWORD v33[3]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v34; // [rsp+98h] [rbp-21h]
  _DWORD v35[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-11h]
  __int128 v37; // [rsp+B0h] [rbp-9h]
  __m128i v38; // [rsp+C0h] [rbp+7h]

  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
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
  v10 = (unsigned __int64)this;
  if ( v8 <= v6 )
    v9 = *((_DWORD *)this + 9);
  DiagnosticsInternal = 0;
  v29 = 0;
  v12 = 0LL;
  v13 = 0;
  while ( *(_DWORD *)a2 != *(_DWORD *)v10 )
  {
    ++v13;
    v10 += 16LL;
    if ( v13 )
      goto LABEL_9;
  }
  v12 = (char *)this + 16 * v13;
  v29 = 1;
  v10 = *((_QWORD *)v12 + 1);
  if ( v10
    && v4 == *(_DWORD *)(v10 + 4)
    && RtlCompareMemory((char *)a2 + 48, (const void *)(v10 + 48), v4 - 48) == v4 - 48 )
  {
    v7 = (struct _DXGK_DIAG_HEADER *)v33;
    v29 = 0;
    *((_QWORD *)&v33[0] + 1) = *((_QWORD *)a2 + 1);
    v22 = *((_QWORD *)v12 + 1);
    *(_QWORD *)&v33[0] = 0x380000001CLL;
    LODWORD(v34) = *(_DWORD *)(v22 + 40);
  }
LABEL_9:
  v14 = *((unsigned int *)this + 4);
  for ( i = *((_DWORD *)v7 + 1) + v9 - v8; ; i = v9 + *((_DWORD *)v7 + 1) - v8 )
  {
    v16 = i + 48;
    if ( v16 < v14 )
      goto LABEL_11;
    *(_OWORD *)v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, -1, 0x30u, v30, 0LL);
    if ( DiagnosticsInternal < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning();
      v28[3] = v8;
      v28[4] = v7;
      v28[5] = *((unsigned int *)v7 + 1);
      WdLogEvent5_WdWarning(v28);
LABEL_11:
      if ( DiagnosticsInternal < 0 )
      {
        *((_QWORD *)this + 4) = 0LL;
        return (unsigned int)DiagnosticsInternal;
      }
      else
      {
        *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
        *((_DWORD *)v7 + 11) = WdLogGetEventOrder(v16, v10);
        v17 = *((_QWORD *)this + 6) + *((unsigned int *)this + 9);
        v18 = DXGDIAGNOSTICS::CopyToBuffer(this, v7, 0);
        if ( v29 )
        {
          if ( !v18 )
            *((_QWORD *)v12 + 1) = v17;
        }
        WriteDxgDiagnosticsEvent(a2);
        return 0LL;
      }
    }
    if ( *((_QWORD *)v7 + 1) - *(_QWORD *)&v30[8] >= *((_QWORD *)this + 3)
      || (unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
    {
      break;
    }
    v8 = *((_DWORD *)this + 8);
    v9 = *((_DWORD *)this + 9);
    v20 = *((_DWORD *)this + 4);
LABEL_18:
    v14 = v20;
  }
  if ( !(unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                        this,
                        (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 6) + *((unsigned int *)this + 8))) )
  {
    v10 = (v21 + *(_DWORD *)&v30[4]) % v20;
    v8 += *(_DWORD *)&v30[4];
    *((_DWORD *)this + 8) = v10;
    goto LABEL_18;
  }
  v36 = *(_QWORD *)&v30[8];
  v35[1] = v8 + v20 - v9;
  v35[0] = 27;
  v37 = v31;
  v38 = v32;
  v38.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) - 1;
  DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v35, 1);
  v23 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, -1, 0x30u, v30, 0LL) >= 0 )
  {
    IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 6) + *((unsigned int *)this + 8)));
    v26 = (unsigned int)(v25 + *(_DWORD *)&v30[4]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v26;
    if ( !IsPersistentPacket )
      goto LABEL_32;
    v23 = v26;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v27[3] = v8;
  v27[4] = v7;
  v27[5] = *((unsigned int *)v7 + 1);
  WdLogEvent5_WdWarning(v27);
LABEL_32:
  *((_DWORD *)this + 9) = v23;
  return 3221226029LL;
}
