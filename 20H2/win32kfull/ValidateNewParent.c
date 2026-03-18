/*
 * XREFs of ValidateNewParent @ 0x1C00C9DE4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     ProtectedContentAccessCheck @ 0x1C00C9EC4 (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C00C9F58 (ValidateParentDepth.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *i; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( *(char *)(a1[5] + 19LL) >= 0 && *(char *)(a2[5] + 19LL) >= 0 && (unsigned int)ValidateParentDepth(a1, a2) )
  {
    if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v10 = 5LL;
      goto LABEL_18;
    }
    v4 = a2[3];
    if ( v4 == a1[3] )
    {
      if ( a2 == *(_QWORD **)(v4 + 104)
        || a2 == *(_QWORD **)(*(_QWORD *)(v4 + 8) + 24LL)
        || (v8 = a2[5], *(char *)(v8 + 235) < 0)
        || (v9 = a1[5], *(_DWORD *)(v8 + 236) == *(_DWORD *)(v9 + 236))
        && ((*(_BYTE *)(v8 + 234) ^ *(_BYTE *)(v9 + 234)) & 0x20) == 0 )
      {
        v5 = a2;
        while ( a1 != v5 )
        {
          v5 = (_QWORD *)v5[13];
          if ( !v5 )
          {
            for ( i = (_QWORD *)a2[15]; i; i = (_QWORD *)i[15] )
            {
              if ( a1 == i )
                goto LABEL_17;
            }
            return 1LL;
          }
        }
      }
    }
  }
LABEL_17:
  v10 = 87LL;
LABEL_18:
  UserSetLastError(v10);
  return 0LL;
}
