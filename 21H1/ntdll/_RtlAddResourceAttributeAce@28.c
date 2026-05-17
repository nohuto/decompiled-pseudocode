/*
 * XREFs of _RtlAddResourceAttributeAce@28 @ 0x4B34B260
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpValidAttributeInfo@4 @ 0x4B34CC0F (_RtlpValidAttributeInfo@4.c)
 */

int __stdcall RtlAddResourceAttributeAce(int a1, unsigned int a2, int a3, int a4, int a5, int a6, unsigned int *a7)
{
  _BYTE *Heap; // ebx
  int v8; // esi
  unsigned __int8 v9; // al
  unsigned __int16 v10; // ax
  int *v11; // eax
  int v12; // ebx
  int v13; // esi
  int v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned int v16; // eax
  __int16 v17; // cx
  char v18; // al
  unsigned __int8 *v20; // [esp-4h] [ebp-140h]
  unsigned int v21; // [esp+Ch] [ebp-130h]
  int v22; // [esp+10h] [ebp-12Ch]
  unsigned int v23; // [esp+14h] [ebp-128h] BYREF
  void *v24; // [esp+18h] [ebp-124h]
  unsigned int *v25; // [esp+1Ch] [ebp-120h]
  size_t Size; // [esp+20h] [ebp-11Ch] BYREF
  int v27; // [esp+24h] [ebp-118h]
  int v28; // [esp+28h] [ebp-114h]
  char v29; // [esp+2Fh] [ebp-10Dh]
  _BYTE *Buf2; // [esp+30h] [ebp-10Ch] BYREF
  __int16 v31; // [esp+34h] [ebp-108h]
  _BYTE Src[256]; // [esp+38h] [ebp-104h] BYREF

  v28 = a6;
  v25 = a7;
  v23 = 0;
  Heap = 0;
  Buf2 = 0;
  v24 = (void *)a5;
  v31 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !a7 )
    return -1073741811;
  *v25 = 0;
  if ( !a1 )
    return -1073741705;
  if ( !RtlValidSid((_BYTE *)a5) )
    return -1073741704;
  if ( memcmp((const void *)(a5 + 2), &Buf2, 6u) )
    return -1073741811;
  if ( *(_BYTE *)(a5 + 1) != 1 || *(_DWORD *)(a5 + 8) )
  {
    v8 = -1073741811;
    goto LABEL_40;
  }
  v9 = *(_BYTE *)a1;
  v29 = v9;
  if ( v9 > 4u )
    return -1073741735;
  v27 = 4;
  if ( a2 > 4 )
    return -1073741735;
  if ( v9 <= (unsigned __int8)a2 )
    v29 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 || !(unsigned __int8)RtlpValidAttributeInfo(v28) || *(_DWORD *)(v28 + 4) != 1 )
    return -1073741811;
  Heap = Src;
  Buf2 = Src;
  v8 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_DWORD *)(v28 + 8), Src, (int)&Size);
  v22 = v8;
  if ( v8 == -1073741789 )
  {
    Heap = (_BYTE *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    Buf2 = Heap;
    if ( !Heap )
      return -1073741801;
    v8 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_DWORD *)(v28 + 8), Heap, (int)&Size);
    v22 = v8;
  }
  if ( v8 < 0 )
    goto LABEL_40;
  if ( RtlValidAcl(a1) && RtlFirstFreeAce(a1, &v23) )
  {
    if ( Size > 0xFFFF || (v10 = 4 * (v27 + *((unsigned __int8 *)v24 + 1)), (unsigned __int16)(v10 + Size) < v10) )
    {
      v8 = -1073741675;
      goto LABEL_40;
    }
    v21 = 0;
    v28 = (unsigned __int16)(v10 + Size);
    v11 = (int *)v25;
    v27 = 8;
    *v25 = 8;
    if ( *(_WORD *)(a1 + 4) )
    {
      v12 = a1 + 8;
      do
      {
        v13 = *v11 + *(unsigned __int16 *)(v12 + 2);
        *v11 = v13;
        v12 += *(unsigned __int16 *)(v12 + 2);
        v27 = v13;
        ++v21;
      }
      while ( v21 < *(unsigned __int16 *)(a1 + 4) );
      Heap = Buf2;
    }
    v14 = v27 + (unsigned __int16)v28;
    *v11 = v14;
    v27 = v14;
    if ( v23 )
    {
      v8 = v22;
      v15 = (unsigned __int8 *)v24;
      if ( (unsigned __int16)v28 + v23 <= a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
      {
        v16 = v23;
        v20 = (unsigned __int8 *)v24;
        *(_DWORD *)(v23 + 4) = 0;
        *(_BYTE *)(v16 + 1) = a3;
        v17 = v28;
        *(_BYTE *)v16 = 18;
        *(_WORD *)(v16 + 2) = v17;
        RtlCopySid(4 * v15[1] + 8, (void *)(v16 + 8), v20);
        memcpy((void *)(v23 + 16 + 4 * *((unsigned __int8 *)v24 + 1)), Heap, Size);
        v18 = v29;
        ++*(_WORD *)(a1 + 4);
        *(_BYTE *)a1 = v18;
        goto LABEL_40;
      }
      v14 = v27;
    }
    v8 = -1073741671;
    *v25 = (v14 + 3) & 0xFFFFFFFC;
    goto LABEL_40;
  }
  v8 = -1073741705;
LABEL_40:
  if ( Heap && Heap != Src )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return v8;
}
