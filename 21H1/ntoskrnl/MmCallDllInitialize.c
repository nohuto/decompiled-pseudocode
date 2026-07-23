/*
 * XREFs of MmCallDllInitialize @ 0x1407932E0
 * Callers:
 *     MiLoadImportDll @ 0x140793230 (MiLoadImportDll.c)
 *     PipInitializeDriverDependentDLLs @ 0x140A56670 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     wcschr @ 0x1403CFAD0 (wcschr.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlFindExportedRoutineByName @ 0x1406FA690 (RtlFindExportedRoutineByName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x1409BEF60 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x1409BF79C (VfDriverInitSuccess.c)
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
            if ( v16 >= 0 && !byte_140C4CC28 )
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
