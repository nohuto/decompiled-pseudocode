/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1404FE830
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     MmAllocateContiguousNodeMemory @ 0x1402F8F60 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x1402F9FE0 (MmFreeContiguousMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1403F3F90 (ZwFilterBootOption.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KdCopyDataBlock @ 0x14050AC98 (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r12
  NTSTATUS v2; // eax
  PVOID *v3; // rdi
  __int64 *v4; // r14
  unsigned int v5; // r15d
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  _BYTE Data[8]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  _DWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF

  v15[0] = 2012912317;
  v15[1] = 1295123289;
  v15[2] = -198680387;
  v15[3] = 1266192359;
  Data[0] = 0;
  *(_QWORD *)&v13 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v13 + 1) = 0xB50211F197DACBD4uLL;
  v14 = 0x199B7088610836E8LL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140C50B34 = 0;
    LODWORD(qword_140C50B20) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140C50B08;
    qword_140C50B18 = 9112LL;
    v4 = (__int64 *)&unk_140C50B08;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140C50B18, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140C50B18);
      v8 = *v4;
      *(_OWORD *)v8 = v13;
      *(_QWORD *)(v8 + 16) = v14;
      if ( v1 )
        KdCopyDataBlock(*v4 + 8216, v7);
      ++v5;
      ++v4;
      if ( v5 >= 2 )
      {
        v9 = __rdtsc();
        LODWORD(qword_140C50B28) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_140C50B28) = v10;
        HIDWORD(qword_140C50B28) = ExGenRandom(1) & 0x7FFFFFFF;
        v11 = IoSetEnvironmentVariableEx(
                (unsigned int)L"DumpInstance",
                (unsigned int)v15,
                (unsigned int)&qword_140C50B28,
                8,
                7);
        if ( v11 < 0 )
        {
          dword_140C50B34 = v11;
          qword_140C50B28 = 0x4547415045474150LL;
        }
        dword_140C50B04 = 1;
        goto LABEL_18;
      }
    }
    dword_140C50B34 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_18:
    _InterlockedExchange(InMemData, 0);
  }
}
