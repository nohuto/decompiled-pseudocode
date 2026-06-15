/*
 * XREFs of ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x140069AFC
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14006955C (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14006A258 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006A37C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x1400696E8 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
 */

__int64 __fastcall SpatialBlock::GetMemoryRequirement(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  int AlignedBufferSize; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v19; // edx
  unsigned int v20[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(a1, &v22);
  if ( AlignedBufferSize < 0 )
  {
    v9 = 272LL;
    goto LABEL_28;
  }
  if ( (unsigned __int64)(v6 * v5) > 0xFFFFFFFF )
  {
    v9 = 277LL;
    goto LABEL_27;
  }
  v10 = 2LL * (unsigned int)(v6 * v5);
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = 278LL;
    goto LABEL_27;
  }
  if ( (unsigned __int64)(v6 * v7) > 0xFFFFFFFF )
  {
    v9 = 282LL;
    goto LABEL_27;
  }
  v11 = 2LL * (unsigned int)(v6 * v7);
  if ( v11 > 0xFFFFFFFF )
  {
    v9 = 283LL;
    goto LABEL_27;
  }
  v12 = v6 * v22;
  if ( v12 > 0xFFFFFFFF )
  {
    v9 = 287LL;
    goto LABEL_27;
  }
  v13 = 2LL * (unsigned int)v12;
  if ( v13 > 0xFFFFFFFF )
  {
    v9 = 288LL;
    goto LABEL_27;
  }
  v14 = v10 + 28;
  if ( (unsigned int)v10 >= 0xFFFFFFE4 )
  {
    v9 = 292LL;
LABEL_27:
    AlignedBufferSize = -2147024362;
    goto LABEL_28;
  }
  v15 = v14 + v11;
  if ( v15 < v14 )
  {
    v9 = 293LL;
    goto LABEL_27;
  }
  v20[0] = v15;
  v16 = SpatialBlock::GetAlignedBufferSize(v15, v20);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)v16);
    return v17;
  }
  v19 = v20[0] + v13;
  if ( v20[0] + (unsigned int)v13 < v20[0] )
  {
    AlignedBufferSize = -2147024362;
    v19 = -1;
  }
  else
  {
    AlignedBufferSize = 0;
  }
  *a5 = v19;
  if ( AlignedBufferSize >= 0 )
    return 0LL;
  v9 = 296LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)(unsigned int)AlignedBufferSize);
  return (unsigned int)AlignedBufferSize;
}
