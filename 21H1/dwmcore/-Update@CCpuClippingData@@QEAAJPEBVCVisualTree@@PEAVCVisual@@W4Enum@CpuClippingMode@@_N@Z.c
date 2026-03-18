/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18005AA10
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18001DEBC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800591F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800B6674 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3, int a4, char a5)
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
  int v17; // r9d
  __int128 *v19; // rbp
  _DWORD *v20; // rax
  bool v21; // r8
  int v22; // ecx
  int v23; // r9d
  unsigned __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  struct _LIST_ENTRY *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  struct _LIST_ENTRY *v31; // rdi
  char v32; // al
  CVisual *v33; // r10
  unsigned __int64 v34; // rax
  __int64 Flink_high; // rax
  struct _LIST_ENTRY **v36; // rdx
  __int64 i; // rcx
  struct _LIST_ENTRY **v38; // rcx
  struct _LIST_ENTRY *v39; // rcx
  unsigned __int64 v40; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct _LIST_ENTRY *v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // [rsp+40h] [rbp-58h]
  CVisual *v50; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v52; // [rsp+B0h] [rbp+18h]
  bool v53; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v53 = a4 == 2;
  v9 = *a1 == 0;
  v10 = 0;
  p_Blink = 0LL;
  if ( a2[3].Blink == a3 )
  {
    v27 = 3;
    if ( a4 > 3 )
      v27 = a4;
    v5 = v27;
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
        v42 = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( v42[2].Flink != a2 )
          {
            v42 = v42->Flink;
            if ( v42 == TreeDataListHead )
              goto LABEL_4;
          }
          v13 = v42 - 18;
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
  v36 = &v14->Blink;
  for ( i = 0LL; (unsigned int)i < (unsigned int)Flink_high; v36 = (struct _LIST_ENTRY **)((char *)v36 + 1) )
  {
    if ( *(_BYTE *)v36 == 8 )
      break;
    i = (unsigned int)(i + 1);
  }
  v38 = (unsigned int)i >= (unsigned int)Flink_high
      ? 0LL
      : (struct _LIST_ENTRY **)((char *)&v14->Blink + 8 * i - (((_BYTE)Flink_high + 15) & 7) + Flink_high + 7);
  v39 = *v38;
  if ( v39 )
    v15 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v39->Flink->Flink[12].Blink)(v39->Flink);
  else
LABEL_6:
    v15 = 0LL;
  v16 = p_Blink;
  if ( !v15 )
    goto LABEL_8;
  v28 = a2;
  if ( a3 == a2[3].Blink )
    goto LABEL_8;
  v29 = 0LL;
  v30 = 0LL;
  v49 = 0LL;
  v52 = 0LL;
  v50 = (CVisual *)a3[5].Flink;
  if ( !v50 )
  {
LABEL_76:
    v40 = *((_QWORD *)a1 + 8);
    if ( v29 > v40 )
      v9 = 1;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v31 = 0LL;
    v32 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v28->Flink[12].Blink)(v28);
    v33 = v50;
    if ( v32 )
    {
      v31 = (struct _LIST_ENTRY *)((char *)v50 + 320);
LABEL_61:
      v28 = a2;
      goto LABEL_62;
    }
    v46 = CVisual::GetTreeDataListHead(v50);
    if ( !v46 )
      goto LABEL_61;
    v47 = v46->Flink;
    if ( v46->Flink == v46 )
      goto LABEL_61;
    v28 = a2;
    while ( v47[2].Flink != a2 )
    {
      v47 = v47->Flink;
      if ( v47 == v46 )
        goto LABEL_62;
    }
    v31 = v47 - 18;
