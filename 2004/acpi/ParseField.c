/*
 * XREFs of ParseField @ 0x1C0021AD0
 * Callers:
 *     ParseFieldList @ 0x1C00219D8 (ParseFieldList.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     PrintIndent @ 0x1C0066760 (PrintIndent.c)
 *     ParseFieldConnection @ 0x1C006B8A4 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(__int64 a1, unsigned __int64 i, __int64 a3, _DWORD *a4, _BYTE *a5, _DWORD **a6)
{
  unsigned __int64 v8; // rbp
  unsigned int v10; // esi
  unsigned __int8 *v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int8 v16; // r8
  unsigned __int8 *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  unsigned int v21; // r8d
  void *v22; // rax
  __int64 v23; // r9
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  _BYTE *v27; // rax
  char v29; // cl
  char v30; // cl
  unsigned int v31; // eax
  __int64 v32; // r9
  _DWORD *v33; // r8
  const char *v34; // rcx
  unsigned __int64 v35; // rcx
  bool v36; // di
  char v37; // cl
  int v38; // eax
  _BYTE *v39; // rax
  int v40; // [rsp+30h] [rbp-78h]
  unsigned __int64 v41; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v42; // [rsp+40h] [rbp-68h]
  unsigned __int8 v43[8]; // [rsp+48h] [rbp-60h] BYREF

  v42 = a5;
  v8 = i;
  v10 = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(i + 112));
  v11 = *(unsigned __int8 **)(a1 + 120);
  v12 = *v11;
  if ( (((_BYTE)v12 - 1) & 0xFD) != 0 )
  {
    if ( (_BYTE)v12 == 2 )
    {
      *(_QWORD *)(a1 + 120) = v11 + 1;
      v31 = ParseFieldConnection(a1, a6);
      v10 = v31;
      if ( v31 )
      {
        LogError(v31);
        AcpiDiagTraceAmlError(a1, v10);
        PrintDebugMessage(125, 0, 0, 0, 0LL);
      }
      else
      {
        v33 = *a6;
        (*a6)[1] = *a4;
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1, (unsigned int)gDebugger, v33, v32);
          if ( **a6 == 1 )
            ConPrintf("Connection(%s)");
          else
            ConPrintf("Connection(%02x %02x %02x %02x ...)");
        }
      }
    }
    else
    {
      v13 = *(_DWORD *)a3 & 0xF;
      v14 = 1LL;
      if ( (unsigned int)(v13 - 1) <= 3 )
      {
        v29 = v13 - 1;
        i = (unsigned int)(1 << v29);
        v40 = 1 << v29;
      }
      else
      {
        v40 = 1;
      }
      v41 = 0LL;
      v15 = 5LL;
      if ( (_BYTE)v12 )
      {
        for ( i = (unsigned __int64)v43; v15 != 1; ++i )
        {
          v16 = *(_BYTE *)(v11 - v43 + i);
          if ( !v16 )
            break;
          *(_BYTE *)i = v16;
          --v15;
        }
        if ( !v15 )
          --i;
        *(_BYTE *)i = 0;
        v14 = 4LL;
      }
      else
      {
        v43[0] = 0;
      }
      v17 = &v11[v14];
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
          i = *(_QWORD *)(a1 + 120);
          v30 = (char)v11;
          LOBYTE(v11) = (_BYTE)v11 + 1;
          v18 |= *(unsigned __int8 *)i << (8 * v30 + 4);
          *(_QWORD *)(a1 + 120) = i + 1;
        }
        while ( (unsigned __int8)v11 < (unsigned __int8)v19 );
      }
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, i, v19, v11);
        if ( v43[0] )
        {
          ConPrintf("%s,%d");
        }
        else
        {
          if ( v18 <= 0x20 || (((_BYTE)v18 + *(_BYTE *)a4) & 7) != 0 )
            v34 = ",%d";
          else
            v34 = "Offset(0x%x)";
          ConPrintf(v34);
        }
      }
      v10 = CreateNameSpaceObject(
              *(_QWORD *)(a1 + 320),
              v43,
              *(_QWORD *)(a1 + 80),
              *(struct _EX_RUNDOWN_REF **)(a1 + 88),
              &v41,
              0);
      if ( !v10 )
      {
        v20 = v41;
        v21 = 40;
        *(_WORD *)(v41 + 66) = 5;
        *(_DWORD *)(v20 + 88) = 40;
        if ( *a6 )
        {
          v21 = (*a6)[3] + 40;
          *(_DWORD *)(v20 + 88) = v21;
        }
        v22 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1430537800, v21);
        *(_QWORD *)(v20 + 96) = v22;
        if ( v22 )
        {
          memset(v22, 0, *(unsigned int *)(v20 + 88));
          v23 = *(_QWORD *)(v20 + 96);
          *(_QWORD *)v23 = v8;
          v8 = 0LL;
          *(_DWORD *)(v23 + 20) = *(_DWORD *)a3;
          v24 = v40 * (*a4 / (unsigned int)(8 * v40));
          *(_DWORD *)(v23 + 8) = v24;
          v25 = *a4;
          *(_DWORD *)(v23 + 16) = v18;
          v26 = v25 - 8 * v24;
          v27 = v42;
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
          v10 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(124, 0, 0, 0, 0LL);
        }
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 112), 0xFFFFFFFF) == 1 )
        {
          v35 = v41;
          *(_WORD *)(v41 + 64) |= 4u;
          if ( (*(_WORD *)(v35 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v35);
        }
      }
    }
    goto LABEL_25;
  }
  *(_QWORD *)(a1 + 120) = v11 + 1;
  v36 = (_BYTE)v12 == 3;
  *(_DWORD *)a3 &= 0xFFFFFFF0;
  *(_DWORD *)a3 |= **(_BYTE **)(a1 + 120) & 0xF;
  if ( (_BYTE)v12 != 3 && (**(_BYTE **)(a1 + 120) & 0xC0) != 0 )
  {
    *(_BYTE *)(a3 + 1) = 0;
    v37 = **(_BYTE **)(a1 + 120) & 0xC0;
    if ( v37 == 64 )
    {
      v38 = 2816;
    }
    else
    {
      v38 = 3840;
      v12 = 3584LL;
      if ( v37 == (char)0x80 )
        v38 = 3584;
    }
    *(_DWORD *)a3 |= v38;
    v36 = 1;
    v39 = (_BYTE *)++*(_QWORD *)(a1 + 120);
    goto LABEL_57;
  }
  ++*(_QWORD *)(a1 + 120);
  *(_BYTE *)(a3 + 1) = 0;
  *(_DWORD *)a3 |= *(unsigned __int8 *)(*(_QWORD *)(a1 + 120))++ << 8;
  v39 = *(_BYTE **)(a1 + 120);
  if ( (_BYTE)v12 == 3 )
  {
LABEL_57:
    *a5 = *v39;
    ++*(_QWORD *)(a1 + 120);
    goto LABEL_58;
  }
  *a5 = 0;
LABEL_58:
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1, i, v12, v11);
    ConPrintf("AccessAs(0x%x,0x%x");
    if ( v36 )
      ConPrintf(",0x%x)\n");
    else
      ConPrintf(")\n");
  }
LABEL_25:
  if ( v8 )
    DereferenceObjectEx(v8);
  return v10;
}
