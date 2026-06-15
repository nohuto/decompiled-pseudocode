/*
 * XREFs of sub_180134908 @ 0x180134908
 * Callers:
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180133C14 @ 0x180133C14 (sub_180133C14.c)
 */

__int64 __fastcall sub_180134908(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  _BYTE *v3; // rdx
  HRESULT v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  try
  {
    v9 = CurrentThreadId;
    v3 = *(_BYTE **)(a1 + 536);
    if ( *(_BYTE **)(a1 + 544) == v3 )
    {
      sub_180133C14((const void **)(a1 + 528), v3, &v9);
    }
    else
    {
      *(_DWORD *)v3 = CurrentThreadId;
      *(_QWORD *)(a1 + 536) += 4LL;
    }
    v4 = CoEnableCallCancellation(0LL);
    v6 = v4;
    if ( v4 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      sub_18004BD84((int)retaddr, 2752, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v4);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           2756,
                           (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           v5);
  }
  return result;
}
