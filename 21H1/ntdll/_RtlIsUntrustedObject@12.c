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

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  _BYTE *Heap; // edi
  NTSTATUS result; // eax
  int v5; // ebx
  __int16 v6; // ax
  ACL *v7; // esi
  _BYTE *AceByType; // eax
  _BYTE *v9; // ecx
  unsigned __int8 v10; // al
  SIZE_T v11; // [esp-4h] [ebp-8Ch]
  ULONG Index; // [esp+10h] [ebp-78h] BYREF
  ULONG LengthNeeded; // [esp+14h] [ebp-74h] BYREF
  char v14; // [esp+1Bh] [ebp-6Dh]
  _BYTE SecurityDescriptor[104]; // [esp+1Ch] [ebp-6Ch] BYREF

  Heap = SecurityDescriptor;
  *IsUntrustedObject = 1;
  if ( Object || !Handle )
    return -1073741811;
  v14 = 0;
  result = NtQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x68u, &LengthNeeded);
  v5 = result;
  if ( result < 0 )
  {
    if ( result != -1073741789 )
      return result;
    LODWORD(v11) = LengthNeeded;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
    if ( !Heap )
      return -1073741801;
    v14 = 1;
    v5 = NtQuerySecurityObject(Handle, 0x10u, Heap, 0x68u, &LengthNeeded);
    if ( v5 < 0 )
      goto LABEL_19;
  }
  v6 = *((_WORD *)Heap + 1);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = (ACL *)*((_DWORD *)Heap + 3);
    if ( v6 < 0 )
      v7 = v7 != 0 ? (ACL *)&Heap[(_DWORD)v7] : 0;
    if ( v7 )
    {
      Index = 0;
      while ( 1 )
      {
        AceByType = RtlFindAceByType(v7, 0x11u, &Index);
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
  *IsUntrustedObject = 0;
LABEL_18:
  if ( v14 )
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
