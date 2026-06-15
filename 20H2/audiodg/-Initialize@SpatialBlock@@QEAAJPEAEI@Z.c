/*
 * XREFs of ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14006A118
 * Callers:
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14006AA58 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x1400699BC (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x14006B1E8 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
 *     ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x14006B390 (-ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall SpatialBlock::Initialize(SpatialBlock *this, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int MemoryRequirement; // eax
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 94LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)v5);
    return v5;
  }
  *((_QWORD *)this + 4) = a2;
  if ( a3 <= 0x1C )
  {
    v5 = -2005139387;
    v6 = 97LL;
    goto LABEL_3;
  }
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(
                        *((_DWORD *)a2 + 5),
                        *((_DWORD *)a2 + 3),
                        *((_DWORD *)a2 + 4),
                        *((_DWORD *)a2 + 2),
                        &v14);
  v9 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)MemoryRequirement);
    return v9;
  }
  if ( a3 != v14 )
  {
    v5 = -2005139387;
    v6 = 105LL;
    goto LABEL_3;
  }
  v10 = SpatialBlock::ValidateDescriptorInSharedMemory(this);
  if ( v10 < 0 )
  {
    v11 = 108LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = SpatialBlock::SetPointersFromDescriptor(this, *((struct SpatialBlock::Descriptor **)this + 4));
  if ( v10 < 0 )
  {
    v11 = 110LL;
    goto LABEL_12;
  }
  v12 = *((_QWORD *)this + 4);
  *(_OWORD *)this = *(_OWORD *)v12;
  *((_QWORD *)this + 2) = *(_QWORD *)(v12 + 16);
  *((_DWORD *)this + 6) = *(_DWORD *)(v12 + 24);
  return 0LL;
}
