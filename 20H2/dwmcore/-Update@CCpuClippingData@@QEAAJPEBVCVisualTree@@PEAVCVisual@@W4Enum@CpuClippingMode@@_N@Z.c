/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800896C0
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18001CFBC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180085320 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800857D4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::Update(
        unsigned int *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        int a4,
        char a5)
{
  int v5; // r14d
  bool v9; // r13
  char v10; // r12
  char *p_Blink; // rsi
  CVisual *Flink; // rsi
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rbp
  char *v16; // rdi
  unsigned int v17; // r9d
  bool v19; // r8
  int v20; // ecx
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  struct _LIST_ENTRY *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  struct _LIST_ENTRY *v29; // rdi
  char v30; // al
  CVisual *v31; // r10
  unsigned __int64 v32; // rax
  __int64 Flink_high; // rax
  struct _LIST_ENTRY **v34; // rdx
  __int64 i; // rcx
  struct _LIST_ENTRY **v36; // rcx
  struct _LIST_ENTRY *v37; // rcx
  unsigned __int64 v38; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  struct _LIST_ENTRY *v45; // rax
  struct _LIST_ENTRY *v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // [rsp+40h] [rbp-58h]
  CVisual *v49; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v51; // [rsp+B0h] [rbp+18h]
  char v52; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v52 = a4 == 2;
  v9 = *a1 == 0;
  v10 = 0;
  p_Blink = 0LL;
  if ( a2[3].Blink == a3 )
  {
    v25 = 3;
    if ( a4 > 3 )
      v25 = a4;
    v5 = v25;
  }
  else
  {
    Flink = (CVisual *)a3[5].Flink;
    v13 = 0LL;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))a2->Flink[12].Blink)(a2) )
    {
      v13 = (struct _LIST_ENTRY *)((char *)Flink + 320);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(Flink);
      if ( TreeDataListHead )
      {
        v40 = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( v40[2].Flink != a2 )
          {
            v40 = v40->Flink;
            if ( v40 == TreeDataListHead )
              goto LABEL_4;
          }
          v13 = v40 - 18;
        }
      }
    }
LABEL_4:
    p_Blink = (char *)&v13[12].Blink;
    if ( LODWORD(v13[12].Blink) == 5 && v5 <= 3 )
      v5 = 3;
  }
  v14 = a3[14].Flink;
  if ( ((__int64)v14->Flink & 0x1000000) == 0 )
    goto LABEL_6;
  Flink_high = HIDWORD(v14->Flink);
  v34 = &v14->Blink;
  for ( i = 0LL; (unsigned int)i < (unsigned int)Flink_high; v34 = (struct _LIST_ENTRY **)((char *)v34 + 1) )
  {
    if ( *(_BYTE *)v34 == 8 )
      break;
    i = (unsigned int)(i + 1);
  }
  v36 = (unsigned int)i >= (unsigned int)Flink_high
      ? 0LL
      : (struct _LIST_ENTRY **)((char *)&v14->Blink + 8 * i - (((_BYTE)Flink_high + 15) & 7) + Flink_high + 7);
  v37 = *v36;
  if ( v37 )
    v15 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v37->Flink->Flink[12].Blink)(v37->Flink);
  else
LABEL_6:
    v15 = 0LL;
  v16 = p_Blink;
  if ( !v15 )
    goto LABEL_8;
  v26 = a2;
  if ( a3 == a2[3].Blink )
    goto LABEL_8;
  v27 = 0LL;
  v28 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v49 = (CVisual *)a3[5].Flink;
  if ( !v49 )
  {
LABEL_73:
    v38 = *((_QWORD *)a1 + 8);
    if ( v27 > v38 )
      v9 = 1;
    goto LABEL_75;
  }
  while ( 1 )
  {
    v29 = 0LL;
    v30 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v26->Flink[12].Blink)(v26);
    v31 = v49;
    if ( v30 )
    {
      v29 = (struct _LIST_ENTRY *)((char *)v49 + 320);
LABEL_58:
      v26 = a2;
      goto LABEL_59;
    }
    v45 = CVisual::GetTreeDataListHead(v49);
    if ( !v45 )
      goto LABEL_58;
    v46 = v45->Flink;
    if ( v45->Flink == v45 )
      goto LABEL_58;
    v26 = a2;
    while ( v46[2].Flink != a2 )
    {
      v46 = v46->Flink;
      if ( v46 == v45 )
        goto LABEL_59;
    }
    v29 = v46 - 18;
