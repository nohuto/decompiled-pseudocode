/*
 * XREFs of NtRaiseHardError @ 0x140956990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x1409565F8 (ExpRaiseHardError.c)
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int i; // eax
  __int64 v12; // r8
  _OWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  NTSTATUS v17; // edx
  ULONG v19; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-F4h]
  NTSTATUS v21; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v23[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = NumberOfParameters;
  v19 = 0;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( Parameters )
  {
    if ( NumberOfParameters )
      goto LABEL_6;
    return -1073741584;
  }
  if ( NumberOfParameters )
    return -1073741584;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ValidResponseOptions > 8 )
      return -1073741582;
    v9 = (__int64)Response;
    if ( (unsigned __int64)Response >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Parameters )
    {
      v10 = NumberOfParameters;
      if ( v10 * 8 )
      {
        if ( ((unsigned __int8)Parameters & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Parameters[v10] > 0x7FFFFFFF0000LL || &Parameters[v10] < Parameters )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Src, Parameters, 8LL * NumberOfParameters);
      memmove(v23, Src, 8 * v7);
      if ( UnicodeStringParameterMask )
      {
        for ( i = 0; ; ++i )
        {
          v20 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, i) )
          {
            v12 = i;
            v13 = (_OWORD *)Src[i];
            if ( ((unsigned __int8)v13 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v14 = 2LL * i;
            *(_OWORD *)&v23[v14 + 5] = *v13;
            v15 = WORD1(v23[v14 + 5]);
            if ( (_WORD)v15 )
            {
              v16 = v23[v14 + 6];
              if ( v16 + v15 > 0x7FFFFFFF0000LL || v16 + v15 < v16 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v23[v12] = &v23[v14 + 5];
            i = v20;
          }
        }
      }
    }
    v17 = ExpRaiseHardError(
            (unsigned int)ErrorStatus,
            (unsigned int)v7,
            UnicodeStringParameterMask,
            Src,
            (__int64)v23,
            ValidResponseOptions,
            &v19);
    v21 = v17;
    *Response = v19;
  }
  else
  {
    v17 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            (char *)Parameters,
            ValidResponseOptions,
            (int *)&v19);
    *Response = v19;
  }
  return v17;
}
