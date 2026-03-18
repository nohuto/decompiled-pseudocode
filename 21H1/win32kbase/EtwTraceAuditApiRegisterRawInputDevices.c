/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1C00A2440
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer @ 0x1C00A2644 (McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A2AC8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C00A2BCC (-EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJE.c)
 */

void __fastcall EtwTraceAuditApiRegisterRawInputDevices(
        int a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        struct tagTHREADINFO *a6,
        PVOID BaseAddress,
        __int64 a8,
        char a9)
{
  PEPROCESS *v9; // rcx
  int v10; // eax
  char v11; // r13
  PVOID v12; // rsi
  const WCHAR *v13; // r14
  char ProcessStartKey; // al
  __int64 v15; // rdi
  char v16; // bl
  unsigned int ThreadInfoFlags; // eax
  int v18; // r8d
  PVOID P; // [rsp+C8h] [rbp-80h] BYREF
  LONGLONG TimeQuadPart; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-58h]
  __int128 v24; // [rsp+100h] [rbp-48h]

  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C024B738 - 1) > 2u
    && (qword_1C024B720 & 0x400) != 0
    && (qword_1C024B728 & 0x400) == qword_1C024B728 )
  {
    P = 0LL;
    MemoryInformation = 0LL;
    v9 = (PEPROCESS *)*((_QWORD *)a6 + 52);
    v23 = 0LL;
    v24 = 0LL;
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v9);
    v21 = a8;
    v10 = EtwpTraceAuditApiQueryAddressVADInformation(
            BaseAddress,
            &MemoryInformation,
            (struct _OBJECT_NAME_INFORMATION **)&P);
    v11 = v10;
    if ( v10 < 0 )
    {
      MemoryInformation = 0LL;
      v23 = 0LL;
      v24 = 0LL;
    }
    v12 = P;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
    {
      if ( P )
        v13 = (const WCHAR *)*((_QWORD *)P + 1);
      else
        v13 = &word_1C0211C10;
      ProcessStartKey = PsGetProcessStartKey(**((_QWORD **)a6 + 52));
      v15 = *((_QWORD *)a6 + 52);
      v16 = ProcessStartKey;
      ThreadInfoFlags = EtwpGetThreadInfoFlags(a6);
      McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer(
        DWORD2(MemoryInformation),
        ThreadInfoFlags,
        v18,
        a1,
        a2,
        a3,
        a4,
        a5,
        (char)BaseAddress,
        (__int64)&v21,
        a9,
        *((_DWORD *)a6 + 222),
        *((_DWORD *)a6 + 223),
        ThreadInfoFlags,
        *(_DWORD *)(v15 + 56),
        (__int64)&TimeQuadPart,
        v16,
        (__int64)v13,
        v11,
        SBYTE8(MemoryInformation),
        v23,
        SBYTE8(v24),
        SBYTE8(v23),
        SBYTE4(v24));
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x6D6D4B45u);
  }
}
