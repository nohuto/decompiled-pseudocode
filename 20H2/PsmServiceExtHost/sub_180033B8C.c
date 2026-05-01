/*
 * XREFs of sub_180033B8C @ 0x180033B8C
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180074970 @ 0x180074970 (sub_180074970.c)
 */

__int64 __fastcall sub_180033B8C(__int64 a1, int a2, int a3)
{
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF
  int v13; // [rsp+90h] [rbp+28h] BYREF
  int v14; // [rsp+98h] [rbp+30h] BYREF

  v4 = 2;
  if ( a2 <= 1 )
    goto LABEL_2;
  if ( a2 == 2 )
  {
    v5 = 1;
  }
  else
  {
    if ( (unsigned int)(a2 - 3) > 1 )
    {
LABEL_2:
      v5 = 0;
      goto LABEL_3;
    }
    v5 = 2;
  }
LABEL_3:
  LODWORD(v10) = v5;
  if ( a3 <= 1 )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  if ( a3 == 2 )
  {
    v4 = 1;
  }
  else if ( (unsigned int)(a3 - 3) > 1 )
  {
    goto LABEL_4;
  }
LABEL_5:
  result = *(_QWORD *)(a1 + 96);
  HIDWORD(v10) = v4;
  if ( result != v10 )
  {
    RtlPublishWnfStateData(0x41C6033FA3BC0875LL, 0LL, &v10, 8LL, 0LL);
    if ( (unsigned int)dword_1800B31E0 > 5 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v11 = v10;
        v14 = *(_DWORD *)(a1 + 96);
        v12 = HIDWORD(v10);
        v13 = *(_DWORD *)(a1 + 100);
        v9 = v8;
        sub_180074970(
          v13,
          (unsigned int)&unk_18009E024,
          v7,
          v8,
          (__int64)&v9,
          (__int64)&v14,
          (__int64)&v11,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
    result = v10;
    *(_QWORD *)(a1 + 96) = v10;
  }
  return result;
}
