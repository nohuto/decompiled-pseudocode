/*
 * XREFs of HalpWdatArmTimer @ 0x1404D4D70
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x1404DE84C (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatArmTimer(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax

  if ( a2 != 3 )
    return 3221225485LL;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      if ( a3 == v6 )
      {
        v7 = a1 + 48;
        return WdInstrExecuteAction(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
      }
    }
  }
  *(_QWORD *)(a1 + 32) = a3;
  v8 = a3 / 0x37E;
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a1 + 24);
  if ( a3 == 894 * v8 )
    v9 = v8;
  v11 = v9 / v10;
  if ( v9 % v10 )
    ++v11;
  v12 = *(unsigned int *)(a1 + 44);
  v13 = a1 + 48;
  if ( v11 > *(unsigned int *)(a1 + 16) )
  {
    WdInstrExecuteAction(v13, v12, 11LL, 0LL);
    return 3221225485LL;
  }
  v14 = *(unsigned int *)(a1 + 20);
  if ( v11 >= v14 )
    LODWORD(v14) = v11;
  result = WdInstrExecuteAction(v13, v12, 6LL, (unsigned int)v14);
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      result = WdInstrExecuteAction(a1 + 48, *(unsigned int *)(a1 + 44), 9LL, 0LL);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 40) = 1;
    }
    v7 = a1 + 48;
    return WdInstrExecuteAction(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
  }
  return result;
}
