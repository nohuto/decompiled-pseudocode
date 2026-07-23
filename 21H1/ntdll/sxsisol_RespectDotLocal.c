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

NTSTATUS __fastcall sxsisol_RespectDotLocal(PUNICODE_STRING DllName, unsigned __int16 *a2, _DWORD *a3)
{
  NTSTATUS v4; // esi
  _UNICODE_STRING *p_LocalName; // esi
  unsigned int v6; // eax
  int *v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned __int16 v10; // cx
  wchar_t *Buffer; // [esp-8h] [ebp-24h]
  size_t v13; // [esp-4h] [ebp-20h]
  _UNICODE_STRING LocalName; // [esp+Ch] [ebp-10h] BYREF
  _UNICODE_STRING RealName; // [esp+14h] [ebp-8h] BYREF

  *(_DWORD *)&RealName.Length = 0;
  RealName.Buffer = 0;
  *(_DWORD *)&LocalName.Length = 0;
  LocalName.Buffer = 0;
  if ( a2 )
  {
    v4 = RtlComputePrivatizedDllName_U(DllName, &RealName, &LocalName);
    if ( v4 < 0 )
      goto LABEL_19;
    if ( LocalName.Buffer && RtlDoesFileExists_UstrEx(&LocalName, 1) )
    {
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || !RtlDoesFileExists_UstrEx(&RealName, 1) )
        goto LABEL_18;
      p_LocalName = &RealName;
    }
    *a2 = 0;
    v6 = p_LocalName->Length + 2;
    if ( v6 > 0xFFFE )
    {
      v4 = -1073741562;
      goto LABEL_19;
    }
    v7 = (int *)(a2 + 4);
    if ( (a2 == (unsigned __int16 *)-8 || v6 > *((_DWORD *)a2 + 4))
      && RtlpEnsureBufferSize(0, (int)(a2 + 4), p_LocalName->Length + 2) < 0 )
    {
      v4 = -1073741801;
      goto LABEL_19;
    }
    v8 = *v7;
    LODWORD(v13) = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v9 = *a2 >> 1;
    *((_DWORD *)a2 + 1) = *v7;
    memmove((void *)(v8 + 2 * v9), Buffer, v13);
    v10 = *a2 + p_LocalName->Length;
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
  RtlFreeAnsiString(&RealName);
  RtlFreeAnsiString(&LocalName);
  return v4;
}
