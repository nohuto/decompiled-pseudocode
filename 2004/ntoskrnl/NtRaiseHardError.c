/*
 * XREFs of NtRaiseHardError @ 0x140953180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x140952DEC (ExpRaiseHardError.c)
 */

__int64 __fastcall NtRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        _DWORD *a6)
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
  unsigned int v17; // edx
  unsigned int v19; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-F4h]
  unsigned int v21; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v23[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = a2;
  v19 = 0;
  if ( a2 > 5 )
    return 3221225712LL;
  if ( a4 )
  {
    if ( a2 )
      goto LABEL_6;
    return 3221225712LL;
  }
  if ( a2 )
    return 3221225712LL;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( a5 > 8 )
      return 3221225714LL;
    v9 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      v10 = 8LL * a2;
      if ( v10 )
      {
        if ( ((unsigned __int8)a4 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a4[v10] > 0x7FFFFFFF0000LL || &a4[v10] < a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Src, a4, 8LL * a2);
      memmove(v23, Src, 8 * v7);
      if ( a3 )
      {
        for ( i = 0; ; ++i )
        {
          v20 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&a3, i) )
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
    v17 = ExpRaiseHardError(a1, v7, a3, Src, (__int64)v23, a5, &v19);
    v21 = v17;
    *a6 = v19;
  }
  else
  {
    v17 = ExRaiseHardError(a1, a2, a3, a4, a5, &v19);
    *a6 = v19;
  }
  return v17;
}
