/*
 * XREFs of _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

int __fastcall PsspCaptureAuxiliaryPages(_DWORD *a1, int a2, int a3, int *a4, int a5)
{
  int result; // eax
  int v6; // esi
  int v7; // ebx
  int Section; // edi
  void *v9; // edx
  int *v10; // edi
  int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  _DWORD *v15; // ecx
  _DWORD v16[2]; // [esp+Ch] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-20h] BYREF
  _DWORD *v18; // [esp+18h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-10h] BYREF
  void *v22; // [esp+28h] [ebp-Ch] BYREF
  int v23; // [esp+2Ch] [ebp-8h] BYREF
  int *Heap; // [esp+30h] [ebp-4h] BYREF
  int v25; // [esp+3Ch] [ebp+8h]

  v18 = a1;
  v19 = a2;
  result = RtlULongLongToUInt(&v20, 40, 0);
  if ( result >= 0 )
  {
    result = RtlULongLongToUInt(&v17, 4096, 0);
    if ( result >= 0 )
    {
      v6 = a3 & 0x20000000;
      v25 = a3 & 0x20000000;
      if ( v25 )
      {
        v7 = 0;
        v23 = v20;
        Heap = 0;
        result = NtAllocateVirtualMemory(-1, (int)&Heap, 0, (int)&v23, 4096, 4);
        if ( result < 0 )
          return result;
      }
      else
      {
        v7 = 0;
        Heap = (int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v20);
        if ( !Heap )
          return -1073741670;
      }
      v16[0] = v17;
      v16[1] = 0;
      Section = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A58D0, (int)v16, 4, 0x8000000, 0);
      if ( Section < 0 )
      {
        if ( !v6 )
        {
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
          return Section;
        }
        goto LABEL_11;
      }
      v22 = 0;
      v23 = 0;
      Section = ZwMapViewOfSection((int)Handle, -1, (int)&v22, 0, 0, 0, (int)&v23, 1, 0, 4);
      if ( Section < 0 )
      {
        NtClose(Handle);
        if ( !v6 )
        {
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
          return Section;
        }
LABEL_11:
        v23 = 0;
        NtFreeVirtualMemory(-1, (int)&Heap, (int)&v23, 0x8000);
        return Section;
      }
      v9 = v22;
      memset(Heap, 0, 0x28u);
      v10 = a4;
      if ( *a4 == 2147352576 )
      {
        qmemcpy(v9, (const void *)0x7FFE0000, 0x720u);
        v6 = v25;
        v10 = a4;
      }
      else if ( NtReadVirtualMemory(v19, *a4, (int)v9, 4096, 0) < 0 )
      {
LABEL_24:
        NtUnmapViewOfSection(-1, (int)v22);
        v13 = v18;
        v18[192] = v7;
        v13[1] |= 2 * (v6 != 0) + 2;
        v13[193] = Handle;
        v13[194] = Heap;
        while ( 1 )
        {
          v14 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v15 = v18;
        result = 0;
        v18[214] = MEMORY[0x7FFE0014];
        v15[215] = v14;
        return result;
      }
      if ( NtQueryVirtualMemory(v19, *v10, 0, (int)(Heap + 1), 28, 0) >= 0 )
      {
        *Heap = *v10;
        while ( 1 )
        {
          v11 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v12 = Heap;
        v6 = v25;
        v7 = 1;
        Heap[8] = MEMORY[0x7FFE0014];
        v12[9] = v11;
      }
      goto LABEL_24;
    }
  }
  return result;
}
