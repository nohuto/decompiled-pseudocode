/*
 * XREFs of ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x180098080
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180098B30 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800984A4 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180098644 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180098694 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

__int64 __fastcall CRenderData::CheckPrimitiveCount(CRenderData *this)
{
  unsigned int v2; // edi
  int FirstItemSafe; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-58h]
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+10h] BYREF
  void *v11; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v8[1] = 0LL;
  v8[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 64));
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v8, &v9, &v11, &v10);
  v5 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v7 = 384;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, FirstItemSafe, v7, 0LL);
  }
  else
  {
    if ( !FirstItemSafe )
    {
      while ( 1 )
      {
        if ( v2 > 1 )
          goto LABEL_15;
        if ( v9 == 461 )
          break;
        if ( v9 == 460 )
          goto LABEL_17;
        if ( v9 <= 0x1CE )
          goto LABEL_18;
        if ( v9 <= 0x1D1 )
          break;
        if ( v9 == 466 )
        {
LABEL_17:
          ++v2;
        }
        else
        {
          if ( v9 <= 0x1D4 )
            break;
          if ( v9 > 0x1D6 )
          {
LABEL_18:
            v5 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x187u, 0LL);
            return v5;
          }
        }
LABEL_13:
        FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v8, &v9, &v11, &v10);
        v5 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v7 = 415;
          goto LABEL_21;
        }
        if ( FirstItemSafe )
          goto LABEL_15;
      }
      v2 = 2;
      goto LABEL_13;
    }
LABEL_15:
    v5 = 0;
    *((_BYTE *)this + 265) = v2 <= 1;
  }
  return v5;
}
