/*
 * XREFs of _RtlQueryModuleInformation@12 @ 0x4B342BC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

signed int __stdcall RtlQueryModuleInformation(unsigned int *a1, int a2, int a3)
{
  signed int result; // eax
  unsigned int *Heap; // ebx
  ULONG i; // eax
  NTSTATUS v6; // eax
  int v7; // esi
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edi
  _WORD *v11; // esi
  _WORD *v12; // edx
  _WORD *v13; // edi
  SIZE_T v14; // [esp-4h] [ebp-154h]
  ULONG ReturnLength; // [esp+Ch] [ebp-144h] BYREF
  _WORD *v16; // [esp+10h] [ebp-140h]
  int v17; // [esp+14h] [ebp-13Ch]
  unsigned int v18; // [esp+18h] [ebp-138h]
  unsigned int *v19; // [esp+1Ch] [ebp-134h]
  NTSTATUS v20; // [esp+20h] [ebp-130h]
  unsigned int v21; // [esp+24h] [ebp-12Ch]
  _BYTE SystemInformation[292]; // [esp+28h] [ebp-128h] BYREF

  v19 = a1;
  v17 = a3;
  if ( a2 != 4 )
  {
    if ( a2 != 268 )
      return -1073741584;
    result = (a3 & 3) != 0 ? 0xC00000F1 : 0;
LABEL_7:
    if ( result < 0 )
      return result;
    goto LABEL_8;
  }
  if ( (a3 & 3) != 0 )
  {
    result = -1073741583;
    goto LABEL_7;
  }
LABEL_8:
  Heap = (unsigned int *)SystemInformation;
  for ( i = 288; ; i = ReturnLength )
  {
    ReturnLength = 0;
    v6 = NtQuerySystemInformation(SystemModuleInformation, Heap, i, &ReturnLength);
    v7 = v6;
    v20 = v6;
    if ( v6 < 0 && v6 != -1073741820 )
      break;
    v8 = v17;
    if ( !v17 )
    {
      v9 = a2 * ((ReturnLength - 4) / 0x11C);
      v7 = 0;
LABEL_28:
      *v19 = v9;
      break;
    }
    if ( v6 >= 0 )
    {
      v9 = a2 * *Heap;
      v21 = v9;
      if ( *v19 >= v9 )
      {
        v10 = 0;
        v18 = 0;
        if ( *Heap )
        {
          v11 = (_WORD *)(v17 + 8);
          v16 = (_WORD *)(v17 + 8);
          v12 = (_WORD *)Heap + 15;
          do
          {
            if ( a2 == 4 )
            {
              *(_DWORD *)(v8 + 4 * v10) = *(_DWORD *)(v12 - 9);
            }
            else
            {
              v13 = v16;
              *((_DWORD *)v11 - 2) = *(_DWORD *)(v12 - 9);
              *((_DWORD *)v11 - 1) = *(_DWORD *)(v12 - 7);
              *v11 = *v12;
              qmemcpy(v13 + 1, v12 + 1, 0x100u);
              v8 = v17;
              v10 = v18;
              v11 = v16;
            }
            ++v10;
            v11 += 134;
            v12 += 142;
            v18 = v10;
            v16 = v11;
          }
          while ( v10 < *Heap );
          v7 = v20;
          v9 = v21;
        }
      }
      else
      {
        v7 = -1073741789;
      }
      goto LABEL_28;
    }
    if ( Heap != (unsigned int *)SystemInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    LODWORD(v14) = ReturnLength;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v14);
    if ( !Heap )
      return -1073741670;
  }
  if ( Heap != (unsigned int *)SystemInformation )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
