/*
 * XREFs of _RtlIsUntrustedObject@12 @ 0x4B3465C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 *     _NtQuerySecurityObject@20 @ 0x4B2F3F30 (_NtQuerySecurityObject@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlIsUntrustedObject(int a1, int a2, _BYTE *a3)
{
  _BYTE *Heap; // edi
  int result; // eax
  int SecurityObject; // ebx
  __int16 v6; // ax
  int v7; // esi
  unsigned __int8 *AceByType; // eax
  unsigned __int8 *v9; // ecx
  unsigned __int8 v10; // al
  unsigned int v11; // [esp+10h] [ebp-78h] BYREF
  int v12; // [esp+14h] [ebp-74h] BYREF
  char v13; // [esp+1Bh] [ebp-6Dh]
  _BYTE v14[104]; // [esp+1Ch] [ebp-6Ch] BYREF

  Heap = v14;
  *a3 = 1;
  if ( a2 || !a1 )
    return -1073741811;
  v13 = 0;
  result = NtQuerySecurityObject(a1, 16, (int)v14, 104, (int)&v12);
  SecurityObject = result;
  if ( result < 0 )
  {
    if ( result != -1073741789 )
      return result;
    Heap = (_BYTE *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12);
    if ( !Heap )
      return -1073741801;
    v13 = 1;
    SecurityObject = NtQuerySecurityObject(a1, 16, (int)Heap, 104, (int)&v12);
    if ( SecurityObject < 0 )
      goto LABEL_19;
  }
  v6 = *((_WORD *)Heap + 1);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = *((_DWORD *)Heap + 3);
    if ( v6 < 0 )
      v7 = v7 != 0 ? (unsigned int)&Heap[v7] : 0;
    if ( v7 )
    {
      v11 = 0;
      while ( 1 )
      {
        AceByType = RtlFindAceByType(v7, 17, &v11);
        v9 = AceByType;
        if ( !AceByType )
          break;
        if ( (AceByType[1] & 8) == 0 )
        {
          v10 = AceByType[9];
          if ( !v10 || *(_DWORD *)&v9[4 * v10 + 12] < 0x2000u )
            goto LABEL_18;
          break;
        }
      }
    }
  }
  *a3 = 0;
LABEL_18:
  if ( v13 )
LABEL_19:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return SecurityObject;
}
