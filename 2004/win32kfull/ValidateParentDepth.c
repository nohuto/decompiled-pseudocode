/*
 * XREFs of ValidateParentDepth @ 0x1C0022E40
 * Callers:
 *     ValidateNewParent @ 0x1C0022CCC (ValidateNewParent.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Servicing_2110c_35205399__private_IsEnabled @ 0x1C0159068 (Feature_Servicing_2110c_35205399__private_IsEnabled.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 i; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // r10
  unsigned int v7; // edi
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 0;
  for ( i = 1LL; a2; i = (unsigned int)(i + 1) )
  {
    v4 = a2[3];
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        v5 = *(_QWORD **)(v6 + 24);
    }
    if ( a2 == v5 )
      break;
    a2 = (_QWORD *)a2[13];
  }
  v7 = i;
  if ( a1 && a1[14] )
  {
    a2 = (_QWORD *)a1[13];
    while ( 1 )
    {
      while ( a1[14] )
      {
        a1 = (_QWORD *)a1[14];
        LODWORD(i) = i + 1;
      }
      v8 = (_QWORD *)a1[11];
      if ( !v8 )
        break;
LABEL_19:
      a1 = v8;
    }
    v9 = i;
    if ( (unsigned int)i <= v7 )
      v9 = v7;
    v7 = v9;
    while ( 1 )
    {
      a1 = (_QWORD *)a1[13];
      i = (unsigned int)(i - 1);
      if ( a1 == a2 )
        break;
      v8 = (_QWORD *)a1[11];
      if ( v8 )
        goto LABEL_19;
    }
  }
  if ( (unsigned int)Feature_Servicing_2110c_35205399__private_IsEnabled(a1, a2, i) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( v7 <= gNestedWindowLimit && v7 > *(_DWORD *)(CurrentProcessWin32Process + 1096) )
      *(_DWORD *)(CurrentProcessWin32Process + 1096) = v7;
  }
  LOBYTE(v2) = v7 <= gNestedWindowLimit;
  return v2;
}
