/*
 * XREFs of FilterInitComponentId @ 0x1C002391C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0023B88 (FilterCreateFilterFactory.c)
 * Callees:
 *     RegistryInitProductNameKey @ 0x1C002AB30 (RegistryInitProductNameKey.c)
 */

__int64 __fastcall FilterInitComponentId(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  GUID *v4; // rsi
  int v5; // eax
  int v6; // eax
  __int16 v7; // ax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = (GUID *)(a2 + 48);
  v5 = *(unsigned __int16 *)(v2 + 40) + 1310518482;
  *(_DWORD *)(a2 + 10) = -932921435;
  *(_DWORD *)a2 = v5;
  *(_WORD *)(a2 + 4) = 5753;
  *(_WORD *)(a2 + 14) = -17810;
  *(_DWORD *)(a2 + 6) = 799491643;
  v6 = *(unsigned __int16 *)(v2 + 44);
  *(_DWORD *)(a2 + 24) = -1079693401;
  *(_DWORD *)(a2 + 28) = -1167144860;
  *(_DWORD *)(a2 + 16) = v6 - 1412670882;
  *(_DWORD *)(a2 + 20) = 1178321507;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)*(_QWORD *)(v2 + 56);
  if ( !*(_QWORD *)(v2 + 24)
    || (v4->Data1 = *(unsigned __int16 *)(v2 + 40) - 61386680,
        *(_WORD *)(a2 + 52) = *(_WORD *)(v2 + 44) + 11784,
        v7 = *(_WORD *)(v2 + 36) + 17979,
        *(_DWORD *)(a2 + 56) = -1079693401,
        *(_WORD *)(a2 + 54) = v7,
        *(_DWORD *)(a2 + 60) = -1167144860,
        (int)RegistryInitProductNameKey(v4, *(_QWORD *)(v2 + 24), *(unsigned int *)(v2 + 32)) < 0) )
  {
    *v4 = GUID_NULL;
  }
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(v2 + 48) >> 8;
  result = 0LL;
  *(_DWORD *)(a2 + 68) = (unsigned __int8)*(_DWORD *)(v2 + 48);
  return result;
}
