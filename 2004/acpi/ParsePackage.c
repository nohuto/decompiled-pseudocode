/*
 * XREFs of ParsePackage @ 0x1C0021EA0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     ParseObjName @ 0x1C0021D54 (ParseObjName.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     PrintIndent @ 0x1C0066760 (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int8 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // ecx
  _BYTE *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v17; // r8d
  void *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *i; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // r9
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a3 )
    v7 = 2;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C0082804;
    }
    goto LABEL_6;
  }
  v33 = v7 - 1;
  if ( v33 )
  {
    if ( v33 != 1 )
      return v4;
LABEL_41:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C0082804;
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("}");
      --dword_1C0082804;
    }
    v19 = *(_QWORD **)(a1 + 416);
    v20 = v19 - 2;
    *(_QWORD *)(a1 + 416) = v19[1];
    *((_DWORD *)v19 - 4) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v21 = *(v19 - 1);
    v22 = *(_QWORD **)(v21 + 40);
    for ( i = (_QWORD *)(v21 + 40); v22 != i; v22 = (_QWORD *)*v22 )
    {
      if ( v19 < v22 )
        break;
    }
    v24 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v24 == v22 )
    {
      v19[1] = v24;
      *v19 = v22;
      *v24 = v19;
      v22[1] = v19;
      v25 = (_QWORD *)*v19;
      v26 = *v19 - 16LL;
      if ( (_QWORD *)*v19 != i )
      {
        v35 = *((unsigned int *)v20 + 1);
        if ( (_QWORD *)v26 == (_QWORD *)((char *)v20 + v35) )
        {
          *((_DWORD *)v20 + 1) = v35 + *(_DWORD *)(v26 + 4);
          v36 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_94;
          v37 = (_QWORD *)v25[1];
          if ( (_QWORD *)*v37 != v25 )
            goto LABEL_94;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
        }
      }
      v27 = (_QWORD *)v20[3];
      v28 = v27 - 2;
      if ( v27 != i )
      {
        v38 = *((unsigned int *)v28 + 1);
        if ( v20 == (_QWORD *)((char *)v28 + v38) )
        {
          *((_DWORD *)v28 + 1) = *((_DWORD *)v20 + 1) + v38;
          v39 = *v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 )
            goto LABEL_94;
          v40 = (_QWORD *)v19[1];
          if ( (_QWORD *)*v40 != v19 )
            goto LABEL_94;
          *v40 = v39;
          v20 = v28;
          *(_QWORD *)(v39 + 8) = v40;
        }
      }
      if ( *(_QWORD *)(v21 + 32) > (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
      {
LABEL_51:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v4;
      }
      *(_QWORD *)(v21 + 32) = v20;
      v29 = v20 + 2;
      v30 = *v29;
      if ( *(_QWORD **)(*v29 + 8LL) == v29 )
      {
        v31 = (_QWORD *)v29[1];
        if ( (_QWORD *)*v31 == v29 )
        {
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          goto LABEL_51;
        }
      }
    }
LABEL_94:
    __fastfail(3u);
  }
LABEL_6:
  a2 = *(_QWORD *)(a1 + 120);
  a3 = *(_QWORD *)(v5 + 48);
  while ( 1 )
  {
    a4 = 1LL;
    if ( a2 >= a3 )
      break;
    while ( 1 )
    {
      v8 = *(int *)(v5 + 40);
      if ( (unsigned int)v8 >= **(_DWORD **)(v5 + 32) )
        goto LABEL_36;
      *(_DWORD *)(v5 + 40) = v8 + 1;
      if ( (gDebugger & 0xD0) != 0 && (int)v8 > 0 )
      {
        ConPrintf(",");
        a4 = 1LL;
      }
      if ( (unsigned __int8)(**(_BYTE **)(a1 + 120) - 17) > 2u )
        break;
      v4 = ParseOpcode(a1, 0LL);
      if ( v4 )
        goto LABEL_36;
      if ( v5 != *(_QWORD *)(a1 + 416) )
        return v4;
LABEL_24:
      if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(v5 + 48) )
        goto LABEL_37;
      a4 = 1LL;
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, 1LL);
      a4 = 1LL;
    }
    v9 = *(unsigned __int8 **)(a1 + 120);
    v10 = 40 * v8;
    v11 = 40 * v8 + *(_QWORD *)(v5 + 32);
    v12 = *v9;
    *(_QWORD *)(a1 + 120) = v9 + 1;
    a2 = v12;
    *(_WORD *)(v11 + 10) = 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    if ( v12 != 13 )
    {
      if ( v12 == 12 )
      {
        *(_DWORD *)(v11 + 24) = **(_DWORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 4LL;
        goto LABEL_33;
      }
      if ( v12 > 0xC )
      {
        if ( v12 == 14 )
        {
          *(_QWORD *)(v11 + 24) = **(_QWORD **)(a1 + 120);
          *(_QWORD *)(a1 + 120) += 8LL;
          goto LABEL_33;
        }
        if ( v12 == 255 )
        {
          if ( IsCompatableDSDTRevision() )
            v34 = -1LL;
          else
            v34 = 0xFFFFFFFFLL;
          *(_QWORD *)(v11 + 24) = v34;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Ones");
          goto LABEL_35;
        }
      }
      else
      {
        if ( !(_BYTE)v12 )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Zero");
          goto LABEL_35;
        }
        a2 = v12 - 1;
        if ( v12 == 1 )
        {
          *(_QWORD *)(v11 + 24) = 1LL;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("One");
          goto LABEL_35;
        }
        a2 = v12 - 10;
        if ( v12 == 10 )
        {
          *(_BYTE *)(v11 + 24) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
LABEL_33:
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("0x%I64x");
LABEL_35:
          v4 = 0;
LABEL_23:
          if ( v4 )
            break;
          goto LABEL_24;
        }
        if ( v12 == 11 )
        {
          *(_WORD *)(v11 + 24) = **(_WORD **)(a1 + 120);
          *(_QWORD *)(a1 + 120) += 2LL;
          goto LABEL_33;
        }
      }
    }
    v4 = 0;
    v13 = (_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    *(_QWORD *)(a1 + 120) = v13;
    v14 = v10 + *(_QWORD *)(v5 + 32);
    if ( *v13 == 13 )
    {
      *(_QWORD *)(a1 + 120) = v13 + 1;
      v15 = -1LL;
      *(_WORD *)(v14 + 10) = 2;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 120) + v15++ + 1) != 0 )
        ;
      v17 = v15 + 1;
      *(_DWORD *)(v14 + 32) = v15 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("\"%s\"");
        v17 = *(_DWORD *)(v14 + 32);
      }
      v18 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v17);
      *(_QWORD *)(v14 + 40) = v18;
      if ( v18 )
      {
        memmove(v18, *(const void **)(a1 + 120), *(unsigned int *)(v14 + 32));
      }
      else
      {
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(139, 0, 0, 0, 0LL);
        v4 = -1073741670;
      }
      *(_QWORD *)(a1 + 120) += *(unsigned int *)(v14 + 32);
    }
    else
    {
      v4 = -1072431103;
    }
    if ( v4 != -1072431103 )
      goto LABEL_23;
    v4 = ParseObjName(a1, (char **)(a1 + 120), v10 + *(_QWORD *)(v5 + 32) + 8LL, 1);
    if ( v4 != -1072431103 )
      goto LABEL_23;
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
LABEL_37:
    if ( v5 != *(_QWORD *)(a1 + 416) )
      return v4;
    if ( !v4 )
    {
      a2 = *(_QWORD *)(a1 + 120);
      a3 = *(_QWORD *)(v5 + 48);
      if ( a2 < a3 && *(_DWORD *)(v5 + 40) < **(_DWORD **)(v5 + 32) )
        continue;
    }
    ++*(_DWORD *)(v5 + 16);
    goto LABEL_41;
  }
LABEL_36:
  if ( v4 != 32772 )
    goto LABEL_37;
  return v4;
}
