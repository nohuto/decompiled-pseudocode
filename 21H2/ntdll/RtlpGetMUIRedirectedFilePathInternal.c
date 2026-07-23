/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x1800463F4
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x1800467D0 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlDoesFileExists_UEx @ 0x180046798 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        PCUNICODE_STRING Source,
        PCWSTR a2,
        PCWSTR a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  wchar_t *v10; // r12
  unsigned __int64 v11; // rax
  wchar_t *Heap; // rax
  NTSTATUS appended; // ebx
  unsigned __int64 v14; // r14
  unsigned __int32 v16; // [rsp+20h] [rbp-48h]
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_35;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_35:
    v16 = appended;
    goto LABEL_29;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v10 = Heap;
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_35;
  }
  *(_QWORD *)&Destination.Length = 34078720LL;
  Destination.Buffer = Heap;
  appended = RtlAppendUnicodeToString(&Destination, a2);
  v16 = appended;
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    v16 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      v16 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        v16 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, a3);
          v16 = appended;
          if ( appended >= 0 )
          {
            if ( !a5 || (appended = RtlAppendUnicodeToString(&Destination, L".mui"), v16 = appended, appended >= 0) )
            {
              if ( !(unsigned __int8)RtlDoesFileExists_UEx(Destination.Buffer) )
              {
                appended = -1073741809;
LABEL_19:
                v16 = appended;
                goto LABEL_29;
              }
              if ( a6 )
              {
                v14 = (unsigned __int64)Destination.Length >> 1;
                if ( (unsigned int)*a4 >= v14 + 1 )
                {
                  memmove(a6, Destination.Buffer, Destination.Length);
                  *((_WORD *)a6 + v14) = 0;
                  goto LABEL_29;
                }
                *a4 = v14 + 1;
                appended = -1073741789;
                goto LABEL_19;
              }
              if ( a4 )
                *a4 = (Destination.Length >> 1) + 1;
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v16;
  }
  return (unsigned int)appended;
}
