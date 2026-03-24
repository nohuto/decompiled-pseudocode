/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180037C58
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800372E0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180036A38 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180037F84 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18003805C (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180038124 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180038174 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  int v3; // r12d
  _QWORD *v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // edx
  int FirstItemSafe; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+50h] BYREF
  void *v21; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v5 = (_QWORD *)((char *)this + 128);
  v18[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 64));
  v8 = *((_DWORD *)this + 38);
  v18[1] = 0LL;
  v19 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v9 <= *((_DWORD *)this + 37) )
    {
      *(_QWORD *)(*v5 + 8LL * v8) = 0LL;
      *((_DWORD *)this + 38) = v9;
      goto LABEL_4;
    }
    v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 128, 8u, v7, &v19);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x14u, 0LL);
    return v12;
  }
LABEL_4:
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v18, &v20, &v21, (unsigned int *)&v19);
  v12 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v17 = 23;
LABEL_90:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, FirstItemSafe, v17, 0LL);
    return v12;
  }
  if ( !FirstItemSafe )
  {
    while ( 1 )
    {
      if ( v20 <= 0x1D1 )
      {
        switch ( v20 )
        {
          case 0x1D1u:
            if ( (unsigned int)v19 < 0x18 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x6Fu, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 117;
              goto LABEL_90;
            }
            break;
          case 0x1CCu:
            if ( (unsigned int)v19 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x27u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 45;
              goto LABEL_90;
            }
            break;
          case 0x1CDu:
            if ( (unsigned int)v19 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x34u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 58;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 59;
              goto LABEL_90;
            }
            break;
          case 0x1CEu:
            if ( (unsigned int)v19 < 0x1C )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x42u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 72;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 73;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 74;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 75;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 76;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 77;
              goto LABEL_90;
            }
            break;
          case 0x1CFu:
            if ( (unsigned int)v19 < 0x18 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x54u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 90;
              goto LABEL_90;
            }
            break;
          case 0x1D0u:
            if ( (unsigned int)v19 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x61u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 103;
              goto LABEL_90;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 104;
              goto LABEL_90;
            }
            break;
          default:
LABEL_85:
            v12 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x21u, 0LL);
            return v12;
        }
      }
      else
      {
        switch ( v20 )
        {
          case 0x1D2u:
            if ( (unsigned int)v19 < 0x24 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x7Cu, 0LL);
              return v12;
            }
            break;
          case 0x1D3u:
            if ( (unsigned int)v19 < 0x24 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x83u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 137;
              goto LABEL_90;
            }
            break;
          case 0x1D4u:
            if ( (unsigned int)v19 < 8 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x90u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 150;
              goto LABEL_90;
            }
            break;
          case 0x1D5u:
            if ( (unsigned int)v19 < 4 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x9Du, 0LL);
              return v12;
            }
            --v3;
            break;
          case 0x1D6u:
            if ( (unsigned int)v19 < 8 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xA6u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v17 = 172;
              goto LABEL_90;
            }
            ++v3;
            break;
          default:
            goto LABEL_85;
        }
      }
      FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v18, &v20, &v21, (unsigned int *)&v19);
      v12 = FirstItemSafe;
      if ( FirstItemSafe < 0 )
        break;
      if ( FirstItemSafe )
        goto LABEL_15;
    }
    v17 = 180;
    goto LABEL_90;
  }
LABEL_15:
  v13 = 0;
  if ( v12 != 1 )
    v13 = v12;
  v12 = v13;
  if ( v3 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xC2u, 0LL);
  }
  return v12;
}
