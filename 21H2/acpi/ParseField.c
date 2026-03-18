/*
 * XREFs of ParseField @ 0x1C0015980
 * Callers:
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(__int64 a1, unsigned __int8 *a2, int *a3, _DWORD *a4, _BYTE *a5, _DWORD **a6)
{
  unsigned int v6; // esi
  unsigned __int8 *v7; // rbp
  unsigned __int8 *v11; // r9
  __int64 v12; // r8
  int v13; // r12d
  int v14; // ecx
  __int64 v15; // rcx
  unsigned __int8 v16; // r8
  unsigned __int8 *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned int v21; // r8d
  _SLIST_ENTRY *v22; // rax
  __int64 v23; // r9
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  _BYTE *v27; // rax
  char v29; // cl
  unsigned int v30; // eax
  __int64 v31; // r9
  _DWORD *v32; // r8
  const char *v33; // rcx
  __int64 v34; // rcx
  bool v35; // di
  int v36; // ecx
  int v37; // ecx
  _BYTE *v38; // rax
  __int64 v39; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v40; // [rsp+40h] [rbp-68h]
  unsigned __int8 v41[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v7 = a2;
  v40 = a5;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 28);
  v11 = *(unsigned __int8 **)(a1 + 120);
  v12 = *v11;
  if ( (((_BYTE)v12 - 1) & 0xFD) == 0 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v35 = (_BYTE)v12 == 3;
    *a3 &= 0xFFFFFFF0;
    *a3 |= **(_BYTE **)(a1 + 120) & 0xF;
    if ( (_BYTE)v12 == 3 || (**(_BYTE **)(a1 + 120) & 0xC0) == 0 )
    {
      ++*(_QWORD *)(a1 + 120);
      *((_BYTE *)a3 + 1) = 0;
      *a3 |= *(unsigned __int8 *)(*(_QWORD *)(a1 + 120))++ << 8;
      v38 = *(_BYTE **)(a1 + 120);
      if ( (_BYTE)v12 != 3 )
      {
        *a5 = 0;
LABEL_57:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1, a2, v12, v11);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v35 )
            ConPrintf(",0x%x)\n");
          else
            ConPrintf(")\n");
        }
        goto LABEL_25;
      }
    }
    else
    {
      *((_BYTE *)a3 + 1) = 0;
      v36 = *a3;
      a2 = (unsigned __int8 *)**(unsigned __int8 **)(a1 + 120);
      LOBYTE(a2) = (unsigned __int8)a2 & 0xC0;
      if ( (_BYTE)a2 == 64 )
      {
        v37 = v36 | 0xB00;
      }
      else
      {
        v37 = v36 | 0xF00;
        if ( (_BYTE)a2 == 0x80 )
          v37 = *a3 | 0xE00;
      }
      *a3 = v37;
      v35 = 1;
      v38 = (_BYTE *)++*(_QWORD *)(a1 + 120);
    }
    *a5 = *v38;
    ++*(_QWORD *)(a1 + 120);
    goto LABEL_57;
  }
  if ( (_BYTE)v12 == 2 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v30 = ParseFieldConnection(a1, a6);
    v6 = v30;
    if ( v30 )
    {
      LogError(v30);
      AcpiDiagTraceAmlError(a1, v6);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      v32 = *a6;
      (*a6)[1] = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, (unsigned int)gDebugger, v32, v31);
        if ( **a6 == 1 )
          ConPrintf("Connection(%s)");
        else
          ConPrintf("Connection(%02x %02x %02x %02x ...)");
      }
    }
  }
  else
  {
    v13 = 1;
    v14 = *a3 & 0xF;
    if ( (unsigned int)(v14 - 1) <= 3 )
      v13 = 1 << (v14 - 1);
    v39 = 0LL;
    if ( (_BYTE)v12 )
    {
      v15 = 5LL;
      a2 = v41;
      while ( v15 != 1 )
      {
        v16 = a2[v11 - v41];
        if ( !v16 )
        {
          if ( !v15 )
            --a2;
          break;
        }
        *a2 = v16;
        --v15;
        ++a2;
      }
      *a2 = 0;
      v17 = v11 + 4;
    }
    else
    {
      v41[0] = 0;
      v17 = v11 + 1;
    }
    *(_QWORD *)(a1 + 120) = v17;
    v18 = *v17;
    *(_QWORD *)(a1 + 120) = v17 + 1;
    v19 = v18 >> 6;
    if ( (_BYTE)v19 )
    {
      v18 &= 0xFu;
      LOBYTE(v11) = 0;
      do
      {
        a2 = *(unsigned __int8 **)(a1 + 120);
        v29 = (char)v11;
        LOBYTE(v11) = (_BYTE)v11 + 1;
        v18 |= *a2 << (8 * v29 + 4);
        *(_QWORD *)(a1 + 120) = a2 + 1;
      }
      while ( (unsigned __int8)v11 < (unsigned __int8)v19 );
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, v19, v11);
      if ( v41[0] )
      {
        ConPrintf("%s,%d");
      }
      else
      {
        if ( v18 <= 0x20 || (((_BYTE)v18 + *(_BYTE *)a4) & 7) != 0 )
          v33 = ",%d";
        else
          v33 = "Offset(0x%x)";
        ConPrintf(v33);
      }
    }
    v6 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           v41,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           &v39,
           0);
    if ( !v6 )
    {
      v20 = v39;
      v21 = 40;
      *(_WORD *)(v39 + 66) = 5;
      *(_DWORD *)(v20 + 88) = 40;
      if ( *a6 )
      {
        v21 = (*a6)[3] + 40;
        *(_DWORD *)(v20 + 88) = v21;
      }
      v22 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1430537800, v21);
      *(_QWORD *)(v20 + 96) = v22;
      if ( v22 )
      {
        memset(v22, 0, *(unsigned int *)(v20 + 88));
        v23 = *(_QWORD *)(v20 + 96);
        *(_QWORD *)v23 = v7;
        v7 = 0LL;
        *(_DWORD *)(v23 + 20) = *a3;
        v24 = v13 * (*a4 / (unsigned int)(8 * v13));
        *(_DWORD *)(v23 + 8) = v24;
        v25 = *a4;
        *(_DWORD *)(v23 + 16) = v18;
        v26 = v25 - 8 * v24;
        v27 = v40;
        *(_DWORD *)(v23 + 12) = v26;
        *(_BYTE *)(v23 + 24) = *v27;
        if ( *a6 )
        {
          *(_DWORD *)(v23 + 28) = **a6;
          *(_DWORD *)(v23 + 32) = (*a6)[1];
          *(_DWORD *)(v23 + 36) = (*a6)[3];
          memmove((void *)(v23 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
        }
        *a4 += v18;
      }
      else
      {
        v6 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(124, 0, 0, 0, 0LL);
      }
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 112), 0xFFFFFFFF) == 1 )
      {
        v34 = v39;
        *(_WORD *)(v39 + 64) |= 4u;
        if ( (*(_WORD *)(v34 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v34);
      }
    }
  }
LABEL_25:
  if ( v7 )
    DereferenceObjectEx(v7);
  return v6;
}