LABEL_62:
    v16 = (char *)&v31[12].Blink;
    if ( v33 == (CVisual *)v15 )
    {
      v29 = v49;
      v30 = v52;
      goto LABEL_76;
    }
    if ( (unsigned int)(*(_DWORD *)v16 - 1) > 1 )
      break;
    v34 = *((_QWORD *)v16 + 1);
    v30 = v52;
    if ( v49 > v34 )
      v34 = v49;
    v29 = v34;
    v49 = v34;
    if ( *((_QWORD *)v50 + 30) )
    {
      if ( v52 <= *((_QWORD *)v16 + 4) )
        v30 = *((_QWORD *)v16 + 4);
      v52 = v30;
    }
    v50 = (CVisual *)*((_QWORD *)v50 + 10);
    if ( !v50 )
    {
      v16 = p_Blink;
      goto LABEL_76;
    }
  }
  v16 = p_Blink;
  if ( v5 <= 3 )
    v5 = 3;
  v40 = *((_QWORD *)a1 + 8);
  v30 = v52;
LABEL_78:
  if ( v30 > v40 )
    *((_QWORD *)a1 + 5) = 0LL;
LABEL_8:
  v17 = *a1;
  if ( v5 > *a1 )
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
    v26 = CCpuClippingData::CalcMode(a3, (unsigned int)v5, v53);
    v17 = *a1;
    if ( *a1 != v26 )
    {
      *a1 = v26;
      v10 = 1;
      v17 = v26;
      *((_QWORD *)a1 + 1) = a3[1].Flink[22].Flink;
    }
  }
  *((_BYTE *)a1 + 76) = a5;
  if ( !v16 || *(_DWORD *)v16 == 5 || *((_QWORD *)v16 + 4) <= *((_QWORD *)a1 + 4) || (unsigned int)(v17 - 1) > 1 )
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
    v21 = p_Blink && *((_DWORD *)p_Blink + 18);
    v22 = *a1;
    v23 = 0;
    v24 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v24;
    a1[18] = 0;
    v25 = v22 - 1;
    if ( v25 )
    {
      if ( v25 != 2 )
        return 0LL;
    }
    else
    {
      if ( v24 <= *((_QWORD *)p_Blink + 8) )
        v24 = *((_QWORD *)p_Blink + 8);
      *((_QWORD *)a1 + 8) = v24;
      if ( v21 )
      {
        v23 = *((_DWORD *)p_Blink + 18);
        if ( v24 <= *((_QWORD *)a1 + 5) )
          v24 = *((_QWORD *)a1 + 5);
        a1[18] = v23;
      }
    }
    if ( v24 <= *((_QWORD *)a1 + 6) )
      v24 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 8) = v24;
    if ( v21 || a3[15].Flink )
    {
      if ( v24 <= *((_QWORD *)a1 + 7) )
        v24 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v24;
      if ( a3[15].Flink )
        a1[18] = v23 + 1;
    }
    return 0LL;
  }
  v19 = 0LL;
  if ( v16 && *(_DWORD *)v16 != 5 )
    v19 = (__int128 *)*((_QWORD *)v16 + 2);
  if ( !*((_QWORD *)a1 + 2) )
  {
    v43 = operator new(0x44uLL);
    if ( v43 )
      v43[16] = 0;
    *((_QWORD *)a1 + 2) = v43;
    if ( !v43 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, -2147024882, 0x175u, 0LL);
      goto LABEL_121;
    }
  }
  if ( !a3[15].Flink || *a1 == 4 )
  {
    v20 = (_DWORD *)*((_QWORD *)a1 + 3);
    if ( v20 )
    {
      operator delete(*((void **)a1 + 3));
      v20 = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
    }
    goto LABEL_34;
  }
  v20 = (_DWORD *)*((_QWORD *)a1 + 3);
  if ( v20 )
    goto LABEL_34;
  v20 = operator new(0x44uLL);
  if ( v20 )
    v20[16] = 0;
  *((_QWORD *)a1 + 3) = v20;
  if ( v20 )
  {
LABEL_34:
    CVisual::CalcCpuClippingTransform((__int64)a3, *a1, (__int64)a2, v19, &a5, *((CMILMatrix **)a1 + 2), (__int64)v20);
    *((_QWORD *)a1 + 4) = a3[1].Flink[22].Flink;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024882, 0x17Eu, 0LL);
LABEL_121:
  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024882, 0xC6u, 0LL);
  return 2147942414LL;
}
