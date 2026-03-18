/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FE2C4
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019D67C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FE2C4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x1801709A0 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019D534 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801FA29C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x1801FE1CC (-AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FE2C4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, bool a3)
{
  CPolygon **v4; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // rcx
  LPVOID v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct CPolygon *v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v18; // [rsp+88h] [rbp+48h] BYREF

  v4 = (CPolygon **)*((_QWORD *)this + 4);
  v18 = 0LL;
  v7 = 0;
  v16 = 0LL;
  v17 = 0;
  if ( v4 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v7;
  }
  v8 = CPolygon::CompareAndSplit(*v4, a2, (enum D2DVectorHelper::Relation *)&v17, &v18, &v16);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 136;
    goto LABEL_29;
  }
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v18 = a2;
    }
    else if ( v17 == 2 )
    {
      v16 = a2;
    }
  }
  else
  {
    CBspNode::AddPolygon(this, a2);
  }
  if ( !v18 )
    goto LABEL_19;
  v10 = (LPVOID)*((_QWORD *)this + 2);
  if ( v10 )
    goto LABEL_17;
  v10 = CBspNode::operator new();
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CBspNode::`vftable';
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_BYTE *)v10 + 56) = a3;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
LABEL_17:
    v8 = CBspNode::PushPolygon((CBspNode *)v10, v18, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      v15 = 163;
      goto LABEL_29;
    }
LABEL_19:
    if ( !v16 )
      goto LABEL_30;
    v12 = (LPVOID)*((_QWORD *)this + 3);
    if ( !v12 )
    {
      v12 = CBspNode::operator new();
      if ( v12 )
      {
        *((_DWORD *)v12 + 2) = 0;
        *(_QWORD *)v12 = &CBspNode::`vftable';
        *((_QWORD *)v12 + 4) = 0LL;
        *((_QWORD *)v12 + 5) = 0LL;
        *((_QWORD *)v12 + 6) = 0LL;
        *((_BYTE *)v12 + 56) = a3;
        _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      }
      else
      {
        v12 = 0LL;
      }
      *((_QWORD *)this + 3) = v12;
      if ( !v12 )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0xABu, 0LL);
        goto LABEL_30;
      }
    }
    v8 = CBspNode::PushPolygon((CBspNode *)v12, v16, a3);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_30;
    v15 = 173;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v15, 0LL);
    goto LABEL_30;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xA1u, 0LL);
LABEL_30:
  if ( v17 == 3 )
  {
    if ( v18 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v18 + 8LL))(v18);
    if ( v16 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  if ( v7 < 0 )
  {
    ReleaseInterface<CPolygon>((__int64 *)this + 2);
    ReleaseInterface<CPolygon>((__int64 *)this + 3);
  }
  return (unsigned int)v7;
}
