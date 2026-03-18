/*
 * XREFs of NVMeDirectiveCompletion @ 0x1C0016D60
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeDirectiveCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  const wchar_t *v9; // rsi

  result = GetSrbExtension(a2);
  v6 = result;
  if ( v7 )
  {
    if ( *(_BYTE *)(v5 + 3) != 1 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v8 = *(_BYTE *)(a2 + 7);
      v9 = L"Directive Send Fail";
      if ( (unsigned __int8)*(_DWORD *)(result + 4096) != 25 )
        v9 = L"Directive Recv Fail";
      result = StorPortExtendedFunction(
                 87LL,
                 a1,
                 *(_QWORD *)(a1 + 8LL * v8 + 1720),
                 0LL,
                 2,
                 v9,
                 0LL,
                 4,
                 0,
                 a2,
                 L"NUMD",
                 *(unsigned int *)(result + 4136),
                 L"DOPER",
                 (unsigned __int8)*(_DWORD *)(result + 4140),
                 L"DTYPE",
                 *(unsigned __int8 *)(result + 4141),
                 L"DSPEC",
                 *(unsigned __int16 *)(result + 4142));
    }
    *(_BYTE *)(v6 + 4253) |= 8u;
  }
  return result;
}
