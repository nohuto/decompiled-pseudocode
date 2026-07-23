/*
 * XREFs of _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358
 * Callers:
 *     _RtlpGetMUIRedirectedFilePath@32 @ 0x4B35421A (_RtlpGetMUIRedirectedFilePath@32.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __fastcall RtlpGetMUIRedirectedFilePathInternal(
        const WCHAR *a1,
        const WCHAR *a2,
        _DWORD *a3,
        char a4,
        void *a5,
        UNICODE_STRING Source)
{
  const WCHAR *v6; // esi
  void *v7; // ebx
  _WORD *v8; // edx
  NTSTATUS appended; // esi
  PVOID Heap; // eax
  SIZE_T v13; // [esp-4h] [ebp-48h]
  size_t v14; // [esp-4h] [ebp-48h]
  _UNICODE_STRING Destination; // [esp+14h] [ebp-30h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-28h]
  PCWSTR v17; // [esp+24h] [ebp-20h]
  NTSTATUS v18; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v17 = a2;
  v6 = a1;
  v7 = 0;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
    goto LABEL_27;
  }
  v8 = a1 + 1;
  while ( *a1++ )
    ;
  if ( (unsigned int)(a1 - v8) < 0x104 )
  {
    LODWORD(v13) = 520;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
    v7 = Heap;
    BaseAddress = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_27;
    }
    ms_exc.registration.TryLevel = 0;
    Destination.Length = 0;
    Destination.MaximumLength = 520;
    Destination.Buffer = (wchar_t *)Heap;
    appended = RtlAppendUnicodeToString(&Destination, v6);
    v18 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      v18 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, &Source);
        v18 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          v18 = appended;
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&Destination, v17);
            v18 = appended;
            if ( appended >= 0 )
            {
              if ( !a4 || (appended = RtlAppendUnicodeToString(&Destination, L".mui"), v18 = appended, appended >= 0) )
              {
                if ( RtlDoesFileExists_UEx((PCWSTR)Destination.Buffer, 1) )
                {
                  if ( !a5 )
                  {
                    if ( a3 )
                      *a3 = (Destination.Length >> 1) + 1;
                    goto LABEL_10;
                  }
                  v17 = (PCWSTR)(Destination.Length >> 1);
                  if ( *a3 >= (unsigned int)v17 + 1 )
                  {
                    LODWORD(v14) = Destination.Length;
                    memcpy(a5, Destination.Buffer, v14);
                    *((_WORD *)a5 + (_DWORD)v17) = 0;
                    goto LABEL_10;
                  }
                  *a3 = (char *)v17 + 1;
                  appended = -1073741789;
                }
                else
                {
                  appended = -1073741809;
                }
                v18 = appended;
              }
            }
          }
        }
      }
    }
LABEL_10:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_28;
  }
  appended = -1073741306;
LABEL_27:
  v18 = appended;
LABEL_28:
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return v18;
  }
  return appended;
}
