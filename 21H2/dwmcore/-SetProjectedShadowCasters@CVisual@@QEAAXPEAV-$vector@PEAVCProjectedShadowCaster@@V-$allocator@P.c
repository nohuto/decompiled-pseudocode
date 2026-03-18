/*
 * XREFs of ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801F867C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1801F699C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18004C27C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetProjectedShadowCasters(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  _DWORD *v5; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r11

  v2 = (__int64 *)(a1 + 232);
  v3 = 0LL;
  v5 = (_DWORD *)*v2;
  result = *(unsigned int *)*v2;
  if ( a2 )
  {
    if ( (result & 0x40000) == 0 )
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 14);
      *(_QWORD *)result = a2;
      return result;
    }
    v10 = (unsigned int)v5[1];
    v11 = v5 + 2;
    result = 0LL;
    if ( (_DWORD)v10 )
    {
      while ( *v11 != 14 )
      {
        result = (unsigned int)(result + 1);
        ++v11;
        if ( (unsigned int)result >= (unsigned int)v10 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (unsigned int)result >= (unsigned int)v10 )
      {
LABEL_11:
        *v3 = a2;
        return result;
      }
    }
    v12 = 8LL * (unsigned int)result;
    result = ((_BYTE)v10 + 15) & 7;
    v3 = (_QWORD *)((char *)v5 + v12 - result + v10 + 15);
    goto LABEL_11;
  }
  if ( (result & 0x40000) != 0 )
  {
    v7 = *v2;
    *v5 = result & 0xFFFBFFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 14);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v9;
    }
  }
  return result;
}
