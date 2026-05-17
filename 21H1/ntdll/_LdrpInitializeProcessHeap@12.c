/*
 * XREFs of _LdrpInitializeProcessHeap@12 @ 0x4B332D8F
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _NtOpenPartition@12 @ 0x4B2F3BE0 (_NtOpenPartition@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int *__fastcall LdrpInitializeProcessHeap(_DWORD *a1, int a2, int a3)
{
  unsigned int v5; // edx
  int v6; // eax
  _DWORD *v7; // eax
  char *v8; // ecx
  _WORD *v9; // esi
  char v10; // al
  int v12; // [esp+10h] [ebp-80h] BYREF
  _DWORD v13[6]; // [esp+14h] [ebp-7Ch] BYREF
  _WORD v14[2]; // [esp+2Ch] [ebp-64h] BYREF
  int v15; // [esp+30h] [ebp-60h]
  int v16; // [esp+34h] [ebp-5Ch]
  int v17; // [esp+38h] [ebp-58h]
  int v18; // [esp+3Ch] [ebp-54h]
  int v19; // [esp+40h] [ebp-50h]
  int v20; // [esp+44h] [ebp-4Ch]
  int v21; // [esp+48h] [ebp-48h]
  int v22; // [esp+4Ch] [ebp-44h]
  int v23; // [esp+50h] [ebp-40h]
  int v24; // [esp+54h] [ebp-3Ch]
  int v25; // [esp+58h] [ebp-38h]
  _DWORD v26[12]; // [esp+5Ch] [ebp-34h] BYREF

  memset(v26, 0, sizeof(v26));
  v5 = 2;
  v26[0] = 48;
  if ( a1 )
  {
    if ( *a1 >= 0x30u )
    {
      v6 = a1[11];
      if ( v6 )
      {
        if ( (v6 & 0xFFFF0FFF) != 0 )
          v5 = v6 & 0xFFFF0FFF;
        RtlHeapProcessFlags = a1[11] & 0xF000;
      }
    }
    if ( *a1 >= 0x1Cu && a1[6] )
      v26[3] = a1[6];
    if ( *a1 >= 0x20u && a1[7] )
      v26[4] = a1[7];
    if ( *a1 >= 0x28u && a1[9] )
      v26[5] = a1[9];
    if ( *a1 >= 0x2Cu && a1[10] )
      v26[6] = a1[10];
  }
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    v7 = *(_DWORD **)(a2 + 104);
    v8 = *(char **)(a2 + 108);
  }
  v9 = v26;
  if ( *(_DWORD *)(a3 + 688) )
  {
    v13[1] = 0;
    memset(&v13[3], 0, 12);
    v13[2] = a3 + 684;
    v13[0] = 24;
    if ( NtOpenPartition((int)&v12, 2031619, (int)v13) < 0 )
    {
      v10 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (int)"minkernel\\ntdll\\ldrinit.c",
          7338,
          "LdrpInitializeProcessHeap",
          0,
          "Cannot open partition.");
        v10 = ShowSnaps;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      return 0;
    }
    v18 = -1;
    v9 = v14;
    v14[0] = 2;
    v5 = 258;
    v14[1] = 48;
    v8 = 0;
    v19 = v12;
    v7 = 0;
    v15 = 0;
    v16 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v17 = 4;
  }
  if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
    v5 |= 0x10000u;
  return RtlCreateHeap(v5, 0, v7, v8, 0, (int)v9);
}
