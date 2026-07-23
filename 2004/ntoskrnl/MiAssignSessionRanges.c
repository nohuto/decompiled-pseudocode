/*
 * XREFs of MiAssignSessionRanges @ 0x140A63C94
 * Callers:
 *     MiInitializeDynamicVa @ 0x140A63B2C (MiInitializeDynamicVa.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x140269270 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 MiAssignSessionRanges()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r12
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  _QWORD *v6; // r15
  __int64 v7; // r13
  ULONG v8; // ebx
  int v9; // esi
  unsigned __int64 v10; // rdi
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v14[12]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v15[64]; // [rsp+98h] [rbp-19h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v15;
  v0 = 0LL;
  do
  {
    v1 = 3 * v0;
    LODWORD(v14[v1]) = v0;
    v0 = (unsigned int)(v0 + 1);
    v14[v1 + 2] = 0x2000000000LL;
  }
  while ( (int)v0 < 2 );
  v2 = qword_140C4F968;
  v3 = 3 * v0;
  LODWORD(v14[v3]) = v0;
  v14[v3 + 2] = 0x1000000000LL;
  v4 = v0 + 1;
  v5 = 3LL * v4;
  LODWORD(v14[v5]) = v4;
  v14[v5 + 2] = 290816LL;
  v6 = &v14[1];
  v7 = 4LL;
  v8 = ExGenRandom(1) & 0x1FF;
  do
  {
    v9 = 16;
    v10 = (unsigned __int64)(v6[1] + 0x3FFFFFFFLL) >> 30;
    if ( (unsigned int)v10 < 0x20 )
    {
      v8 = ExGenRandom(1) & 0x1FF;
      v9 = 0;
    }
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v10, v8);
      if ( ClearBitsAndSet == v8 || !v9 )
        break;
      --v9;
      RtlClearBits(&BitMapHeader, ClearBitsAndSet, v10);
      v8 = ExGenRandom(1) & 0x1FF;
    }
    *v6 = v2 + ((unsigned __int64)ClearBitsAndSet << 30);
    v6 += 3;
    v8 = ((_WORD)ClearBitsAndSet + (_WORD)v10 + (unsigned __int8)ExGenRandom(1)) & 0x1FF;
    --v7;
  }
  while ( v7 );
  qword_140C4CBA0 = v14[1];
  qword_140C4CBA8 = v14[4];
  qword_140C4E128 = v14[7];
  result = v14[10];
  qword_140C4DBE0 = v14[10];
  qword_140C4DBD8 = v2;
  return result;
}
