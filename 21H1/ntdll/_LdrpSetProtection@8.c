/*
 * XREFs of _LdrpSetProtection@8 @ 0x4B331251
 * Callers:
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __fastcall LdrpSetProtection(unsigned int a1, char a2)
{
  int v2; // ebx
  int v3; // edi
  int *i; // esi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  char v8[4]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+18h] [ebp-Ch]
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  char v13; // [esp+23h] [ebp-1h]

  v13 = a2;
  v11 = a1;
  RtlImageNtHeaderEx(3, a1, 0, 0, &v12);
  v2 = v12;
  v3 = 0;
  if ( !*(_WORD *)(v12 + 6) )
    return 0;
  for ( i = (int *)(v12 + *(unsigned __int16 *)(v12 + 20) + 40); ; i += 10 )
  {
    v5 = i[5];
    if ( v5 >= 0 && *i )
    {
      if ( v13 )
      {
        v6 = (v5 & 0x20000000) != 0 ? ((v5 & 0x40000000) != 0 ? 32 : 16) : 2;
        if ( (v5 & 0x4000000) != 0 )
          v6 |= 0x200u;
      }
      else
      {
        v6 = 4;
      }
      v9 = v11 + *(i - 1);
      v10 = *i;
      if ( v10 )
      {
        result = ZwProtectVirtualMemory(-1, (int)&v9, (int)&v10, v6, (int)v8);
        if ( result < 0 )
          break;
      }
    }
    if ( ++v3 >= (unsigned int)*(unsigned __int16 *)(v2 + 6) )
      return 0;
  }
  return result;
}
