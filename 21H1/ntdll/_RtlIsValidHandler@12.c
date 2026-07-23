/*
 * XREFs of _RtlIsValidHandler@12 @ 0x4B2E9163
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     _RtlCaptureImageExceptionValues@12 @ 0x4B2B9DFF (_RtlCaptureImageExceptionValues@12.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

char __fastcall RtlIsValidHandler(PVOID BaseAddress, int a2, PCONTEXT ContextRecord)
{
  _CONTEXT *v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // esi
  signed int v8; // edx
  int v9; // edx
  size_t v11; // [esp-4h] [ebp-A8h]
  size_t v12; // [esp-4h] [ebp-A8h]
  _BYTE MemoryInformation[4]; // [esp+Ch] [ebp-98h] BYREF
  PVOID BaseOfImage; // [esp+10h] [ebp-94h]
  char v15; // [esp+20h] [ebp-84h]
  int v16; // [esp+24h] [ebp-80h]
  int v17; // [esp+28h] [ebp-7Ch] BYREF
  int v18; // [esp+2Ch] [ebp-78h]
  int v19; // [esp+30h] [ebp-74h]
  int v20; // [esp+34h] [ebp-70h]
  PCONTEXT v21; // [esp+38h] [ebp-6Ch]
  unsigned int v22; // [esp+3Ch] [ebp-68h] BYREF
  int v23; // [esp+40h] [ebp-64h] BYREF
  int ProcessInformation; // [esp+44h] [ebp-60h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+48h] [ebp-5Ch] BYREF
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  ProcessInformation = a2;
  v4 = ContextRecord;
  v21 = ContextRecord;
  if ( (unsigned int)BaseAddress < dword_4B3A9374[0]
    || (unsigned int)BaseAddress >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    v5 = RtlpxLookupFunctionTable(BaseAddress, (int)&v17, (int)&savedregs, (ULONG_PTR *)&ContextRecord->ContextFlags);
    a2 = ProcessInformation;
  }
  else
  {
    v17 = dword_4B3A9370[0];
    v18 = dword_4B3A9370[1];
    v19 = dword_4B3A9370[2];
    v20 = dword_4B3A9370[3];
    v5 = dword_4B3A9370[0];
    v4 = v21;
  }
  if ( v5 )
  {
    v6 = v20;
    v7 = v18;
    v23 = v20;
  }
  else
  {
    v6 = v23;
    v7 = v22;
  }
  v22 = v5;
  if ( v5 && v6 )
  {
    if ( v5 == -1 && v6 == -1 )
    {
      LODWORD(v11) = 80;
      memset(&ExceptionRecord, 0, v11);
      ExceptionRecord.ExceptionInformation[0] = 1;
    }
    else
    {
      v23 = (int)BaseAddress - v7;
      v8 = 0;
      v22 = 0;
      while ( v6 >= v8 )
      {
        v9 = (v6 + v8) >> 1;
        v4 = v21;
        if ( (unsigned int)v23 >= *(_DWORD *)(v5 + 4 * v9) )
        {
          v4 = v21;
          if ( (unsigned int)v23 <= *(_DWORD *)(v5 + 4 * v9) )
            return 1;
          v8 = v9 + 1;
          v22 = v8;
        }
        else
        {
          if ( !v9 )
            break;
          v6 = v9 - 1;
          v8 = v22;
        }
      }
      LODWORD(v11) = 80;
      memset(&ExceptionRecord, 0, v11);
      ExceptionRecord.ExceptionInformation[0] = 2;
    }
    goto LABEL_22;
  }
  if ( !a2 )
  {
    if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &ProcessInformation, 4u, 0) >= 0 )
    {
      LOBYTE(a2) = ProcessInformation;
    }
    else
    {
      LOBYTE(a2) = 0;
      ProcessInformation = 0;
    }
  }
  if ( (a2 & 0x30) == 0x30
    || NtQueryVirtualMemory(
         (HANDLE)0xFFFFFFFF,
         BaseAddress,
         MemoryBasicInformation,
         MemoryInformation,
         0x1CuLL,
         (PSIZE_T)HIDWORD(v11)) < 0 )
  {
    return 1;
  }
  if ( (v15 & 0xF0) != 0 )
  {
    if ( v16 == 0x1000000 )
    {
      RtlCaptureImageExceptionValues(BaseOfImage, &v22, (unsigned int *)&v23);
      if ( v22 && v23 )
      {
        LODWORD(v12) = 80;
        memset(&ExceptionRecord, 0, v12);
        ExceptionRecord.ExceptionInformation[0] = 5;
        goto LABEL_22;
      }
    }
    else if ( (ProcessInformation & 0x20) == 0 )
    {
      LODWORD(v12) = 80;
      memset(&ExceptionRecord, 0, v12);
      ExceptionRecord.ExceptionInformation[0] = 4;
      goto LABEL_22;
    }
    return 1;
  }
  if ( (ProcessInformation & 0x10) != 0 )
    return 1;
  LODWORD(v12) = 80;
  memset(&ExceptionRecord, 0, v12);
  ExceptionRecord.ExceptionInformation[0] = 3;
LABEL_22:
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionCode = -1073741403;
  ExceptionRecord.ExceptionAddress = BaseAddress;
  RtlReportException(&ExceptionRecord, v4, 0);
  return 0;
}
