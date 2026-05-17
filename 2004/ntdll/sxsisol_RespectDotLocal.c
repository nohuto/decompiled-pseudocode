/*
 * XREFs of sxsisol_RespectDotLocal @ 0x1800DF600
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x18006DBF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D55B0 (RtlComputePrivatizedDllName_U.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(unsigned __int16 *a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v5; // ebx
  UNICODE_STRING *p_UnicodeString; // rbx
  unsigned __int64 v7; // r8
  __int64 *v8; // r14
  __int64 v9; // rcx
  size_t Length; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-10h] BYREF

  UnicodeString = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, (__int64)&UnicodeString, (__int64)&v16);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( v16.Buffer && RtlDoesFileExists_UstrEx((int)&v16, 1) )
    {
      p_UnicodeString = &v16;
    }
    else
    {
      if ( !UnicodeString.Buffer || !RtlDoesFileExists_UstrEx((int)&UnicodeString, 1) )
        goto LABEL_18;
      p_UnicodeString = &UnicodeString;
    }
    v7 = p_UnicodeString->Length + 2LL;
    *a2 = 0;
    if ( v7 > 0xFFFE )
    {
      v5 = -1073741562;
      goto LABEL_19;
    }
    v8 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v7 > *((_QWORD *)a2 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v7) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_19;
    }
    v9 = *v8;
    Length = p_UnicodeString->Length;
    Buffer = p_UnicodeString->Buffer;
    v12 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v8;
    memmove((void *)(v9 + 2 * v12), Buffer, Length);
    v13 = (unsigned __int16)(*a2 + p_UnicodeString->Length);
    *a2 = v13;
    a2[1] = v13 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v13 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  v5 = -1073741811;
LABEL_19:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v16);
  return (unsigned int)v5;
}
