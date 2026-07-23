/*
 * XREFs of _LdrpResSearchResourceHandle@32 @ 0x4B3434F8
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _LdrpResFileSize@8 @ 0x4B34303A (_LdrpResFileSize@8.c)
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 *     _LdrpResSetFilePointer@8 @ 0x4B343B27 (_LdrpResSetFilePointer@8.c)
 */

NTSTATUS __fastcall LdrpResSearchResourceHandle(
        void *a1,
        int a2,
        wchar_t **a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6,
        void *a7,
        unsigned int *a8)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  NTSTATUS result; // eax
  NTSTATUS File; // edi
  PVOID Heap; // eax
  unsigned int v15; // edi
  unsigned __int16 v16; // cx
  unsigned int v17; // ebx
  int v18; // esi
  const wchar_t *v19; // esi
  const wchar_t *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // esi
  HANDLE v24; // ebx
  unsigned int *v25; // ecx
  unsigned int v26; // ebx
  size_t v27; // [esp-4h] [ebp-480h]
  SIZE_T v28; // [esp-4h] [ebp-480h]
  size_t v29; // [esp-4h] [ebp-480h]
  ULONG v30; // [esp-4h] [ebp-480h]
  _UNICODE_STRING LocaleName; // [esp+10h] [ebp-46Ch] BYREF
  unsigned __int16 v32[2]; // [esp+18h] [ebp-464h] BYREF
  const wchar_t *v33; // [esp+1Ch] [ebp-460h]
  int StackCookie; // [esp+20h] [ebp-45Ch] BYREF
  unsigned int *v35; // [esp+2Ch] [ebp-450h]
  unsigned int *v36; // [esp+30h] [ebp-44Ch]
  PVOID v37; // [esp+34h] [ebp-448h] BYREF
  void *v38; // [esp+38h] [ebp-444h]
  wchar_t **v39; // [esp+3Ch] [ebp-440h]
  unsigned __int16 v40[2]; // [esp+40h] [ebp-43Ch] BYREF
  const wchar_t *v41; // [esp+44h] [ebp-438h]
  unsigned int *v42; // [esp+48h] [ebp-434h]
  int v43; // [esp+4Ch] [ebp-430h]
  int v44; // [esp+50h] [ebp-42Ch]
  HANDLE FileHandle; // [esp+54h] [ebp-428h]
  unsigned __int16 v46; // [esp+58h] [ebp-424h] BYREF
  PVOID v47; // [esp+5Ch] [ebp-420h]
  int v48; // [esp+60h] [ebp-41Ch]
  __int16 v49[260]; // [esp+64h] [ebp-418h] BYREF
  __int16 Buffer[30]; // [esp+26Ch] [ebp-210h] BYREF
  unsigned int v51; // [esp+2A8h] [ebp-1D4h]
  int v52; // [esp+2ACh] [ebp-1D0h] BYREF
  __int16 v53; // [esp+2B0h] [ebp-1CCh]
  unsigned __int16 v54; // [esp+2B2h] [ebp-1CAh]
  unsigned __int16 v55; // [esp+2C0h] [ebp-1BCh]
  __int16 v56; // [esp+2C4h] [ebp-1B8h]
  unsigned int v57; // [esp+320h] [ebp-15Ch]
  unsigned int v58; // [esp+330h] [ebp-14Ch]
  unsigned int v59; // [esp+334h] [ebp-148h]
  int v60; // [esp+338h] [ebp-144h]
  unsigned int v61; // [esp+344h] [ebp-138h]
  int v62; // [esp+348h] [ebp-134h]
  unsigned __int16 Src[88]; // [esp+3B4h] [ebp-C8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+464h] [ebp-18h]

  v43 = a2;
  FileHandle = a1;
  v39 = a3;
  v35 = a5;
  v36 = a6;
  v38 = a7;
  v42 = a8;
  v40[0] = 66;
  v40[1] = 68;
  v41 = L"LdrpResSearchResourceHandle Enter";
  v32[0] = 64;
  v32[1] = 66;
  v33 = L"LdrpResSearchResourceHandle Exit";
  LODWORD(v27) = 172;
  memset(Src, 0, v27);
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v10 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    LdrpTraceLoadMUIDll(v40, (void *)*(unsigned __int8 *)v11);
  }
  else
  {
    v10 = 2147353476;
  }
  if ( !a1 || a1 == (void *)-1 )
  {
    File = -1073741811;
    goto LABEL_17;
  }
  v44 = v43 & 0x1000;
  result = LdrpResFileSize(a1, &StackCookie);
  if ( result < 0 && v44 )
    return result;
  result = LdrpResReadFile(a1, Buffer, 0x40u);
  if ( result < 0 )
    return result;
  if ( Buffer[0] != 23117 )
    goto LABEL_16;
  v15 = v51;
  if ( v44 )
  {
    if ( (RtlULongPtrAdd(v51, 248, (int *)&v37) & 0x80000000) != 0
      || v15 > 0x10000000
      || v15 + 248 < v15
      || v15 + 248 >= StackCookie )
    {
      goto LABEL_16;
    }
  }
  result = LdrpResReadFile(FileHandle, &v52, 0x108u);
  if ( result < 0 )
    return result;
  if ( v52 != 17744 )
    goto LABEL_16;
  if ( v56 == 267 )
  {
    if ( v53 == 332 || v53 == 448 || v53 == 450 || v53 == 452 )
    {
      if ( v57 > 2 && v60 )
      {
        v16 = v55;
        if ( v55 >= 0x78u )
        {
          v17 = v59;
          goto LABEL_42;
        }
        goto LABEL_16;
      }
LABEL_31:
      File = -1073741687;
      goto LABEL_17;
    }
  }
  else if ( v56 == 523 && (v53 == 512 || v53 == -31132) )
  {
    if ( v58 > 2 && v62 )
    {
      v16 = v55;
      if ( v55 >= 0x88u )
      {
        v17 = v61;
LABEL_42:
        if ( !v17 )
          return -1073741687;
        if ( !v54 || (v18 = 40 * v54, v15 + v18 + v16 + 24 > StackCookie) )
        {
          File = -1073741701;
          v48 = -1073741701;
          Heap = 0;
LABEL_58:
          v10 = 2147353476;
          goto LABEL_59;
        }
        LODWORD(v28) = 40 * v54;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
        v47 = Heap;
        v37 = Heap;
        if ( !Heap )
        {
          File = -1073741801;
          v48 = -1073741801;
          goto LABEL_58;
        }
        v30 = v18;
        v19 = (const wchar_t *)v47;
        File = LdrpResReadFile(FileHandle, v47, v30);
        v48 = File;
        if ( File >= 0 )
        {
          v20 = v19;
          v41 = v19;
          v21 = 0;
          if ( v54 )
          {
            do
            {
              if ( v17 >= *((_DWORD *)v20 + 3) && v17 < *((_DWORD *)v20 + 3) + *((_DWORD *)v20 + 4) )
                break;
              v20 += 20;
              ++v21;
            }
            while ( v21 < v54 );
            v41 = v20;
          }
          if ( v21 < v54 && (v23 = v17 + *((_DWORD *)v20 + 5) - *((_DWORD *)v20 + 3)) != 0 )
          {
            v24 = FileHandle;
            File = LdrpResSetFilePointer(FileHandle);
            v48 = File;
            if ( File >= 0 )
            {
              if ( a4 == 3 )
              {
                v49[0] = 0;
                if ( (v43 & 0x20) != 0 )
                {
                  v49[0] = 1;
                  v49[2] = 0;
                }
                else
                {
                  File = LdrResFallbackLangList(0, 0, *((_WORD *)v39 + 4), v43, (unsigned __int16 *)v49);
                  v48 = File;
                  if ( File < 0 && v44 )
                    goto LABEL_57;
                }
              }
              v46 = 0;
              File = LdrpResSearchResourceInsideDirectory(
                       0,
                       v24,
                       StackCookie,
                       v23,
                       (int)&v52,
                       (int)v41,
                       v39,
                       a4,
                       v49,
                       v35,
                       v36,
                       v43,
                       &v46);
              v48 = File;
              if ( File >= 0 )
              {
                v25 = v42;
                if ( v42 )
                {
                  if ( v46 )
                  {
                    LocaleName.Buffer = Src;
                    LocaleName.MaximumLength = 172;
                    File = RtlLcidToLocaleName(v46, &LocaleName, 2u, 0);
                    v48 = File;
                    if ( File < 0 )
                      goto LABEL_80;
                    v26 = wcslen(Src);
                    v25 = v42;
                  }
                  else
                  {
                    v26 = 0;
                  }
                  ms_exc.registration.TryLevel = 0;
                  if ( v26 < *v25 && v38 )
                  {
                    LODWORD(v29) = 2 * v26;
                    memcpy(v38, Src, v29);
                    *v42 = v26 + 1;
                    *((_WORD *)v38 + v26) = 0;
                    ms_exc.registration.TryLevel = -2;
                    goto LABEL_57;
                  }
                  *v25 = v26 + 1;
                  File = -1073741789;
                  v48 = -1073741789;
                  ms_exc.registration.TryLevel = -2;
LABEL_80:
                  Heap = v47;
                  goto LABEL_58;
                }
              }
            }
          }
          else
          {
            File = -1073741701;
            v48 = -1073741701;
          }
        }
LABEL_57:
        Heap = v47;
        goto LABEL_58;
      }
      goto LABEL_16;
    }
    goto LABEL_31;
  }
LABEL_16:
  File = -1073741701;
LABEL_17:
  v48 = File;
  Heap = 0;
LABEL_59:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v48;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v22 = (int)NtCurrentPeb()->SharedData + 555;
    File = v48;
  }
  else
  {
    v22 = 2147353477;
  }
  if ( (*(_BYTE *)v22 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v10 = (int)NtCurrentPeb()->SharedData + 554;
      File = v48;
    }
    LdrpTraceLoadMUIDll(v32, (void *)*(unsigned __int8 *)v10);
  }
  return File;
}
