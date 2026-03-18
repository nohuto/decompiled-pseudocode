/*
 * XREFs of AccFieldUnit @ 0x1C0009CF0
 * Callers:
 *     <none>
 * Callees:
 *     WriteField @ 0x1C00228D0 (WriteField.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     PushAccFieldObj @ 0x1C00249B0 (PushAccFieldObj.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     PrintObject @ 0x1C00667A4 (PrintObject.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // edx
  _DWORD *v7; // rsi
  int v8; // edx
  int v9; // edx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *i; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r9
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  __int16 v25; // ax
  int v26; // eax
  __int64 v27; // r9
  _DWORD *v28; // r8
  __int64 v29; // rdx
  unsigned int Field; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // r8
  __int64 v38; // rcx
  _QWORD *v39; // rax

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          goto LABEL_7;
        return v3;
      }
      goto LABEL_22;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v7 + 96LL) + 16LL,
                             8);
  }
  ++*(_DWORD *)(a2 + 16);
  v23 = v7[5];
  if ( (v23 & 0x80000010) == 0 )
  {
    v24 = *(_QWORD *)v7;
    v25 = *(_WORD *)(*(_QWORD *)v7 + 66LL);
    if ( v25 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_22;
    }
    else
    {
      if ( v25 != 132 )
        goto LABEL_22;
      v37 = *(_QWORD **)(v24 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*v37 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(v37[1] + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_22;
      }
    }
  }
  v3 = 0;
  v7[5] = v23 | 0x80000000;
  if ( ghGlobalLock )
  {
    v32 = ghGlobalLock(5LL, 0LL, qword_1C00831B0, RestartCtxtCallback, a1 + 328);
    v3 = v32;
    if ( v32 == 259 )
      return 32772;
    if ( v32 )
    {
      v3 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  if ( v3 )
    return v3;
LABEL_22:
  v26 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v26;
  if ( (int)v7[5] < 0 )
  {
    v26 |= 0x20000u;
    *(_DWORD *)(a2 + 16) = v26;
  }
  v27 = *(_QWORD *)(a2 + 40);
  v28 = v7 + 2;
  v29 = *(_QWORD *)(a2 + 32);
  if ( (v26 & 0x10000) != 0 )
    Field = ReadField(a1, v29, v28, v27);
  else
    Field = WriteField(a1, v29, v28, v27);
  v3 = Field;
  if ( Field != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_7:
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_1C00831B0, 0LL, a1 + 328);
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    v10 = *(_QWORD **)(a1 + 416);
    v11 = v10 - 2;
    *(_QWORD *)(a1 + 416) = v10[1];
    *((_DWORD *)v10 - 4) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v12 = *(v10 - 1);
    v13 = *(_QWORD **)(v12 + 40);
    for ( i = (_QWORD *)(v12 + 40); v13 != i; v13 = (_QWORD *)*v13 )
    {
      if ( v10 < v13 )
        break;
    }
    v15 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v15 == v13 )
    {
      v10[1] = v15;
      *v10 = v13;
      *v15 = v10;
      v13[1] = v10;
      v16 = (_QWORD *)*v10;
      v17 = *v10 - 16LL;
      if ( (_QWORD *)*v10 != i )
      {
        v34 = *((unsigned int *)v11 + 1);
        if ( (_QWORD *)v17 == (_QWORD *)((char *)v11 + v34) )
        {
          *((_DWORD *)v11 + 1) = v34 + *(_DWORD *)(v17 + 4);
          v35 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 )
            goto LABEL_51;
          v36 = (_QWORD *)v16[1];
          if ( (_QWORD *)*v36 != v16 )
            goto LABEL_51;
          *v36 = v35;
          *(_QWORD *)(v35 + 8) = v36;
        }
      }
      v18 = (_QWORD *)v11[3];
      v19 = v18 - 2;
      if ( v18 != i )
      {
        v33 = *((unsigned int *)v19 + 1);
        if ( v11 == (_QWORD *)((char *)v19 + v33) )
        {
          *((_DWORD *)v19 + 1) = *((_DWORD *)v11 + 1) + v33;
          v38 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            goto LABEL_51;
          v39 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v39 != v10 )
            goto LABEL_51;
          *v39 = v38;
          v11 = v19;
          *(_QWORD *)(v38 + 8) = v39;
        }
      }
      if ( *(_QWORD *)(v12 + 32) > (unsigned __int64)v11 + *((unsigned int *)v11 + 1) )
      {
LABEL_17:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v3;
      }
      *(_QWORD *)(v12 + 32) = v11;
      v20 = v11 + 2;
      v21 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) == v20 )
      {
        v22 = (_QWORD *)v20[1];
        if ( (_QWORD *)*v22 == v20 )
        {
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          goto LABEL_17;
        }
      }
    }
LABEL_51:
    __fastfail(3u);
  }
  return v3;
}