LABEL_59:
    v16 = (char *)&v29[12].Blink;
    if ( v31 == (CVisual *)v15 )
    {
      v27 = v48;
      v28 = v51;
      goto LABEL_73;
    }
    if ( (unsigned int)(*(_DWORD *)v16 - 1) > 1 )
      break;
    v32 = *((_QWORD *)v16 + 1);
    v28 = v51;
    if ( v48 > v32 )
      v32 = v48;
    v27 = v32;
    v48 = v32;
    if ( *((_QWORD *)v49 + 30) )
    {
      if ( v51 <= *((_QWORD *)v16 + 4) )
        v28 = *((_QWORD *)v16 + 4);
      v51 = v28;
    }
    v49 = (CVisual *)*((_QWORD *)v49 + 10);
    if ( !v49 )
    {
      v16 = p_Blink;
      goto LABEL_73;
    }
  }
  v16 = p_Blink;
  if ( v5 <= 3 )
    v5 = 3;
  v38 = *((_QWORD *)a1 + 8);
  v28 = v51;
LABEL_75:
  if ( v28 > v38 )
    *((_QWORD *)a1 + 5) = 0LL;
LABEL_8:
  v17 = *a1;
  if ( v5 > (int)*a1 )
    v9 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 5) = a3[1].Flink[22].Flink;
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 7) = a3[1].Flink[22].Flink;
  }
  if ( !*((_QWORD *)a1 + 6) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 6) = a3[1].Flink[22].Flink;
  }
  if ( v9 )
  {
    v24 = CCpuClippingData::CalcMode((__int64)a3, v5, v52);
    v17 = *a1;
    if ( *a1 != v24 )
    {
      *a1 = v24;
      v10 = 1;
      v17 = v24;
      *((_QWORD *)a1 + 1) = a3[1].Flink[22].Flink;
    }
  }
  *((_BYTE *)a1 + 76) = a5;
  if ( !v16 || *(_DWORD *)v16 == 5 || *((_QWORD *)v16 + 4) <= *((_QWORD *)a1 + 4) || v17 - 1 > 1 )
  {
    if ( v10 )
      goto LABEL_26;
    goto LABEL_21;
  }
  v10 = 1;
LABEL_26:
  if ( v17 == 5 )
  {
LABEL_21:
    if ( !v9 && !v10 )
      return 0LL;
    v19 = p_Blink && *((_DWORD *)p_Blink + 18);
    v20 = *a1;
    v21 = 0;
    v22 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v22;
    a1[18] = 0;
    v23 = v20 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        return 0LL;
    }
    else
    {
      if ( v22 <= *((_QWORD *)p_Blink + 8) )
        v22 = *((_QWORD *)p_Blink + 8);
      *((_QWORD *)a1 + 8) = v22;
      if ( v19 )
      {
        v21 = *((_DWORD *)p_Blink + 18);
        if ( v22 <= *((_QWORD *)a1 + 5) )
          v22 = *((_QWORD *)a1 + 5);
        a1[18] = v21;
      }
    }
    if ( v22 <= *((_QWORD *)a1 + 6) )
      v22 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 8) = v22;
    if ( v19 || a3[15].Flink )
    {
      if ( v22 <= *((_QWORD *)a1 + 7) )
        v22 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v22;
      if ( a3[15].Flink )
        a1[18] = v21 + 1;
    }
    return 0LL;
  }
  if ( !*((_QWORD *)a1 + 2) )
  {
    v41 = operator new(0x44uLL);
    if ( v41 )
      v41[16] = 0;
    *((_QWORD *)a1 + 2) = v41;
    if ( !v41 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, -2147024882, 0x175u, 0LL);
      goto LABEL_118;
    }
  }
  if ( !a3[15].Flink || *a1 == 4 )
  {
    if ( *((_QWORD *)a1 + 3) )
    {
      operator delete(*((void **)a1 + 3));
      *((_QWORD *)a1 + 3) = 0LL;
    }
    goto LABEL_31;
  }
  if ( *((_QWORD *)a1 + 3) )
    goto LABEL_31;
  v43 = operator new(0x44uLL);
  if ( v43 )
    v43[16] = 0;
  *((_QWORD *)a1 + 3) = v43;
  if ( v43 )
  {
LABEL_31:
    CVisual::CalcCpuClippingTransform(a3, *a1, a2);
    *((_QWORD *)a1 + 4) = a3[1].Flink[22].Flink;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, -2147024882, 0x17Eu, 0LL);
LABEL_118:
  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024882, 0xC6u, 0LL);
  return 2147942414LL;
}
