/*
 * XREFs of EncloseSubCondition @ 0x140668450
 * Callers:
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EncloseSubCondition(PVOID *a1)
{
  unsigned int v2; // ebx
  _WORD *v3; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  size_t v7; // rcx
  unsigned __int64 v8; // rbp
  wchar_t *v9; // rax
  wchar_t *v10; // rsi

  v2 = 0;
  v3 = *a1;
  if ( *v3 != 40 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v3[v5] );
    v6 = 2LL * (unsigned int)v5;
    if ( v6 > 0xFFFFFFFF )
      return 534;
    v7 = (unsigned int)(v6 + 6);
    if ( (unsigned int)v7 < (unsigned int)v6 )
    {
      return 534;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = (wchar_t *)SddlpAlloc(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( RtlStringCchPrintfW(v9, v8 >> 1, L"(%ls)", *a1) >= 0 )
        {
          if ( *a1 )
            ExFreePoolWithTag(*a1, 0);
          *a1 = v10;
        }
        else
        {
          ExFreePoolWithTag(v10, 0);
          return 50;
        }
      }
      else
      {
        return 8;
      }
    }
  }
  return v2;
}
