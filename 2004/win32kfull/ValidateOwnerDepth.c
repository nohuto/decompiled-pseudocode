/*
 * XREFs of ValidateOwnerDepth @ 0x1C01127A8
 * Callers:
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Servicing_2110c_35205399__private_IsEnabled @ 0x1C0159068 (Feature_Servicing_2110c_35205399__private_IsEnabled.c)
 */

__int64 __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v3 = 1;
  v4 = 0;
  while ( a2 )
  {
    if ( a2 == a1 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 120);
    ++v3;
  }
  if ( (unsigned int)Feature_Servicing_2110c_35205399__private_IsEnabled(a1, 0LL, a3) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( v3 <= gNestedWindowLimit && v3 > *(_DWORD *)(CurrentProcessWin32Process + 1100) )
      *(_DWORD *)(CurrentProcessWin32Process + 1100) = v3;
  }
  LOBYTE(v4) = v3 <= gNestedWindowLimit;
  return v4;
}
