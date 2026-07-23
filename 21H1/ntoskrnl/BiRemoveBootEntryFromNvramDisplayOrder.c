/*
 * XREFs of BiRemoveBootEntryFromNvramDisplayOrder @ 0x14096E188
 * Callers:
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 * Callees:
 *     BiQueryBootEntryOrder @ 0x14096DFD4 (BiQueryBootEntryOrder.c)
 *     BiSetBootEntryOrder @ 0x14096E23C (BiSetBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiRemoveBootEntryFromNvramDisplayOrder(__int64 a1)
{
  int v2; // eax
  ULONG *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // r8
  ULONG v6; // r9d
  _DWORD *v7; // rcx
  ULONG v8; // edx
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  ULONG v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  P = 0LL;
  v2 = BiQueryBootEntryOrder((ULONG **)&P, &v13);
  v3 = (ULONG *)P;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = 0LL;
    v6 = v13;
    if ( v13 )
    {
      v7 = P;
      do
      {
        if ( *v7 == *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
          break;
        v5 = (unsigned int)(v5 + 1);
        ++v7;
      }
      while ( (unsigned int)v5 < v13 );
    }
    if ( (_DWORD)v5 != v13 )
    {
      v8 = v13 - 1;
      if ( (unsigned int)v5 < v13 - 1 )
      {
        v9 = (char *)P + 4 * (unsigned int)(v5 + 1);
        v10 = v8 - (unsigned int)v5;
        v11 = (char *)P + 4 * v5;
        while ( v10 )
        {
          *v11++ = *v9++;
          --v10;
        }
      }
      if ( v6 != v8 )
        v4 = BiSetBootEntryOrder(v3, v8);
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return v4;
}
