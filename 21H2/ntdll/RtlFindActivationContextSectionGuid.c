/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x18001CD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x18001CF60 (RtlpFindNextActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001D278 (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlpFindGuidInSection @ 0x18001D5EC (RtlpFindGuidInSection.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800812FC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionGuid(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _TEB *v5; // r10
  _PEB *ProcessEnvironmentBlock; // rax
  __int64 result; // rax
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+6Ch] [rbp-14h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v17 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v20[0] = 32LL;
    v20[1] = a2;
    v21 = a3;
    v22 = 0LL;
    v19 = 0LL;
    result = RtlpFindNextActivationContextSection(v20, &v18, &v17, &v19);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      while ( 1 )
      {
        v12 = v17;
        if ( v17 < 0x28 )
        {
          v13 = v18;
LABEL_27:
          DbgPrintEx(
            51LL,
            0LL,
            "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
            v13,
            v17);
          return 3222601731LL;
        }
        v13 = v18;
        if ( *v18 != 1682469703 )
          goto LABEL_27;
        result = RtlpFindGuidInSection(v18, a4, a5);
        if ( (int)result >= 0 )
          break;
        if ( (_DWORD)result != -1072365560 )
          return result;
        result = RtlpFindNextActivationContextSection(v20, &v18, &v17, &v19);
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result == -1072365567 )
            return 3222601736LL;
          return result;
        }
      }
      v14 = v19;
      if ( ((v19 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
      {
        v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v19 + 32);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v19 + 48) & 8) == 0 || (*(_BYTE *)(v19 + 80) & 8) == 0 )
          {
            v16[0] = 0;
            v15(3LL, v19, *(_QWORD *)(v19 + 24), *(_QWORD *)(v19 + 40), 0LL, v16);
            *(_DWORD *)(v14 + 48) |= 8u;
            if ( v16[0] )
              *(_DWORD *)(v14 + 80) |= 8u;
          }
        }
      }
      if ( !a5 )
        return 0LL;
      result = RtlpFindActivationContextSection_FillOutReturnedData(
                 a1,
                 a5,
                 v14,
                 (unsigned int)v20,
                 (__int64)v13,
                 v13[8],
                 v13[9],
                 v12);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
