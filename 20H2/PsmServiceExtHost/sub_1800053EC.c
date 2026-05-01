/*
 * XREFs of sub_1800053EC @ 0x1800053EC
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 */

__int64 __fastcall sub_1800053EC(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 i; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r9d
  _BYTE ProcessInformation[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * i),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v2;
    }
    else
    {
      if ( a2 == 256 )
      {
        v6 = 0;
      }
      else if ( a2 == 512 )
      {
        v6 = 4;
      }
      else
      {
        v6 = 2;
        if ( a2 != 2048 )
          v6 = 4;
      }
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * i);
      if ( (int)WerpAddTerminationReason(v7, v6, L"HAM", 0LL) < 0 )
        WerpAddTerminationReason(v7, v6, L"HAM", 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
  {
    v13 = v10;
    v14 = v2;
    sub_18006A72C(v8, (unsigned int)&unk_1800A0B0F, v9, v10, (__int64)&v14, (__int64)&v13);
  }
  return v2;
}
