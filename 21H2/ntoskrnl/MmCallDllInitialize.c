/*
 * XREFs of MmCallDllInitialize @ 0x1407AC690
 * Callers:
 *     MiLoadImportDll @ 0x1407AC5E0 (MiLoadImportDll.c)
 *     PipInitializeDriverDependentDLLs @ 0x140A5E5DC (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFindExportedRoutineByName @ 0x1406A2010 (RtlFindExportedRoutineByName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x1409C2F70 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x1409C37AC (VfDriverInitSuccess.c)
 */

__int64 __fastcall MmCallDllInitialize(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v6)(UNICODE_STRING *); // r14
  unsigned __int16 v7; // ax
  wchar_t *Pool; // rax
  wchar_t *v9; // rdi
  unsigned int Length; // esi
  const void *v11; // rdx
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  __int64 v14; // rcx
  unsigned int inited; // edi
  int v16; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(void **)(a1 + 48);
  Destination = 0LL;
  Source = 0LL;
  result = (__int64)RtlFindExportedRoutineByName(v4, "DllInitialize");
  v6 = (__int64 (__fastcall *)(UNICODE_STRING *))result;
  if ( result )
  {
    v7 = *(_WORD *)(a1 + 88);
    if ( (unsigned __int16)(v7 + 2) < v7 )
      return 3221225734LL;
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
      if ( (unsigned __int16)(CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length) > CmRegistryMachineSystemCurrentControlSetServices.Length )
      {
        if ( (unsigned __int16)(v12 + 4) < v12 )
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
              Source.Length = 2 * (v13 - v9);
              LOWORD(Length) = Source.Length;
            }
            v9[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
            RtlAppendUnicodeStringToString(&Destination, &Source);
            ExFreePoolWithTag(v9, 0);
            inited = VfDriverInitStarting(v14);
            v16 = v6(&Destination);
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( v16 >= 0 && !byte_140C4CD28 )
              VfDriverInitSuccess(inited, a2);
            return (unsigned int)v16;
          }
          v16 = -1073741670;
        }
        ExFreePoolWithTag(v9, 0);
        return (unsigned int)v16;
      }
      ExFreePoolWithTag(v9, 0);
      return 3221225734LL;
    }
    return 3221225626LL;
  }
  return result;
}
