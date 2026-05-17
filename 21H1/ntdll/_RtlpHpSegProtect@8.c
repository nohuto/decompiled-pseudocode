/*
 * XREFs of _RtlpHpSegProtect@8 @ 0x4B37D295
 * Callers:
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __fastcall RtlpHpSegProtect(_DWORD *a1, int a2)
{
  _DWORD *v3; // edi
  _DWORD *i; // esi
  int v5; // ecx
  bool j; // cf
  int result; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-30h] BYREF
  int v9; // [esp+18h] [ebp-24h]
  int v10; // [esp+1Ch] [ebp-20h]
  _BYTE v11[4]; // [esp+28h] [ebp-14h] BYREF
  unsigned int v12; // [esp+2Ch] [ebp-10h]
  int v13; // [esp+30h] [ebp-Ch] BYREF
  int v14; // [esp+34h] [ebp-8h]
  int v15; // [esp+38h] [ebp-4h] BYREF

  v14 = a2;
  v3 = a1 + 17;
  for ( i = (_DWORD *)a1[17]; i != v3; i = (_DWORD *)*i )
  {
    v5 = (int)i;
    v12 = (unsigned int)i - *a1;
    for ( j = (unsigned int)i < v12; ; j = v9 + v15 < v12 )
    {
      v15 = v5;
      if ( !j )
        break;
      result = NtQueryVirtualMemory(-1, v5, 0, (int)v8, 28, 0);
      if ( result < 0 )
        return result;
      if ( v10 == 4096 )
      {
        v13 = v9;
        result = ZwProtectVirtualMemory(-1, (int)&v15, (int)&v13, v14, (int)v11);
        if ( result < 0 )
          return result;
      }
      v5 = v9 + v15;
    }
  }
  return 0;
}
