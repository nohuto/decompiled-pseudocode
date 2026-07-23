/*
 * XREFs of PnprAddMemoryResources @ 0x1408ACFC4
 * Callers:
 *     PnprAddDeviceResources @ 0x1408ACF40 (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14024F980 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, void **a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // r14
  __int64 v5; // rbp
  unsigned int *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // r15d
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r13d
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // r13
  ULONGLONG v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+70h] [rbp+8h]
  ULONGLONG Start; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v24; // [rsp+80h] [rbp+18h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+88h] [rbp+20h]

  Start = 0LL;
  v3 = (unsigned int *)*a2;
  v4 = (unsigned int *)*a2;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned int **)(v5 + 416);
  if ( !v6 )
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = 632;
    *(_DWORD *)(PnprContext + 20984) = v8;
    v9 = *(_DWORD *)(v7 + 20988);
    if ( !v9 )
      v9 = 6;
    *(_DWORD *)(v7 + 20988) = v9;
    goto LABEL_10;
  }
  v12 = 0;
  v13 = v6 + 1;
  if ( !*v6 )
  {
LABEL_10:
    *a2 = v3;
    if ( v3 != v4 )
      ExFreePoolWithTag(v4, 0x51706E50u);
    return 0;
  }
  while ( 1 )
  {
    v14 = 0LL;
    if ( v13[3] )
      break;
LABEL_24:
    ++v12;
    v13 = (_DWORD *)((char *)v13 + (unsigned int)(v14 + 36));
    if ( v12 >= *v6 )
      goto LABEL_10;
  }
  while ( 1 )
  {
    Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v13[4 * v14 + 4 + v14];
    if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      break;
LABEL_23:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13[3] )
      goto LABEL_24;
  }
  v15 = v3[1];
  if ( v15 != *v3 )
  {
LABEL_22:
    v18 = RtlCmDecodeMemIoResource(Descriptor, &Start);
    *(_QWORD *)&v3[4 * v3[1] + 4] = Start;
    *(_QWORD *)&v3[4 * v3[1] + 6] = v18;
    *((_QWORD *)v3 + 1) += v18;
    ++v3[1];
    goto LABEL_23;
  }
  v22 = v15 + 4;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v15 + 5), 0x51706E50u);
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v3, 16 * (v15 + 1));
    v17 = v24;
    *v24 = v22;
    if ( v3 != v4 )
      ExFreePoolWithTag(v3, 0x51706E50u);
    v3 = v17;
    goto LABEL_22;
  }
  v19 = PnprContext;
  v10 = -1073741670;
  v20 = *(_DWORD *)(PnprContext + 20984);
  if ( !v20 )
    v20 = 672;
  *(_DWORD *)(PnprContext + 20984) = v20;
  v21 = *(_DWORD *)(v19 + 20988);
  if ( !v21 )
    v21 = 10;
  *(_DWORD *)(v19 + 20988) = v21;
  *a2 = v4;
  if ( v3 != v4 )
    ExFreePoolWithTag(v3, 0x51706E50u);
  return v10;
}
