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

int __fastcall LdrpResSearchResourceHandle(
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
  int result; // eax
  int File; // edi
  int Heap; // eax
  unsigned int v15; // edi
  unsigned __int16 v16; // cx
  unsigned int v17; // ebx
  int v18; // esi
  const wchar_t *v19; // esi
  const wchar_t *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  unsigned int *v25; // ecx
  unsigned int v26; // ebx
  int v27; // [esp-4h] [ebp-480h]
  char v28[2]; // [esp+10h] [ebp-46Ch] BYREF
  __int16 v29; // [esp+12h] [ebp-46Ah]
  unsigned __int16 *v30; // [esp+14h] [ebp-468h]
  unsigned __int16 v31[2]; // [esp+18h] [ebp-464h] BYREF
  const wchar_t *v32; // [esp+1Ch] [ebp-460h]
  unsigned int v33; // [esp+20h] [ebp-45Ch] BYREF
  unsigned int *v34; // [esp+2Ch] [ebp-450h]
  unsigned int *v35; // [esp+30h] [ebp-44Ch]
  int v36; // [esp+34h] [ebp-448h] BYREF
  void *v37; // [esp+38h] [ebp-444h]
  wchar_t **v38; // [esp+3Ch] [ebp-440h]
  unsigned __int16 v39[2]; // [esp+40h] [ebp-43Ch] BYREF
  const wchar_t *v40; // [esp+44h] [ebp-438h]
  unsigned int *v41; // [esp+48h] [ebp-434h]
  int v42; // [esp+4Ch] [ebp-430h]
  int v43; // [esp+50h] [ebp-42Ch]
  void *v44; // [esp+54h] [ebp-428h]
  unsigned __int16 v45; // [esp+58h] [ebp-424h] BYREF
  const wchar_t *v46; // [esp+5Ch] [ebp-420h]
  int v47; // [esp+60h] [ebp-41Ch]
  __int16 v48[260]; // [esp+64h] [ebp-418h] BYREF
  __int16 v49[30]; // [esp+26Ch] [ebp-210h] BYREF
  unsigned int v50; // [esp+2A8h] [ebp-1D4h]
  int v51; // [esp+2ACh] [ebp-1D0h] BYREF
  __int16 v52; // [esp+2B0h] [ebp-1CCh]
  unsigned __int16 v53; // [esp+2B2h] [ebp-1CAh]
  unsigned __int16 v54; // [esp+2C0h] [ebp-1BCh]
  __int16 v55; // [esp+2C4h] [ebp-1B8h]
  unsigned int v56; // [esp+320h] [ebp-15Ch]
  unsigned int v57; // [esp+330h] [ebp-14Ch]
  unsigned int v58; // [esp+334h] [ebp-148h]
  int v59; // [esp+338h] [ebp-144h]
  unsigned int v60; // [esp+344h] [ebp-138h]
  int v61; // [esp+348h] [ebp-134h]
  unsigned __int16 Src[88]; // [esp+3B4h] [ebp-C8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+464h] [ebp-18h]

  v42 = a2;
  v44 = a1;
  v38 = a3;
  v34 = a5;
  v35 = a6;
  v37 = a7;
  v41 = a8;
  v39[0] = 66;
  v39[1] = 68;
  v40 = L"LdrpResSearchResourceHandle Enter";
  v31[0] = 64;
  v31[1] = 66;
  v32 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACu);
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
    LdrpTraceLoadMUIDll(v39, *(unsigned __int8 *)v11);
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
  v43 = v42 & 0x1000;
  result = LdrpResFileSize((int)a1, &v33);
  if ( result < 0 && v43 )
    return result;
  result = LdrpResReadFile(a1, (int)v49, 64);
  if ( result < 0 )
    return result;
  if ( v49[0] != 23117 )
    goto LABEL_16;
  v15 = v50;
  if ( v43 )
  {
    if ( (RtlULongPtrAdd(v50, 248, &v36) & 0x80000000) != 0 || v15 > 0x10000000 || v15 + 248 < v15 || v15 + 248 >= v33 )
      goto LABEL_16;
  }
  result = LdrpResReadFile(v44, (int)&v51, 264);
  if ( result < 0 )
    return result;
  if ( v51 != 17744 )
    goto LABEL_16;
  if ( v55 == 267 )
  {
    if ( v52 == 332 || v52 == 448 || v52 == 450 || v52 == 452 )
    {
      if ( v56 > 2 && v59 )
      {
        v16 = v54;
        if ( v54 >= 0x78u )
        {
          v17 = v58;
          goto LABEL_42;
        }
        goto LABEL_16;
      }
LABEL_31:
      File = -1073741687;
      goto LABEL_17;
    }
  }
  else if ( v55 == 523 && (v52 == 512 || v52 == -31132) )
  {
    if ( v57 > 2 && v61 )
    {
      v16 = v54;
      if ( v54 >= 0x88u )
      {
        v17 = v60;
LABEL_42:
        if ( !v17 )
          return -1073741687;
        if ( !v53 || (v18 = 40 * v53, v15 + v18 + v16 + 24 > v33) )
        {
          File = -1073741701;
          v47 = -1073741701;
          Heap = 0;
LABEL_58:
          v10 = 2147353476;
          goto LABEL_59;
        }
        Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v18);
        v46 = (const wchar_t *)Heap;
        v36 = Heap;
        if ( !Heap )
        {
          File = -1073741801;
          v47 = -1073741801;
          goto LABEL_58;
        }
        v27 = v18;
        v19 = v46;
        File = LdrpResReadFile(v44, (int)v46, v27);
        v47 = File;
        if ( File >= 0 )
        {
          v20 = v19;
          v40 = v19;
          v21 = 0;
          if ( v53 )
          {
            do
            {
              if ( v17 >= *((_DWORD *)v20 + 3) && v17 < *((_DWORD *)v20 + 3) + *((_DWORD *)v20 + 4) )
                break;
              v20 += 20;
              ++v21;
            }
            while ( v21 < v53 );
            v40 = v20;
          }
          if ( v21 < v53 && (v23 = v17 + *((_DWORD *)v20 + 5) - *((_DWORD *)v20 + 3)) != 0 )
          {
            v24 = (int)v44;
            File = LdrpResSetFilePointer(v44, v23);
            v47 = File;
            if ( File >= 0 )
            {
              if ( a4 == 3 )
              {
                v48[0] = 0;
                if ( (v42 & 0x20) != 0 )
                {
                  v48[0] = 1;
                  v48[2] = 0;
                }
                else
                {
                  File = LdrResFallbackLangList(0, 0, *((_WORD *)v38 + 4), v42, (unsigned __int16 *)v48);
                  v47 = File;
                  if ( File < 0 && v43 )
                    goto LABEL_57;
                }
              }
              v45 = 0;
              File = LdrpResSearchResourceInsideDirectory(
                       0,
                       v24,
                       v33,
                       v23,
                       (int)&v51,
                       (int)v40,
                       v38,
                       a4,
                       v48,
                       v34,
                       v35,
                       v42,
                       &v45);
              v47 = File;
              if ( File >= 0 )
              {
                v25 = v41;
                if ( v41 )
                {
                  if ( v45 )
                  {
                    v30 = Src;
                    v29 = 172;
                    File = RtlLcidToLocaleName(v45, (int)v28, 2, 0);
                    v47 = File;
                    if ( File < 0 )
                      goto LABEL_80;
                    v26 = wcslen(Src);
                    v25 = v41;
                  }
                  else
                  {
                    v26 = 0;
                  }
                  ms_exc.registration.TryLevel = 0;
                  if ( v26 < *v25 && v37 )
                  {
                    memcpy(v37, Src, 2 * v26);
                    *v41 = v26 + 1;
                    *((_WORD *)v37 + v26) = 0;
                    ms_exc.registration.TryLevel = -2;
                    goto LABEL_57;
                  }
                  *v25 = v26 + 1;
                  File = -1073741789;
                  v47 = -1073741789;
                  ms_exc.registration.TryLevel = -2;
LABEL_80:
                  Heap = (int)v46;
                  goto LABEL_58;
                }
              }
            }
          }
          else
          {
            File = -1073741701;
            v47 = -1073741701;
          }
        }
LABEL_57:
        Heap = (int)v46;
        goto LABEL_58;
      }
      goto LABEL_16;
    }
    goto LABEL_31;
  }
LABEL_16:
  File = -1073741701;
LABEL_17:
  v47 = File;
  Heap = 0;
LABEL_59:
  if ( Heap )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v47;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v22 = (int)NtCurrentPeb()->SharedData + 555;
    File = v47;
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
      File = v47;
    }
    LdrpTraceLoadMUIDll(v31, *(unsigned __int8 *)v10);
  }
  return File;
}
