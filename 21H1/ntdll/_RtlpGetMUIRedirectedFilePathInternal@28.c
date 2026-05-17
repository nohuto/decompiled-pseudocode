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

int __fastcall RtlpGetMUIRedirectedFilePathInternal(
        const unsigned __int16 *a1,
        void *a2,
        _DWORD *a3,
        char a4,
        void *a5,
        const void *a6,
        int a7)
{
  const unsigned __int16 *v7; // esi
  int v8; // ebx
  _WORD *v9; // edx
  int appended; // esi
  void *Heap; // eax
  int v14; // [esp+14h] [ebp-30h] BYREF
  void *Src; // [esp+18h] [ebp-2Ch]
  void *v16; // [esp+1Ch] [ebp-28h]
  void *v17; // [esp+24h] [ebp-20h]
  int v18; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v17 = a2;
  v7 = a1;
  v8 = 0;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
    goto LABEL_27;
  }
  v9 = a1 + 1;
  while ( *a1++ )
    ;
  if ( (unsigned int)(a1 - v9) < 0x104 )
  {
    Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 520);
    v8 = (int)Heap;
    v16 = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_27;
    }
    ms_exc.registration.TryLevel = 0;
    v14 = 34078720;
    Src = Heap;
    appended = RtlAppendUnicodeToString((unsigned __int16 *)&v14, v7);
    v18 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString((unsigned __int16 *)&v14, L"\\");
      v18 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v14, &a6);
        v18 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v14, L"\\");
          v18 = appended;
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v14, (const unsigned __int16 *)v17);
            v18 = appended;
            if ( appended >= 0 )
            {
              if ( !a4
                || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v14, L".mui"), v18 = appended,
                                                                                            appended >= 0) )
              {
                if ( RtlDoesFileExists_UEx(Src, 1) )
                {
                  if ( !a5 )
                  {
                    if ( a3 )
                      *a3 = ((unsigned __int16)v14 >> 1) + 1;
                    goto LABEL_10;
                  }
                  v17 = (void *)((unsigned __int16)v14 >> 1);
                  if ( *a3 >= (unsigned int)v17 + 1 )
                  {
                    memcpy(a5, Src, (unsigned __int16)v14);
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
  if ( v8 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
    return v18;
  }
  return appended;
}
