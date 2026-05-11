/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C002F314
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C002CC2C (USBHwAllocateAndBag.c)
 *     USBHwGetMicArrayDescriptor @ 0x1C002E8D4 (USBHwGetMicArrayDescriptor.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // dx
  unsigned int v5; // esi
  _WORD *v6; // rbx
  int MicArrayDescriptor; // ebp
  _WORD *v9; // rdi
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 3);
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  MicArrayDescriptor = USBHwGetMicArrayDescriptor(a1, v3, (unsigned __int16 **)&P);
  if ( MicArrayDescriptor >= 0 )
  {
    v9 = P;
    v10 = *(void **)(a1 + 8);
    P = ExAllocatePoolWithTag(PagedPool, 12LL * *((unsigned __int16 *)P + 17) + 18, 0x41627845u);
    v6 = P;
    if ( P )
      MicArrayDescriptor = USBHwAllocateAndBag(&P, v10);
    else
      MicArrayDescriptor = -1073741670;
    if ( MicArrayDescriptor >= 0 )
    {
      *v6 = v9[9];
      v6[1] = v9[10];
      v6[2] = v9[11];
      v6[3] = v9[12];
      v6[4] = v9[13];
      v6[5] = v9[14];
      v6[6] = v9[15];
      v6[7] = v9[16];
      v6[8] = v9[17];
      if ( v9[17] )
      {
        do
        {
          v11 = v5++;
          v12 = 3 * v11;
          v6[2 * v12 + 9] = v9[6 * v11 + 18];
          v6[2 * v12 + 10] = v9[6 * v11 + 19];
          v6[2 * v12 + 11] = v9[6 * v11 + 20];
          v6[2 * v12 + 12] = v9[6 * v11 + 21];
          v6[2 * v12 + 13] = v9[6 * v11 + 22];
          v6[2 * v12 + 14] = v9[6 * v11 + 23];
        }
        while ( v5 < (unsigned __int16)v9[17] );
      }
    }
    ExFreePool(v9);
  }
  result = (unsigned int)MicArrayDescriptor;
  *a3 = v6;
  return result;
}
