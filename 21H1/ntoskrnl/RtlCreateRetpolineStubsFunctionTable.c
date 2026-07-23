/*
 * XREFs of RtlCreateRetpolineStubsFunctionTable @ 0x140589FB8
 * Callers:
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForRetpoline @ 0x140589E28 (RtlCalculateUnwindInfoSizeForRetpoline.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058A0B0 (RtlpGetRetpolineStubsFunctionTable.c)
 */

__int64 __fastcall RtlCreateRetpolineStubsFunctionTable(__int64 a1, _DWORD *a2, int a3)
{
  PVOID v3; // rdi
  _DWORD *RetpolineStubsFunctionTable; // rsi
  __int64 result; // rax
  unsigned int v7; // r10d
  int v8; // r11d
  _DWORD *v9; // r14
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // eax
  int v13; // r11d
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v15 = HIDWORD(a1);
  v3 = PsNtosImageBase;
  v14 = 0;
  RetpolineStubsFunctionTable = (_DWORD *)RtlpGetRetpolineStubsFunctionTable(
                                            (_DWORD)PsNtosImageBase,
                                            (_DWORD)PsNtosImageBase,
                                            (_DWORD)a2,
                                            a3,
                                            (__int64)&v14);
  if ( !RetpolineStubsFunctionTable )
    return 3221226021LL;
  v7 = v14;
  if ( v14 > 0x32 )
    return 2147483653LL;
  v8 = (_DWORD)a2 + *a2;
  if ( v14 )
  {
    v9 = &unk_140E01A74;
    v10 = v14;
    do
    {
      v11 = (_DWORD)v3 + RetpolineStubsFunctionTable[1];
      *(v9 - 1) = (_DWORD)v3 + *RetpolineStubsFunctionTable - (_DWORD)a2;
      *v9 = v11 - (_DWORD)a2;
      v9[1] = v8 - (_DWORD)a2;
      v12 = RtlCalculateUnwindInfoSizeForRetpoline((__int64)v3, (__int64)RetpolineStubsFunctionTable, 0LL);
      v9 += 3;
      v8 = v12 + v13;
      RetpolineStubsFunctionTable += 3;
      --v10;
    }
    while ( v10 );
  }
  RtlRetpolineStubsFunctionTableSize = 12 * v7;
  dword_140C00E90 = 12 * v7;
  result = 0LL;
  qword_140C00E88 = (__int64)&RtlRetpolineStubsFunctionTable;
  return result;
}
