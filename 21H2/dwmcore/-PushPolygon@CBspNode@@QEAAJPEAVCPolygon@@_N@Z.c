/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180246EBC
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B4E34 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180246EBC (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18019E294 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z @ 0x1801B4C98 (--$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9358 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180246C7C (--0CBspNode@@QEAA@_N@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x180246DBC (-AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180246EBC (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, char a3)
{
  int v3; // edi
  struct CPolygon *v6; // rbx
  CPolygon **v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct CPolygon *v10; // r14
  CBspNode *v11; // rax
  CBspNode *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  CBspNode *v16; // rax
  CBspNode *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-20h]
  struct CPolygon *v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v22 = 0LL;
  v20 = 0LL;
  v6 = a2;
  v21 = 0;
  v7 = (CPolygon **)*((_QWORD *)this + 4);
  if ( v7 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v3;
  }
  v8 = CPolygon::CompareAndSplit(*v7, a2, (enum D2DVectorHelper::Relation *)&v21, &v22, &v20);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x80u);
    v10 = v22;
    v6 = v20;
    goto LABEL_31;
  }
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      v10 = v6;
    }
    else
    {
      v10 = v22;
      if ( v21 == 2 )
        goto LABEL_11;
    }
  }
  else
  {
    CBspNode::AddPolygon(this, v6);
    v10 = v22;
  }
  v6 = v20;
LABEL_11:
  if ( !v10 )
  {
LABEL_22:
    if ( !v6 )
      goto LABEL_31;
    v16 = (CBspNode *)*((_QWORD *)this + 3);
    if ( v16 )
      goto LABEL_26;
    v17 = (CBspNode *)CBspNode::operator new();
    if ( v17 )
    {
      v16 = CBspNode::CBspNode(v17, a3);
      *((_QWORD *)this + 3) = v16;
      if ( v16 )
      {
LABEL_26:
        v14 = CBspNode::PushPolygon(v16, v6, a3);
        v3 = v14;
        if ( v14 >= 0 )
          goto LABEL_31;
        v19 = 165;
        goto LABEL_17;
      }
    }
    else
    {
      *((_QWORD *)this + 3) = 0LL;
    }
    v19 = 163;
LABEL_20:
    v15 = -2147024882;
    v3 = -2147024882;
    goto LABEL_21;
  }
  v11 = (CBspNode *)*((_QWORD *)this + 2);
  if ( !v11 )
  {
    v12 = (CBspNode *)CBspNode::operator new();
    if ( v12 )
    {
      v11 = CBspNode::CBspNode(v12, a3);
      *((_QWORD *)this + 2) = v11;
      if ( v11 )
        goto LABEL_15;
    }
    else
    {
      *((_QWORD *)this + 2) = 0LL;
    }
    v19 = 153;
    goto LABEL_20;
  }
LABEL_15:
  v14 = CBspNode::PushPolygon(v11, v10, a3);
  v3 = v14;
  if ( v14 >= 0 )
    goto LABEL_22;
  v19 = 155;
LABEL_17:
  v15 = v14;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v15, v19);
LABEL_31:
  if ( v21 == 3 )
  {
    if ( v10 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v3 < 0 )
  {
    ReleaseInterface<CBspNode>((__int64 *)this + 2);
    ReleaseInterface<CBspNode>((__int64 *)this + 3);
  }
  return (unsigned int)v3;
}
