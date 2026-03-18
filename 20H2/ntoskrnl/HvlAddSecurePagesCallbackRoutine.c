/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1404F6D30
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1404F6D10 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1404F6F60 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     HvlpAddCrashdumpAreaPages @ 0x1404F748C (HvlpAddCrashdumpAreaPages.c)
 *     HvlpEndSecurePageListIteration @ 0x1404F9A1C (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404F9CD4 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1404FAB30 (VslGetSecurePageList.c)
 *     IoIsPartialDumpRetry @ 0x140500B48 (IoIsPartialDumpRetry.c)
 */

__int64 __fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 v10; // rcx
  char v11; // bp
  char v12; // dl
  int v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v14 = 0LL;
  v4 = a1 | 4;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  result = IoIsPartialDumpRetry();
  v10 = *v9;
  v11 = result;
  if ( !*v9 )
    goto LABEL_5;
  if ( BYTE3(HvlpCrashdumpIterationState) != v4 )
  {
    result = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    LOBYTE(HvlpCrashdumpIterationState) = 0;
    v10 = 0LL;
    *(_QWORD *)a4 = 0LL;
  }
  if ( !v10 )
  {
LABEL_5:
    HvlpCrashdumpIterationState = 0LL;
    xmmword_140C47430 = 0LL;
    xmmword_140C47440 = 0LL;
    result = HvlpStartSecurePageListIteration(1LL, v4, 0LL, 0LL, 0, &v14);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)&xmmword_140C47440 + 1) = v14;
    result = (__int64)&HvlpCrashdumpIterationState;
    BYTE3(HvlpCrashdumpIterationState) = v4;
    LOBYTE(HvlpCrashdumpIterationState) = 1;
    *(_QWORD *)a4 = &HvlpCrashdumpIterationState;
  }
  if ( (_BYTE)HvlpCrashdumpIterationState )
  {
    if ( BYTE1(HvlpCrashdumpIterationState)
      || (LOBYTE(v8) = 1, result = HvlpAddCrashdumpAreaPages(a4, v8), !(_BYTE)result) )
    {
      if ( BYTE2(HvlpCrashdumpIterationState) || (result = HvlpAddCrashdumpAreaPages(a4, 0LL), !(_BYTE)result) )
      {
        if ( !v11 || a1 == 1 && *(_DWORD *)(a4 + 12) == 395 || a1 == 2 && *(_DWORD *)(a4 + 12) == 131073 )
        {
          while ( (_DWORD)xmmword_140C47440 )
          {
LABEL_22:
            *(_QWORD *)(a4 + 24) = (**((_QWORD **)&xmmword_140C47430 + 1) >> 40) + 1LL;
            result = 0xFFFFFFFFFFLL;
            *(_QWORD *)(a4 + 16) = **((_QWORD **)&xmmword_140C47430 + 1) & 0xFFFFFFFFFFLL;
            *((_QWORD *)&xmmword_140C47430 + 1) += 8LL;
            LODWORD(xmmword_140C47440) = xmmword_140C47440 - 1;
            if ( *(_QWORD *)(a4 + 24) )
            {
              *(_DWORD *)(a4 + 8) = -2147483646;
              if ( a1 == 1 )
                *(_DWORD *)(a4 + 8) = -2147483630;
              else
                *(_DWORD *)(a4 + 8) = -2147483614;
              return result;
            }
          }
          while ( 1 )
          {
            LOBYTE(v13) = 0;
            if ( (int)VslGetSecurePageList(0LL, 0LL, 0LL, &v13) < 0 )
              break;
            LODWORD(xmmword_140C47440) = *(unsigned __int16 *)(*((_QWORD *)&xmmword_140C47440 + 1) + 8LL);
            *((_QWORD *)&xmmword_140C47430 + 1) = *((_QWORD *)&xmmword_140C47440 + 1) + 16LL;
            if ( (_DWORD)xmmword_140C47440 )
              goto LABEL_22;
          }
        }
        result = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
        LOBYTE(HvlpCrashdumpIterationState) = 0;
      }
      else
      {
        BYTE2(HvlpCrashdumpIterationState) = 1;
      }
    }
    else
    {
      BYTE1(HvlpCrashdumpIterationState) = v12;
    }
  }
  return result;
}
