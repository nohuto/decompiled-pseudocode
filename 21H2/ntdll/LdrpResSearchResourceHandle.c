/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800E472C
 * Callers:
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180056708 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800E4190 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800E4678 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E4E18 (LdrpResSetFilePointer.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // r14
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // ebx
  int result; // eax
  int File; // edi
  PVOID Heap; // rax
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int16 v22; // cx
  unsigned int v23; // r15d
  ULONG v24; // edi
  _DWORD *v25; // rbx
  int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r14
  char *v29; // r15
  _DWORD *v30; // r15
  __int64 v31; // r14
  int v32; // [rsp+70h] [rbp-4D8h]
  unsigned __int16 v33; // [rsp+74h] [rbp-4D4h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-4D0h] BYREF
  int v35; // [rsp+88h] [rbp-4C0h]
  int v36; // [rsp+8Ch] [rbp-4BCh]
  int v37; // [rsp+90h] [rbp-4B8h]
  __int64 v38; // [rsp+98h] [rbp-4B0h] BYREF
  HANDLE Handlea; // [rsp+A0h] [rbp-4A8h]
  __int64 v40; // [rsp+A8h] [rbp-4A0h]
  void *v41; // [rsp+B0h] [rbp-498h]
  _QWORD *v42; // [rsp+B8h] [rbp-490h]
  unsigned __int64 *v43; // [rsp+C0h] [rbp-488h]
  __int64 v44; // [rsp+C8h] [rbp-480h]
  int v45; // [rsp+D0h] [rbp-478h] BYREF
  const wchar_t *v46; // [rsp+D8h] [rbp-470h]
  _UNICODE_STRING LocaleName; // [rsp+E0h] [rbp-468h] BYREF
  int v48; // [rsp+F0h] [rbp-458h] BYREF
  unsigned __int16 v49; // [rsp+F4h] [rbp-454h]
  unsigned __int16 v50; // [rsp+F6h] [rbp-452h]
  unsigned __int16 v51; // [rsp+104h] [rbp-444h]
  __int16 v52; // [rsp+108h] [rbp-440h]
  unsigned int v53; // [rsp+164h] [rbp-3E4h]
  unsigned int v54; // [rsp+174h] [rbp-3D4h]
  unsigned int v55; // [rsp+178h] [rbp-3D0h]
  int v56; // [rsp+17Ch] [rbp-3CCh]
  unsigned int v57; // [rsp+188h] [rbp-3C0h]
  int v58; // [rsp+18Ch] [rbp-3BCh]
  __int16 v59[30]; // [rsp+200h] [rbp-348h] BYREF
  unsigned int v60; // [rsp+23Ch] [rbp-30Ch]
  unsigned __int16 v61[264]; // [rsp+240h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-F8h] BYREF

  v36 = a4;
  v40 = a3;
  v8 = a2;
  v35 = a2;
  Handlea = Handle;
  v43 = a5;
  v42 = a6;
  v41 = a7;
  v44 = a8;
  LODWORD(v34[0]) = 4456514;
  v34[1] = L"LdrpResSearchResourceHandle Enter";
  v45 = 4325440;
  v46 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v34, *(unsigned __int8 *)v13);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v32 = -1073741811;
    Heap = 0LL;
    goto LABEL_56;
  }
  v14 = v8 & 0x1000;
  v37 = v14;
  result = LdrpResFileSize(Handle, &v38);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v59, 0x40u);
  if ( result < 0 )
    return result;
  if ( v59[0] != 23117 )
    goto LABEL_15;
  v18 = v60;
  if ( v14 )
  {
    if ( (unsigned __int64)v60 + 264 < v60 )
      goto LABEL_15;
    if ( v60 > 0x10000000 )
      goto LABEL_15;
    if ( v60 + 264 <= v60 )
      goto LABEL_15;
    v19 = v38;
    if ( (unsigned __int64)v60 + 264 >= (unsigned int)v38 )
      goto LABEL_15;
  }
  else
  {
    v19 = v38;
  }
  result = LdrpResReadFile(Handle, v60, &v48, 0x108u);
  if ( result < 0 )
    return result;
  if ( v48 != 17744 )
    goto LABEL_15;
  if ( v52 == 267 )
  {
    v20 = v49;
    if ( v49 != 332 )
    {
      if ( (unsigned __int16)(v49 - 448) > 4u )
        goto LABEL_15;
      v21 = 21;
      LOWORD(v20) = v49 - 448;
      if ( !_bittest(&v21, v20) )
        goto LABEL_15;
    }
    if ( v53 > 2 && v56 )
    {
      v22 = v51;
      if ( v51 >= 0x78u )
      {
        v23 = v55;
        goto LABEL_42;
      }
      goto LABEL_15;
    }
LABEL_31:
    File = -1073741687;
    goto LABEL_16;
  }
  if ( v52 != 523 || v49 != 512 && v49 != 0x8664 )
    goto LABEL_15;
  if ( v54 <= 2 || !v58 )
    goto LABEL_31;
  v22 = v51;
  if ( v51 >= 0x88u )
  {
    v23 = v57;
LABEL_42:
    if ( !v23 )
      return -1073741687;
    if ( !v50 )
      goto LABEL_15;
    v24 = 40 * v50;
    if ( v18 + v24 + v22 + 24 > v19 )
      goto LABEL_15;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
    v34[0] = Heap;
    if ( !Heap )
    {
      File = -1073741801;
      v32 = -1073741801;
      goto LABEL_56;
    }
    File = LdrpResReadFile((char *)Handlea, v18 + v51 + 24, Heap, v24);
    v32 = File;
    if ( File >= 0 )
    {
      v25 = (_DWORD *)v34[0];
      v26 = 0;
      if ( v50 )
      {
        do
        {
          v27 = v25[3];
          if ( v23 >= v27 && v23 < v25[4] + v27 )
            break;
          v25 += 10;
          ++v26;
        }
        while ( v26 < v50 );
      }
      if ( v26 < v50 && (v28 = v23 + (unsigned int)v25[5] - (unsigned __int64)(unsigned int)v25[3]) != 0 )
      {
        v29 = (char *)Handlea;
        File = LdrpResSetFilePointer(Handlea, v28);
        v32 = File;
        if ( File >= 0 )
        {
          if ( v36 == 3 )
          {
            v61[0] = 0;
            if ( (v35 & 0x20) != 0 )
            {
              v61[0] = 1;
              v61[2] = 0;
            }
            else
            {
              File = LdrResFallbackLangList(0LL, 0, *(_WORD *)(v40 + 16), v35, v61);
              v32 = File;
              if ( File < 0 && v37 )
                goto LABEL_55;
            }
          }
          v33 = 0;
          File = LdrpResSearchResourceInsideDirectory(
                   0LL,
                   v29,
                   (unsigned int)v38,
                   v28,
                   (__int64)&v48,
                   (__int64)v25,
                   v40,
                   v36,
                   (__int64)v61,
                   v43,
                   v42,
                   v35,
                   &v33);
          v32 = File;
          if ( File >= 0 )
          {
            v30 = (_DWORD *)v44;
            if ( v44 )
            {
              if ( !v33 )
              {
                LODWORD(v31) = 0;
                goto LABEL_80;
              }
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              File = RtlLcidToLocaleName(v33, &LocaleName, 2u, 0);
              v32 = File;
              if ( File >= 0 )
              {
                v31 = -1LL;
                do
                  ++v31;
                while ( Src[v31] );
LABEL_80:
                if ( (unsigned int)v31 < *v30 && v41 )
                {
                  memmove(v41, Src, 2LL * (unsigned int)v31);
                  *v30 = v31 + 1;
                  *((_WORD *)v41 + (unsigned int)v31) = 0;
                  Heap = (PVOID)v34[0];
                }
                else
                {
                  *v30 = v31 + 1;
                  File = -1073741789;
                  v32 = -1073741789;
                  Heap = (PVOID)v34[0];
                }
                goto LABEL_56;
              }
            }
          }
        }
      }
      else
      {
        File = -1073741701;
        v32 = -1073741701;
      }
    }
LABEL_55:
    Heap = (PVOID)v34[0];
    goto LABEL_56;
  }
LABEL_15:
  File = -1073741701;
LABEL_16:
  v32 = File;
  Heap = 0LL;
LABEL_56:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v32;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v32;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v32;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v45, *(unsigned __int8 *)v12);
  }
  return File;
}
