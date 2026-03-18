/*
 * XREFs of _GetTaskName@12 @ 0x141D7C
 * Callers:
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall GetTaskName(int a1, _WORD *a2, unsigned int a3)
{
  size_t v3; // esi
  const void **v5; // edx
  size_t v6; // edi
  PEPROCESS ThreadProcess; // eax
  const char *ProcessImageFileName; // eax
  struct _STRING DestinationString; // [esp+Ch] [ebp-10h] BYREF
  struct _UNICODE_STRING v11; // [esp+14h] [ebp-8h] BYREF

  v3 = 0;
  v5 = *(const void ***)(a1 + 268);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v11.Length = 0;
  v11.Buffer = 0;
  if ( v5 )
  {
    v6 = a3;
    v3 = *(unsigned __int16 *)v5 + 2;
    if ( v3 >= a3 )
      v3 = a3;
    memcpy(a2, v5[1], v3);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(ThreadProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    v6 = a3;
    if ( a3 < 2 )
      return 2 * DestinationString.Length + 2;
    v11.Buffer = a2;
    v11.MaximumLength = a3 - 2;
    if ( RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0) < 0 )
    {
      *a2 = 0;
      return v3;
    }
    v3 = v11.Length + 2;
  }
  if ( v3 > v6 )
    v3 = v6;
  a2[(v3 >> 1) - 1] = 0;
  return v3;
}
