/*
 * XREFs of _RtlAcquirePrivilege@16 @ 0x4B345D20
 * Callers:
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     AcquireDebugPrivilege @ 0x4B3898C0 (AcquireDebugPrivilege.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     _RtlpOpenThreadToken@8 @ 0x4B349188 (_RtlpOpenThreadToken@8.c)
 */

int __stdcall RtlAcquirePrivilege(int a1, unsigned int a2, int a3, int *a4)
{
  char v4; // bl
  int Heap; // esi
  struct _TEB *v7; // eax
  int v8; // edi
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h] BYREF

  v4 = a3;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (a3 & 2) != 0 )
    v4 = a3 | 1;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (a2 - 1) + 1060);
  if ( !Heap )
    return -1073741801;
  v7 = NtCurrentTeb();
  *(_DWORD *)Heap = 0;
  *(_DWORD *)(Heap + 4) = 0;
  *(_DWORD *)(Heap + 16) = 0;
  if ( !v7->IsImpersonating )
    goto LABEL_14;
  if ( (v4 & 1) != 0 )
  {
    v8 = RtlpOpenThreadToken(4, Heap + 4);
    if ( v8 < 0 )
    {
LABEL_10:
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v8;
    }
    *(_DWORD *)(Heap + 16) |= 1u;
    v14 = 0;
    ZwSetInformationThread(-2, 5, (int)&v14, 4);
  }
  else
  {
    v8 = RtlpOpenThreadToken(40, Heap);
    if ( v8 < 0 )
      goto LABEL_10;
  }
  if ( !*(_DWORD *)Heap )
  {
LABEL_14:
    if ( (v4 & 2) == 0 )
    {
      v8 = RtlImpersonateSelfEx(3, 40, (HANDLE *)Heap);
      if ( v8 >= 0 )
      {
        *(_DWORD *)(Heap + 16) |= 1u;
        goto LABEL_19;
      }
LABEL_34:
      if ( (*(_BYTE *)(Heap + 16) & 1) != 0 )
      {
        ZwSetInformationThread(-2, 5, Heap + 4, 4);
        if ( *(_DWORD *)(Heap + 4) )
          NtClose(*(HANDLE *)(Heap + 4));
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v8;
    }
    v8 = ZwOpenProcessTokenEx(-1, 40, 512, Heap);
    if ( v8 < 0 )
      goto LABEL_34;
    *(_DWORD *)(Heap + 16) |= 2u;
  }
LABEL_19:
  *(_DWORD *)(Heap + 12) = Heap + 1044;
  v9 = 0;
  *(_DWORD *)(Heap + 8) = Heap + 20;
  *(_DWORD *)(Heap + 1044) = a2;
  if ( a2 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(Heap + 12);
      v10 += 12;
      *(_DWORD *)(v10 + v11 - 8) = *(_DWORD *)(a1 + 4 * v9);
      *(_DWORD *)(v10 + v11 - 4) = 0;
      ++v9;
      *(_DWORD *)(v10 + *(_DWORD *)(Heap + 12)) = 2;
    }
    while ( v9 < a2 );
  }
  v15 = 1024;
  v8 = ZwAdjustPrivilegesToken(*(_DWORD *)Heap, 0, *(_DWORD *)(Heap + 12), 1024, *(_DWORD *)(Heap + 8), (int)&v15);
  if ( v8 == -1073741789 )
  {
    while ( 1 )
    {
      v12 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v15);
      *(_DWORD *)(Heap + 8) = v12;
      if ( !v12 )
        break;
      v8 = ZwAdjustPrivilegesToken(*(_DWORD *)Heap, 0, *(_DWORD *)(Heap + 12), v15, v12, (int)&v15);
      if ( v8 != -1073741789 )
        goto LABEL_27;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(Heap + 8));
    }
    v8 = -1073741801;
  }
LABEL_27:
  if ( v8 == 262 )
  {
    if ( a2 == 1 )
    {
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = 0;
  }
  if ( v8 < 0 )
  {
LABEL_30:
    v13 = *(_DWORD *)(Heap + 8);
    if ( v13 && v13 != Heap + 20 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(Heap + 8));
    NtClose(*(HANDLE *)Heap);
    goto LABEL_34;
  }
  *a4 = Heap;
  return 0;
}
