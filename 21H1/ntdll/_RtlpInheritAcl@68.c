/*
 * XREFs of _RtlpInheritAcl@68 @ 0x4B2D7852
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 */

int __thiscall RtlpInheritAcl(
        void *this,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int *a14,
        _BYTE *a15,
        _DWORD *a16)
{
  void *ProcessHeap; // edi
  int v17; // ecx
  int Heap; // eax
  int result; // eax
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a2 || this )
  {
    v17 = 200;
    v22 = 200;
    v21 = 0;
    while ( 1 )
    {
      Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v17);
      *a14 = Heap;
      if ( !Heap )
        return -1073741801;
      result = RtlpInheritAcl2(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, &v22, Heap, a15, a16);
      v20 = result;
      if ( result >= 0 )
        break;
      RtlFreeHeap((int)ProcessHeap, 0, *a14);
      result = v20;
      *a14 = 0;
      if ( v20 != -1073741789 )
        return result;
      if ( (unsigned int)++v21 >= 2 )
        return result;
      v17 = v22;
    }
    if ( !v22 )
    {
      RtlFreeHeap((int)ProcessHeap, 0, *a14);
      result = v20;
      *a14 = 0;
    }
  }
  else
  {
    *a15 = 0;
    *a16 = (unsigned __int8)a4 != 0 ? 0x400 : 0;
    *a14 = 0;
    return -2147483637;
  }
  return result;
}
