/*
 * XREFs of _CAudioDGProcess::GetADGProcessSD_::_1_::catch$5 @ 0x18007631B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessSD_::_1_::catch_5(__int64 a1, __int64 a2)
{
  const char *v2; // r9

  v2 = (const char *)**(unsigned int **)(a2 + 168);
  *(_DWORD *)(a2 + 176) = (_DWORD)v2;
  if ( (int)v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 344),
      (void *)0x49,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      v2);
  return 0LL;
}
