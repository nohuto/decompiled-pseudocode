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

PVOID __fastcall LdrpInitializeProcessHeap(_DWORD *a1, int a2, int a3)
{
  ULONG v5; // edx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _WORD *v9; // esi
  char v10; // al
  SIZE_T v12; // [esp-8h] [ebp-98h]
  size_t v13; // [esp-4h] [ebp-94h]
  void *v14; // [esp+0h] [ebp-90h]
  void *v15; // [esp+4h] [ebp-8Ch]
  HANDLE PartitionHandle; // [esp+10h] [ebp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-7Ch] BYREF
  _WORD v18[2]; // [esp+2Ch] [ebp-64h] BYREF
  int v19; // [esp+30h] [ebp-60h]
  int v20; // [esp+34h] [ebp-5Ch]
  int v21; // [esp+38h] [ebp-58h]
  int v22; // [esp+3Ch] [ebp-54h]
  HANDLE v23; // [esp+40h] [ebp-50h]
  int v24; // [esp+44h] [ebp-4Ch]
  int v25; // [esp+48h] [ebp-48h]
  int v26; // [esp+4Ch] [ebp-44h]
  int v27; // [esp+50h] [ebp-40h]
  int v28; // [esp+54h] [ebp-3Ch]
  int v29; // [esp+58h] [ebp-38h]
  _DWORD v30[12]; // [esp+5Ch] [ebp-34h] BYREF

  LODWORD(v13) = 48;
  memset(v30, 0, v13);
  v5 = 2;
  v30[0] = 48;
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
      v30[3] = a1[6];
    if ( *a1 >= 0x20u && a1[7] )
      v30[4] = a1[7];
    if ( *a1 >= 0x28u && a1[9] )
      v30[5] = a1[9];
    if ( *a1 >= 0x2Cu && a1[10] )
      v30[6] = a1[10];
  }
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a2 + 104);
    v8 = *(_DWORD *)(a2 + 108);
  }
  v9 = v30;
  if ( *(_DWORD *)(a3 + 688) )
  {
    ObjectAttributes.RootDirectory = 0;
    memset(&ObjectAttributes.Attributes, 0, 12);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a3 + 684);
    ObjectAttributes.Length = 24;
    if ( NtOpenPartition(&PartitionHandle, 0x1F0003u, &ObjectAttributes) < 0 )
    {
      v10 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (int)"minkernel\\ntdll\\ldrinit.c",
          7338,
          (int)"LdrpInitializeProcessHeap",
          0,
          "Cannot open partition.");
        v10 = ShowSnaps;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      return 0;
    }
    v22 = -1;
    v9 = v18;
    v18[0] = 2;
    v5 = 258;
    v18[1] = 48;
    v8 = 0;
    v23 = PartitionHandle;
    v7 = 0;
    v19 = 0;
    v20 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v21 = 4;
  }
  if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
    v5 |= 0x10000u;
  HIDWORD(v12) = v9;
  LODWORD(v12) = 0;
  return RtlCreateHeap(v5, 0, __PAIR64__(v8, v7), v12, v14, v15);
}
