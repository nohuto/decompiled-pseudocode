/*
 * XREFs of MmCallDllInitialize @ 0x14082ED84
 * Callers:
 *     MiLoadImportDll @ 0x14082ECCC (MiLoadImportDll.c)
 *     PipInitializeDriverDependentDLLs @ 0x140B10F48 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140A7BE34 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140A7C528 (VfDriverInitSuccess.c)
 */

unsigned __int64 __fastcall MmCallDllInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 (__fastcall *v6)(UNICODE_STRING *); // r14
  unsigned __int16 v7; // ax
  wchar_t *Pool; // rax
  wchar_t *v9; // rdi
  unsigned int Length; // ebx
  const void *v11; // rdx
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  __int64 v14; // rcx
  unsigned int inited; // edi
  int v16; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  Destination = 0LL;
  Source = 0LL;
  result = RtlFindExportedRoutineByName(v4, "DllInitialize");
  v6 = (__int64 (__fastcall *)(UNICODE_STRING *))result;
  if ( result )
  {
    v7 = *(_WORD *)(a1 + 88);
    if ( (unsigned __int16)(v7 + 2) < v7 )
    {
      return 3221225734LL;
    }
    else
    {
      Source.MaximumLength = v7 + 2;
      Pool = (wchar_t *)MiAllocatePool(256, (unsigned __int16)(v7 + 2), 0x54446D4Du);
      Source.Buffer = Pool;
      v9 = Pool;
      if ( Pool )
      {
        v11 = *(const void **)(a1 + 96);
        Source.Length = *(_WORD *)(a1 + 88);
        Length = Source.Length;
        memmove(Pool, v11, Source.Length);
        v12 = CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length;
        if ( (unsigned __int16)(CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length) <= CmRegistryMachineSystemCurrentControlSetServices.Length
          || (unsigned __int16)(v12 + 4) < v12 )
        {
          v16 = -1073741562;
        }
        else
        {
          Destination.MaximumLength = v12 + 4;
          Destination.Buffer = (wchar_t *)MiAllocatePool(64, (unsigned __int16)(v12 + 4), 0x54446D4Du);
          if ( Destination.Buffer )
          {
            Destination.Length = CmRegistryMachineSystemCurrentControlSetServices.Length;
            memmove(
              Destination.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Length);
            RtlAppendUnicodeToString(&Destination, L"\\");
            v9[(unsigned __int64)Length >> 1] = 0;
            v13 = wcschr(v9, 0x2Eu);
            if ( v13 )
            {
              LOWORD(Length) = 2 * (v13 - v9);
              Source.Length = Length;
            }
            v9[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
            RtlAppendUnicodeStringToString(&Destination, &Source);
            ExFreePoolWithTag(v9, 0);
            inited = VfDriverInitStarting(v14);
            v16 = v6(&Destination);
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( v16 >= 0 && !byte_140C4F4A8 )
              VfDriverInitSuccess(inited, a2);
            return (unsigned int)v16;
          }
          v16 = -1073741670;
        }
        ExFreePoolWithTag(v9, 0);
        return (unsigned int)v16;
      }
      return 3221225626LL;
    }
  }
  return result;
}
