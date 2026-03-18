/*
 * XREFs of DebugRunMethod @ 0x1C00676F0
 * Callers:
 *     <none>
 * Callees:
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0019CB4 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     _strtoui64_0 @ 0x1C002F1E9 (_strtoui64_0.c)
 *     DebugExpr @ 0x1C0067114 (DebugExpr.c)
 *     IsNumber @ 0x1C0067AC4 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C0067DB0 (RunMethodCallBack.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  _BYTE *ObjectPath; // rax
  void *v11; // rdx
  void *v12; // rbx
  unsigned __int64 v14[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    v4 = 235;
LABEL_26:
    PrintDebugMessage(v4, 0, 0, 0, 0LL);
    goto LABEL_27;
  }
  if ( a2 )
  {
    if ( dword_1C00805C4 == -1 )
    {
      v14[0] = 0LL;
      v15 = 0LL;
      v2 = DebugExpr(a2, v14, &v15);
      if ( !v2 )
      {
        if ( !v15 )
        {
          PrintDebugMessage(232, 0, 0, 0, 0LL);
LABEL_27:
          v2 = -4;
          goto LABEL_28;
        }
        qword_1C0082B08 = GetBaseObject(v15);
        DereferenceObjectEx(v5);
        dword_1C00805C4 = 0;
        return v2;
      }
    }
    else
    {
      if ( dword_1C00805C4 >= 7 )
      {
        PrintDebugMessage(236, 0, 0, 0, 0LL);
      }
      else
      {
        v6 = 5LL * dword_1C00805C4;
        *(_OWORD *)((char *)&unk_1C00829F0 + 8 * v6) = 0LL;
        *(_OWORD *)((char *)&unk_1C00829F0 + 8 * v6 + 16) = 0LL;
        *((_QWORD *)&unk_1C00829F0 + v6 + 4) = 0LL;
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v7 = 5LL * dword_1C00805C4;
          *((_QWORD *)&unk_1C00829F0 + v7 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C00805C4;
          *((_WORD *)&unk_1C00829F0 + 4 * v7 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, (_DWORD)a2, 0, 0, 0LL);
      }
      v2 = -2;
    }
LABEL_28:
    dword_1C00805C4 = -1;
    return v2;
  }
  if ( dword_1C00805C4 < 0 )
  {
    v4 = 226;
    goto LABEL_26;
  }
  qword_1C0082B78 = 0LL;
  fRunningMethod = 1;
  xmmword_1C0082B58 = 0LL;
  xmmword_1C0082B68 = 0LL;
  v8 = AsyncEvalObject(
         qword_1C0082B08,
         (_SLIST_ENTRY *)&xmmword_1C0082B58,
         dword_1C00805C4,
         (__int64)&unk_1C00829F0,
         (__int64)RunMethodCallBack,
         0LL,
         1);
  v9 = v8;
  if ( v8 == 32772 )
  {
    ObjectPath = GetObjectPath(qword_1C0082B08);
    v11 = &unk_1C006FB8B;
    v12 = ObjectPath;
    if ( ObjectPath )
      v11 = ObjectPath;
    ConPrintf("\n%s returned PENDING\n", v11);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    RunMethodCallBack(qword_1C0082B08 + 120, v8, &xmmword_1C0082B58, 0LL);
    if ( v9 )
      v2 = -4;
  }
  DereferenceObjectEx(qword_1C0082B08);
  qword_1C0082B08 = 0LL;
  dword_1C00805C4 = -1;
  if ( v2 )
    goto LABEL_28;
  return v2;
}
