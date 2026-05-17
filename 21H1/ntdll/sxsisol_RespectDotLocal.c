/*
 * XREFs of sxsisol_RespectDotLocal @ 0x4B33D7A3
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlComputePrivatizedDllName_U@12 @ 0x4B334AB0 (_RtlComputePrivatizedDllName_U@12.c)
 */

int __fastcall sxsisol_RespectDotLocal(unsigned __int16 *a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v4; // esi
  UNICODE_STRING *p_UnicodeString; // esi
  unsigned int v6; // eax
  int *v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned __int16 v10; // cx
  wchar_t *Buffer; // [esp-8h] [ebp-24h]
  size_t Length; // [esp-4h] [ebp-20h]
  UNICODE_STRING v14; // [esp+Ch] [ebp-10h] BYREF
  UNICODE_STRING UnicodeString; // [esp+14h] [ebp-8h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  *(_DWORD *)&v14.Length = 0;
  v14.Buffer = 0;
  if ( a2 )
  {
    v4 = RtlComputePrivatizedDllName_U(a1, (int)&UnicodeString, (int)&v14);
    if ( v4 < 0 )
      goto LABEL_19;
    if ( v14.Buffer && RtlDoesFileExists_UstrEx((int *)&v14, 1) )
    {
      p_UnicodeString = &v14;
    }
    else
    {
      if ( !UnicodeString.Buffer || !RtlDoesFileExists_UstrEx((int *)&UnicodeString, 1) )
        goto LABEL_18;
      p_UnicodeString = &UnicodeString;
    }
    *a2 = 0;
    v6 = p_UnicodeString->Length + 2;
    if ( v6 > 0xFFFE )
    {
      v4 = -1073741562;
      goto LABEL_19;
    }
    v7 = (int *)(a2 + 4);
    if ( (a2 == (unsigned __int16 *)-8 || v6 > *((_DWORD *)a2 + 4))
      && RtlpEnsureBufferSize(0, (int)(a2 + 4), p_UnicodeString->Length + 2) < 0 )
    {
      v4 = -1073741801;
      goto LABEL_19;
    }
    v8 = *v7;
    Length = p_UnicodeString->Length;
    Buffer = p_UnicodeString->Buffer;
    v9 = *a2 >> 1;
    *((_DWORD *)a2 + 1) = *v7;
    memmove((void *)(v8 + 2 * v9), Buffer, Length);
    v10 = *a2 + p_UnicodeString->Length;
    *a2 = v10;
    a2[1] = v10 + 2;
    *(_WORD *)(*((_DWORD *)a2 + 1) + 2 * (v10 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_18:
    v4 = 0;
    goto LABEL_19;
  }
  v4 = -1073741811;
LABEL_19:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v14);
  return v4;
}
