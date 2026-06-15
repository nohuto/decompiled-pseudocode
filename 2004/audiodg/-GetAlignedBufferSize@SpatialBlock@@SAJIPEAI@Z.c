/*
 * XREFs of ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x140060A78
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x1400608EC (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x140060E8C (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x1400626A8 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialBlock::GetAlignedBufferSize(unsigned int a1, unsigned int *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = a1;
  if ( (a1 & 0x1F) == 0 )
    return 0LL;
  v2 = -1;
  v3 = a1 - (a1 & 0x1F) + 32;
  if ( v3 >= a1 )
    v2 = a1 - (a1 & 0x1F) + 32;
  v4 = v3 < a1 ? 0x80070216 : 0;
  *a2 = v2;
  if ( v3 >= a1 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF7,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)v4);
  return v4;
}
